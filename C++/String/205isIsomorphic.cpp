class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> mp1;     //哈希表自动初始化为空，数据类型之间要用,隔开
        unordered_map<char,char> mp2;
        for(int i = 0;i<s.size();i++){
            if(mp1.count(s[i])&&mp1[s[i]]!=t[i])     //存在但不同，返回false
                return false;
            if(mp2.count(t[i])&&mp2[t[i]]!=s[i])     //保证双向映射
                return false;
            mp1[s[i]] = t[i];        //在哈希表中添加映射
            mp2[t[i]] = s[i];
        }
        return true;
         
    }
};



//同构字符串要保证双向唯一映射，所以要用两个哈希表
//mp.count(c)的作用是判断c的映射在mp中是否存在