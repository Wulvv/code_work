#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int count[26]={0};//数组初始化
    string s;
    getline(cin,s);
    for(char c:s){
        count[c-'a']++;
    }
    for(int i = 0; i<s.size();i++){
        if(count[s[i]-'a'] == 1){
            cout<<i<<endl;
            return 0;
        }
    }
}//这道题字符串只包含小写字母，如果包含任意字符，count[256]，可以处理大小写字母、数字、符号