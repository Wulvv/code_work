/* 描述
输入一行字符串，计算其中A-Z大写字母出现的次数
输入描述：
案例可能有多组，每个案例输入为一行字符串。
输出描述：
对每个案例按A-Z的顺序输出其中大写字母出现的次数。 */



#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string s;
    cin>>s;
    vector<int> arr(26);
    for(int i = 0;i<s.size();i++){
        if(s[i]>='A'&&s[i]<='Z'){
            arr[s[i]-'A']++;
        }
    }

    for(int i = 0;i<26;i++){
        cout<<char(i+'A')<<':'<<arr[i]<<endl;
    }
    return 0;
}