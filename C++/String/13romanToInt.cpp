class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> mp={   //哈希表定义unordered_map，注意初始化要跟上数据类型
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},               //哈希表中各键值对之间用，隔开
            {'D',500},
            {'M',1000}
        };
        int num = 0;
        for(int i = 0;i<s.size();i++){
            if(i<s.size()-1&&mp[s[i]]<mp[s[i+1]]){   //要比较i和i+1下标的大小，所以if条件判断i要满足
                num -= mp[s[i]];
            }else{
                num += mp[s[i]];
            }
            
        }
        return num;
    }
};