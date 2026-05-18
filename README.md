# LeetCode Solutions

一个用于编写和管理 LeetCode 解题代码的项目，使用 C++17 编写，CMake 构建，集成 Google Test 进行单元测试。

## 项目结构

```
leetcode_solutions/
├── CMakeLists.txt                    # 根 CMake 配置文件
├── README.md                         # 项目说明
├── AGENTS.md                         # 项目需求和规范文档
├── common/                           # 通用代码目录
│   ├── data_structures.h            # 通用数据结构（TreeNode, ListNode等）
│   ├── test_utils.h                 # 测试辅助函数
│   └── utils.h                      # 工具函数库
├── 0001_two_sum/                    # 题目目录
│   ├── solution.cpp                 # 解题代码
│   ├── solution_test.cpp            # 单元测试
│   └── README.md                    # 题目说明、思路、复杂度分析
└── ...
```

## 快速开始

### 环境要求

- CMake 3.14 或更高版本
- C++17 或更高版本的编译器（GCC 7+, Clang 5+, MSVC 2017+）
- Git（用于下载 Google Test）

### 编译项目

```bash
# 创建构建目录
mkdir build && cd build

# 配置项目
cmake ..

# 编译
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

## 添加新题目

1. **创建题目目录**（格式：`0XXX_problem_name`）
   ```bash
   mkdir 0001_two_sum
   cd 0001_two_sum
   ```

2. **创建三个必需文件**：
   - `solution.cpp`：实现解题代码
   - `solution_test.cpp`：编写测试用例
   - `README.md`：记录题目信息和思路

3. **重新编译**：
   ```bash
   cd build
   cmake ..
   make
   ```
   CMake 会自动发现新题目并生成对应的测试可执行文件。

## 文件模板

### solution.cpp

```cpp
#include <vector>
using namespace std;

class Solution {
public:
    // 在这里实现你的解法
    vector<int> twoSum(vector<int>& nums, int target) {
        // TODO: 实现代码
        return {};
    }
};
```

### solution_test.cpp

```cpp
#include <gtest/gtest.h>
#include "solution.cpp"

TEST(TwoSum, Example1) {
    Solution solution;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> expected = {0, 1};
    EXPECT_EQ(solution.twoSum(nums, target), expected);
}

TEST(TwoSum, Example2) {
    Solution solution;
    vector<int> nums = {3, 2, 4};
    int target = 6;
    vector<int> expected = {1, 2};
    EXPECT_EQ(solution.twoSum(nums, target), expected);
}
```

### README.md

```markdown
# [题号] 题目名称

## 题目描述

[从 LeetCode 复制题目描述]

## 解题思路

[说明解题思路和关键点]

## 复杂度分析

- 时间复杂度：O(?)
- 空间复杂度：O(?)

## 相关标签

[哈希表] [数组] [双指针] ...

## 参考链接

https://leetcode.com/problems/problem-name/
```

## 通用工具

项目提供了一些通用的工具函数和数据结构，位于 `common/` 目录：

### 数据结构 (data_structures.h)

- `ListNode`：单链表节点
- `TreeNode`：二叉树节点
- `Node`：N叉树节点
- `RandomListNode`：带随机指针的链表节点

### 测试工具 (test_utils.h)

- `createList(vector<int>)`：从数组创建链表
- `createTree(vector<optional<int>>)`：从数组创建二叉树
- `listToVector(ListNode*)`：链表转数组
- `treeToVector(TreeNode*)`：树转数组
- `deleteList(ListNode*)`：释放链表内存
- `deleteTree(TreeNode*)`：释放树内存
- 各种比较和打印函数

### 通用工具 (utils.h)

- 打印容器：`printVector`, `printMap`, `printSet` 等
- 字符串工具：`split`, `trim`
- 计时器：`Timer` 类（用于性能测试）
- 调试宏：`LOG`, `LOG_VAR`（需要定义 DEBUG 宏）

## 使用示例

```cpp
#include "data_structures.h"
#include "test_utils.h"
#include "utils.h"

using namespace leetcode;

// 创建链表
ListNode* head = createList({1, 2, 3, 4, 5});

// 打印链表
std::cout << listToString(head) << std::endl;  // 输出: [1, 2, 3, 4, 5]

// 释放内存
deleteList(head);

// 创建二叉树
TreeNode* root = createTree({1, 2, 3, std::nullopt, 4});

// 打印二叉树
std::cout << treeToString(root) << std::endl;  // 输出: [1, 2, 3, null, 4]

// 释放内存
deleteTree(root);
```

## 开发建议

1. **遵循 TDD（测试驱动开发）**：先写测试，再写实现
2. **充分测试**：包括正常情况、边界情况、特殊情况
3. **记录思路**：在 README.md 中详细记录解题思路和复杂度分析
4. **代码规范**：遵循 C++17 标准和良好的编码习惯
5. **使用通用工具**：充分利用 `common/` 目录中的工具函数

## 更多信息

详细的项目规范和开发指南请参考 [AGENTS.md](AGENTS.md)。

## License

MIT License
