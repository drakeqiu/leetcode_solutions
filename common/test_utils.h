#ifndef LEETCODE_TEST_UTILS_H
#define LEETCODE_TEST_UTILS_H

#include "data_structures.h"
#include <algorithm>
#include <vector>
#include <queue>
#include <string>
#include <sstream>
#include <optional>

namespace leetcode {

// ==================== 链表相关工具函数 ====================

// 从 vector 创建链表
inline ListNode* createList(const std::vector<int>& values) {
    if (values.empty()) return nullptr;
    
    ListNode* dummy = new ListNode(0);
    ListNode* current = dummy;
    
    for (int val : values) {
        current->next = new ListNode(val);
        current = current->next;
    }
    
    ListNode* head = dummy->next;
    delete dummy;
    return head;
}

// 链表转 vector
inline std::vector<int> listToVector(ListNode* head) {
    std::vector<int> result;
    while (head) {
        result.push_back(head->val);
        head = head->next;
    }
    return result;
}

// 释放链表内存
inline void deleteList(ListNode* head) {
    while (head) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }
}

// 比较两个链表是否相等
inline bool areListsEqual(ListNode* l1, ListNode* l2) {
    while (l1 && l2) {
        if (l1->val != l2->val) return false;
        l1 = l1->next;
        l2 = l2->next;
    }
    return l1 == nullptr && l2 == nullptr;
}

// 打印链表（用于调试）
inline std::string listToString(ListNode* head) {
    std::ostringstream oss;
    oss << "[";
    bool first = true;
    while (head) {
        if (!first) oss << ", ";
        oss << head->val;
        first = false;
        head = head->next;
    }
    oss << "]";
    return oss.str();
}

// ==================== 二叉树相关工具函数 ====================

// 从 vector 创建二叉树（层序遍历，-1 或 std::nullopt 表示空节点）
inline TreeNode* createTree(const std::vector<std::optional<int>>& values) {
    if (values.empty() || !values[0].has_value()) return nullptr;
    
    TreeNode* root = new TreeNode(values[0].value());
    std::queue<TreeNode*> q;
    q.push(root);
    
    size_t i = 1;
    while (!q.empty() && i < values.size()) {
        TreeNode* node = q.front();
        q.pop();
        
        // 左子节点
        if (i < values.size() && values[i].has_value()) {
            node->left = new TreeNode(values[i].value());
            q.push(node->left);
        }
        i++;
        
        // 右子节点
        if (i < values.size() && values[i].has_value()) {
            node->right = new TreeNode(values[i].value());
            q.push(node->right);
        }
        i++;
    }
    
    return root;
}

// 重载版本：支持使用 -1 表示空节点
inline TreeNode* createTree(const std::vector<int>& values, int null_value = -1) {
    std::vector<std::optional<int>> opt_values;
    for (int val : values) {
        if (val == null_value) {
            opt_values.push_back(std::nullopt);
        } else {
            opt_values.push_back(val);
        }
    }
    return createTree(opt_values);
}

// 二叉树转 vector（层序遍历）
inline std::vector<std::optional<int>> treeToVector(TreeNode* root) {
    std::vector<std::optional<int>> result;
    if (!root) return result;
    
    std::queue<TreeNode*> q;
    q.push(root);
    
    while (!q.empty()) {
        TreeNode* node = q.front();
        q.pop();
        
        if (node) {
            result.push_back(node->val);
            q.push(node->left);
            q.push(node->right);
        } else {
            result.push_back(std::nullopt);
        }
    }
    
    // 移除末尾的空节点
    while (!result.empty() && !result.back().has_value()) {
        result.pop_back();
    }
    
    return result;
}

// 释放二叉树内存
inline void deleteTree(TreeNode* root) {
    if (!root) return;
    deleteTree(root->left);
    deleteTree(root->right);
    delete root;
}

// 比较两棵树是否相等
inline bool areTreesEqual(TreeNode* t1, TreeNode* t2) {
    if (!t1 && !t2) return true;
    if (!t1 || !t2) return false;
    if (t1->val != t2->val) return false;
    return areTreesEqual(t1->left, t2->left) && areTreesEqual(t1->right, t2->right);
}

// 打印二叉树（层序遍历，用于调试）
inline std::string treeToString(TreeNode* root) {
    auto vec = treeToVector(root);
    std::ostringstream oss;
    oss << "[";
    for (size_t i = 0; i < vec.size(); ++i) {
        if (i > 0) oss << ", ";
        if (vec[i].has_value()) {
            oss << vec[i].value();
        } else {
            oss << "null";
        }
    }
    oss << "]";
    return oss.str();
}

// ==================== 通用工具函数 ====================

// 比较两个 vector 是否相等（忽略顺序）
template<typename T>
inline bool areVectorsEqualUnordered(std::vector<T> v1, std::vector<T> v2) {
    if (v1.size() != v2.size()) return false;
    std::sort(v1.begin(), v1.end());
    std::sort(v2.begin(), v2.end());
    return v1 == v2;
}

// 打印 vector（用于调试）
template<typename T>
inline std::string vectorToString(const std::vector<T>& vec) {
    std::ostringstream oss;
    oss << "[";
    for (size_t i = 0; i < vec.size(); ++i) {
        if (i > 0) oss << ", ";
        oss << vec[i];
    }
    oss << "]";
    return oss.str();
}

// 打印二维 vector（用于调试）
template<typename T>
inline std::string vector2DToString(const std::vector<std::vector<T>>& vec) {
    std::ostringstream oss;
    oss << "[";
    for (size_t i = 0; i < vec.size(); ++i) {
        if (i > 0) oss << ", ";
        oss << vectorToString(vec[i]);
    }
    oss << "]";
    return oss.str();
}

}  // namespace leetcode

#endif  // LEETCODE_TEST_UTILS_H
