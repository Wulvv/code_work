/* 给定两个字符串 s 和 t ，它们只包含小写字母。

字符串 t 由字符串 s 随机重排，然后在随机位置添加一个字母。

请找出在 t 中被添加的字母。

 

示例 1：

输入：s = "abcd", t = "abcde"
输出："e"
解释：'e' 是那个被添加的字母。
示例 2：

输入：s = "", t = "y"
输出："y" */




class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> cnt(26,0);
        for(char c:s){
            cnt[c-'a']++;
        }
        for(char c:t){
            cnt[c-'a']--;
        }
        for(int i = 0;i<cnt.size();i++){
            if(cnt[i] == -1){                              //t比s多一个字母，所以cnt[i]会是-1
                return i+'a';                              //数字转字符
            }
        }
        return 0;
    }
};