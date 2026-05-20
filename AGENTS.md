# LeetCode Solutions Project

> **开发规范：** 本项目遵循 [CLAUDE.md](CLAUDE.md) 中定义的编码指南和最佳实践。

## 项目概述
这是一个用于编写和管理 LeetCode 解题代码的项目，使用 C++17 编写，CMake 构建，集成 Google Test 进行单元测试。

## 项目结构规划

### 目录组织
```
leetcode_solutions/
├── CMakeLists.txt                    # 根 CMake 配置文件
├── README.md                         # 项目说明
├── AGENTS.md                         # 项目需求和规范文档
├── common/                           # 通用代码目录
│   ├── data_structures.h            # 通用数据结构（TreeNode, ListNode等）
│   ├── test_utils.h                 # 测试辅助函数
│   └── utils.h                      # 工具函数库
├── 0001_two_sum/                    # 题目目录（按题号+题名命名）
│   ├── solution.cpp                 # 解题代码
│   ├── solution_test.cpp            # 单元测试
│   └── README.md                    # 题目说明、思路、复杂度分析
├── 0002_add_two_numbers/
│   ├── solution.cpp
│   ├── solution_test.cpp
│   └── README.md
└── ...
```

### 命名规范
- **题目目录**：使用四位数字题号 + 下划线 + 题目英文名（小写，单词间用下划线分隔）
  - 示例：`0001_two_sum/`, `0002_add_two_numbers/`, `0042_trapping_rain_water/`
- **解题文件**：统一命名为 `solution.cpp`
- **测试文件**：统一命名为 `solution_test.cpp`
- **说明文件**：统一命名为 `README.md`

### 文件内容规范

#### solution.cpp（解题代码）
- 包含 Solution 类和解题方法
- 可以包含多个解法（如 Solution::approach1(), Solution::approach2()）
- 添加必要的注释说明算法思路

#### solution_test.cpp（测试代码）
- 使用 Google Test 框架
- 测试用例应覆盖：
  - 基本功能测试
  - 边界条件测试
  - 特殊情况测试
- 测试命名：`TEST(ProblemName, TestCaseName)`

#### README.md（题目说明）
每个题目的 README.md 应包含：
1. 题目描述（从 LeetCode 复制）
2. 解题思路和关键点
3. 复杂度分析（时间复杂度、空间复杂度）
4. 相关标签（如：哈希表、数组、双指针等）
5. 参考链接（LeetCode 题目链接）

### CMake 配置
- **C++17 标准**：使用 C++17 语言特性
- **单个根 CMakeLists.txt**：统一管理所有题目的编译
- **自动发现题目**：通过 `file(GLOB ...)` 自动发现所有题目目录
- **集成 Google Test**：使用 FetchContent 自动下载和配置
- **每个题目编译为独立的可执行文件**：便于单独运行和调试

### 通用代码库（common/）

#### data_structures.h
定义 LeetCode 常用数据结构：
- `ListNode`：单链表节点
- `TreeNode`：二叉树节点
- `Node`：N叉树/图节点
- 其他常用数据结构

#### test_utils.h
测试辅助函数：
- `createList(vector<int>)`：从数组构造链表
- `createTree(vector<int>)`：从数组构造二叉树
- `listToVector(ListNode*)`：链表转数组
- `treeToVector(TreeNode*)`：树转数组（层序遍历）
- 比较函数：判断两个数据结构是否相等
- 打印函数：用于调试输出

#### utils.h
通用工具函数：
- 打印容器内容（vector, map, set 等）
- 调试宏定义（DEBUG 模式下输出）
- 其他辅助函数

## 编译和运行

### 编译项目
```bash
mkdir build && cd build
cmake ..
make
```

### 运行测试
```bash
# 运行所有测试
ctest

# 运行所有测试（详细输出）
ctest --verbose

# 运行特定题目的测试
./0001_two_sum_test
```

### 添加新题目
1. 创建新的题目目录：`mkdir 0XXX_problem_name`
2. 在目录中创建三个文件：
   - `solution.cpp`：实现解题代码
   - `solution_test.cpp`：编写测试用例
   - `README.md`：记录题目信息和思路
3. 重新编译：CMake 会自动发现新题目

## 开发建议

### 解题流程
1. 创建题目目录和文件
2. 在 README.md 中记录题目描述
3. 在 solution_test.cpp 中编写测试用例（TDD 方式）
4. 在 solution.cpp 中实现解题代码
5. 运行测试验证正确性
6. 在 README.md 中补充思路和复杂度分析

### 添加新题目的 Git 工作流

添加新题目时，遵循以下标准工作流：

#### 1. 创建 Issue

为新题目创建一个 issue，标题格式：`feat: add [题号] [题目名称]`

示例：`feat: add 14 longest common prefix`

#### 2. 创建分支

从 main 分支创建新分支，命名格式：`feat/[题号]-[题目名称]`

```bash
git checkout main
git pull
git checkout -b feat/0014-longest-common-prefix
```

#### 3. 创建题目框架代码

创建题目目录和三个文件，**只提供框架，不实现具体逻辑**：

**目录结构：**
```
0014_longest_common_prefix/
├── solution.cpp
├── solution_test.cpp
└── README.md
```

**solution.cpp（框架）：**
```cpp
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // TODO: 实现代码
        return "";
    }
};
```

- 包含必要的头文件
- Solution 类和方法签名完整
- 方法体只有 `// TODO: 实现代码` 注释和默认返回值

**solution_test.cpp（包含测试用例）：**
```cpp
#include "solution.cpp"

#include <gtest/gtest.h>

TEST(LongestCommonPrefix, Example1) {
    Solution solution;
    vector<string> strs = {"flower", "flow", "flight"};
    EXPECT_EQ(solution.longestCommonPrefix(strs), "fl");
}

TEST(LongestCommonPrefix, Example2) {
    Solution solution;
    vector<string> strs = {"dog", "racecar", "car"};
    EXPECT_EQ(solution.longestCommonPrefix(strs), "");
}
```

- 包含 LeetCode 题目中的示例测试用例
- 可以包含边界条件测试用例

**README.md（题目描述，思路待填写）：**
```markdown
# [题号]. 题目名称

## 题目描述

[从 LeetCode 复制题目描述、示例和约束条件]

## 解题思路

> TODO: 实现后补充

## 复杂度分析

> TODO: 实现后补充

## 相关标签

[标签1] [标签2] ...

## 参考链接

https://leetcode.com/problems/problem-name/
```

#### 4. 提交框架代码并创建 PR

```bash
git add .
git commit -m "feat: add [题号] [题目名称] framework"
git push origin feat/[题号]-[题目名称]
gh pr create --title "feat: add [题号] [题目名称] framework" --body "Closes #[issue号]"
```

#### 注意事项

- 框架代码应该能够**编译通过**（测试会失败，这是预期的）
- README.md 中的解题思路和复杂度分析在实现完成后再补充
- PR 标题使用 `feat: add [题号] [题目名称] framework` 格式
- 实现代码后，再提交一个 PR 来完成实现（或在同一个 PR 中继续开发）

### 代码风格
- 使用 C++17 标准特性
- 遵循 Google C++ Style Guide（配合 Facebook 风格调整）
- 添加适当的注释
- 保持代码简洁清晰

### 代码格式化
项目使用 clang-format 进行代码格式化，配置文件为 `.clang-format`。

**推荐方式：使用 make format**
```bash
# 格式化所有源文件（推荐）
make format
```

**手动方式：**
```bash
# 格式化单个文件
clang-format -i path/to/file.cpp

# 格式化所有源文件
find . -path ./build -prune -o \( -name '*.cpp' -o -name '*.h' \) -print | xargs clang-format -i

# 只检查格式（不修改）
clang-format --dry-run --Werror path/to/file.cpp

# 检查所有文件格式
find . -path ./build -prune -o \( -name '*.cpp' -o -name '*.h' \) -print | xargs clang-format --dry-run --Werror
```

### 测试原则
- 每个解法至少包含 3-5 个测试用例
- 覆盖正常情况、边界情况、特殊情况
- 测试用例应该清晰易懂
- 使用有意义的测试名称

## 依赖项
- CMake 3.14 或更高版本
- C++17 或更高版本的编译器（GCC 7+, Clang 5+, MSVC 2017+）
- Google Test（通过 CMake FetchContent 自动获取）

## 验证命令
```bash
# 编译项目
mkdir -p build && cd build && cmake .. && make

# 运行测试
ctest --verbose
```
