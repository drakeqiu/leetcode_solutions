# LeetCode Solutions Makefile
# 简化常用开发命令

BUILD_DIR := build
SOURCES := $(shell find . -path ./build -prune -o \( -name '*.cpp' -o -name '*.h' \) -print)

.PHONY: all build test clean format format-check tidy help

# 默认目标
all: build

# 编译项目
build:
	@mkdir -p $(BUILD_DIR)
	@cd $(BUILD_DIR) && cmake .. && make

# 运行所有测试
test: build
	@ctest --test-dir $(BUILD_DIR) --verbose --output-on-failure

# 运行特定题目测试 (用法: make test-0001 或 make test-0206)
test-%: build
	@ctest --test-dir $(BUILD_DIR) --verbose -R $*

# 清理构建目录
clean:
	@rm -rf $(BUILD_DIR)

# 格式化所有代码
format:
	@echo "Formatting source files..."
	@echo $(SOURCES) | xargs clang-format -i
	@echo "Done."

# 检查代码格式（不修改）
format-check:
	@echo "Checking code format..."
	@echo $(SOURCES) | xargs clang-format --dry-run --Werror

# 运行 clang-tidy 静态分析
tidy: build
	@echo "Running clang-tidy..."
	@find . -path ./build -prune -o \( -name '*.cpp' ! -name '*_test.cpp' \) -print | \
		xargs -r clang-tidy -p $(BUILD_DIR)

# AddressSanitizer 构建和测试
asan:
	@mkdir -p $(BUILD_DIR)
	@cd $(BUILD_DIR) && cmake .. -DCMAKE_BUILD_TYPE=Debug \
		-DCMAKE_CXX_FLAGS="-fsanitize=address -fno-omit-frame-pointer -g" && make
	@ASAN_OPTIONS=detect_leaks=1:abort_on_error=1 ctest --test-dir $(BUILD_DIR) --verbose

# 完整 CI 检查（格式 + 编译 + 测试）
ci: format-check build test

# 帮助信息
help:
	@echo "LeetCode Solutions Makefile"
	@echo ""
	@echo "用法: make [target]"
	@echo ""
	@echo "Targets:"
	@echo "  build        编译项目"
	@echo "  test         运行所有测试"
	@echo "  test-XXXX    运行特定题目测试 (如: make test-0206)"
	@echo "  clean        清理构建目录"
	@echo "  format       格式化所有代码"
	@echo "  format-check 检查代码格式"
	@echo "  tidy         运行 clang-tidy 静态分析"
	@echo "  asan         使用 AddressSanitizer 构建和测试"
	@echo "  ci           完整 CI 检查 (格式 + 编译 + 测试)"
	@echo "  help         显示此帮助信息"
