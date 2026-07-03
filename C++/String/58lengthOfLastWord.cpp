//把输入字符流转化成单词并跳过多余空格且存入字符串数组


class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        vector<string> strs;
        string str;
        while(ss>>str){
            strs.push_back(str);
        }
        string word = strs[strs.size()-1];
        return word.size(); 
    }
};