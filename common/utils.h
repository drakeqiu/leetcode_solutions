#ifndef LEETCODE_UTILS_H
#define LEETCODE_UTILS_H

#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <sstream>

namespace leetcode {

// ==================== 调试宏 ====================

#ifdef DEBUG
    #define LOG(x) std::cout << "[DEBUG] " << x << std::endl
    #define LOG_VAR(var) std::cout << "[DEBUG] " << #var << " = " << var << std::endl
#else
    #define LOG(x)
    #define LOG_VAR(var)
#endif

// ==================== 打印容器函数 ====================

// 打印 vector
template<typename T>
void printVector(const std::vector<T>& vec, const std::string& name = "") {
    if (!name.empty()) {
        std::cout << name << ": ";
    }
    std::cout << "[";
    for (size_t i = 0; i < vec.size(); ++i) {
        if (i > 0) std::cout << ", ";
        std::cout << vec[i];
    }
    std::cout << "]" << std::endl;
}

// 打印二维 vector
template<typename T>
void printVector2D(const std::vector<std::vector<T>>& vec, const std::string& name = "") {
    if (!name.empty()) {
        std::cout << name << ":" << std::endl;
    }
    std::cout << "[" << std::endl;
    for (const auto& row : vec) {
        std::cout << "  [";
        for (size_t i = 0; i < row.size(); ++i) {
            if (i > 0) std::cout << ", ";
            std::cout << row[i];
        }
        std::cout << "]" << std::endl;
    }
    std::cout << "]" << std::endl;
}

// 打印 set
template<typename T>
void printSet(const std::set<T>& s, const std::string& name = "") {
    if (!name.empty()) {
        std::cout << name << ": ";
    }
    std::cout << "{";
    bool first = true;
    for (const auto& elem : s) {
        if (!first) std::cout << ", ";
        std::cout << elem;
        first = false;
    }
    std::cout << "}" << std::endl;
}

// 打印 unordered_set
template<typename T>
void printUnorderedSet(const std::unordered_set<T>& s, const std::string& name = "") {
    if (!name.empty()) {
        std::cout << name << ": ";
    }
    std::cout << "{";
    bool first = true;
    for (const auto& elem : s) {
        if (!first) std::cout << ", ";
        std::cout << elem;
        first = false;
    }
    std::cout << "}" << std::endl;
}

// 打印 map
template<typename K, typename V>
void printMap(const std::map<K, V>& m, const std::string& name = "") {
    if (!name.empty()) {
        std::cout << name << ": ";
    }
    std::cout << "{";
    bool first = true;
    for (const auto& [key, val] : m) {
        if (!first) std::cout << ", ";
        std::cout << key << ": " << val;
        first = false;
    }
    std::cout << "}" << std::endl;
}

// 打印 unordered_map
template<typename K, typename V>
void printUnorderedMap(const std::unordered_map<K, V>& m, const std::string& name = "") {
    if (!name.empty()) {
        std::cout << name << ": ";
    }
    std::cout << "{";
    bool first = true;
    for (const auto& [key, val] : m) {
        if (!first) std::cout << ", ";
        std::cout << key << ": " << val;
        first = false;
    }
    std::cout << "}" << std::endl;
}

// ==================== 字符串工具函数 ====================

// 分割字符串
inline std::vector<std::string> split(const std::string& str, char delimiter) {
    std::vector<std::string> tokens;
    std::stringstream ss(str);
    std::string token;
    while (std::getline(ss, token, delimiter)) {
        tokens.push_back(token);
    }
    return tokens;
}

// 去除字符串首尾空格
inline std::string trim(const std::string& str) {
    size_t first = str.find_first_not_of(" \t\n\r");
    if (first == std::string::npos) return "";
    size_t last = str.find_last_not_of(" \t\n\r");
    return str.substr(first, last - first + 1);
}

// ==================== 其他工具函数 ====================

// 计时器类（用于性能测试）
class Timer {
private:
    std::chrono::time_point<std::chrono::high_resolution_clock> start_time;
    std::string name;
    
public:
    explicit Timer(const std::string& timer_name = "Timer") 
        : name(timer_name), start_time(std::chrono::high_resolution_clock::now()) {}
    
    ~Timer() {
        auto end_time = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::microseconds>(
            end_time - start_time).count();
        std::cout << name << " took " << duration << " microseconds" << std::endl;
    }
    
    void reset() {
        start_time = std::chrono::high_resolution_clock::now();
    }
    
    long long elapsed_microseconds() const {
        auto end_time = std::chrono::high_resolution_clock::now();
        return std::chrono::duration_cast<std::chrono::microseconds>(
            end_time - start_time).count();
    }
};

}  // namespace leetcode

#endif  // LEETCODE_UTILS_H
