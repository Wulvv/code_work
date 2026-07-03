class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> ran(26,0);
        vector<int> mag(26,0);
        for(char c:ransomNote){
            ran[c-'a']++;
        }
        for(char c:magazine){
            mag[c-'a']++;
        }
        for(int i = 0;i<ran.size();i++){
            if(ran[i]>mag[i]){
                return false;
            }
        }
        return true;
    }
};




//已知大小的vector如何初始化：vector<int> cnt(26,0);     创建一个vector，大小为26，元素初始值 = 0
//初始化指定大小vector<int> v(10)           int默认初始化为0
//指定大小+指定值vector<int> v(10,5)                      大小为10，每个元素值为5
//直接赋值vector<int> v = {1，2，3，4}；
//后期改变大小vector<int> v;     v.resize(26);