/* 给定两个字符串 s 和 p，找到 s 中所有 p 的 异位词 的子串，返回这些子串的起始索引。不考虑答案输出的顺序。

 

示例 1:

输入: s = "cbaebabacd", p = "abc"
输出: [0,6]
解释:
起始索引等于 0 的子串是 "cba", 它是 "abc" 的异位词。
起始索引等于 6 的子串是 "bac", 它是 "abc" 的异位词。
 示例 2:

输入: s = "abab", p = "ab"
输出: [0,1,2]
解释:
起始索引等于 0 的子串是 "ab", 它是 "ab" 的异位词。
起始索引等于 1 的子串是 "ba", 它是 "ab" 的异位词。
起始索引等于 2 的子串是 "ab", 它是 "ab" 的异位词。 */



class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int len = p.size();
        vector<int> need(26,0),window(26,0);
        for(char c:p){
            need[c-'a']++;
        }
        vector<int> res;
        for(int i = 0;i<s.size();i++){
            window[s[i]-'a']++;
            if(i>=len){
                window[s[i-len]-'a']--;
            }
            if(window == need){
                res.push_back(i-len+1);
            }
        }
        
        return res;
    }
};