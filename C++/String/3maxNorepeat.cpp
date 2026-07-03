给定一个字符串 s ，请你找出其中不含有重复字符的 最长 子串 的长度。

 

示例 1:

输入: s = "abcabcbb"
输出: 3 
解释: 因为无重复字符的最长子串是 "abc"，所以其长度为 3。注意 "bca" 和 "cab" 也是正确答案。
示例 2:

输入: s = "bbbbb"
输出: 1
解释: 因为无重复字符的最长子串是 "b"，所以其长度为 1。
示例 3:

输入: s = "pwwkew"
输出: 3
解释: 因为无重复字符的最长子串是 "wke"，所以其长度为 3。
     请注意，你的答案必须是 子串 的长度，"pwke" 是一个子序列，不是子串。





class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;                             //哈希集合，用哈希表实现的元素不重复的集合，只关心有没有，不关心顺序
        int l = 0;                                          //要引入头文件#include<unordered_set>
        int res = 0;
        for(int r = 0;r<s.size();r++){
            while(st.count(s[r])){                          //如果右指针指向字符存在，就把左边字符删除，直到右指针指向的字符不存在为止
                st.erase(s[l]);
                l++;
            }
            st.insert(s[r]);                                //加入右指针指向的字符
            res = max(res,r-l+1);                           //更新结果，r-l+1是当前窗口的长度
        }
        return res;
    }
};