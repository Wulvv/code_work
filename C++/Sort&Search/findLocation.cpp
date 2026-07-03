/* 对给定的一个字符串，找出有重复的字符，并给出其位置。

输入格式
共一行，一个由字母和数字组成的字符串。

输出格式
统计所有重复出现的字符，并按照第一次出现的先后顺序，每行输出一个字符的相关信息。

每个字符按从小到大顺序输出它出现过的位置下标，占一行，具体格式参考样例。

注意：给定字符串中字符的下标从左到右，从 0
 开始。

数据范围
输入字符串长度不超过 100
。 */




#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<int> pos[128];
    vector<char> order;
    
    for(int i = 0;i<s.size();i++){
        if(pos[s[i]].empty()){
            order.push_back(s[i]);
        }
        pos[s[i]].push_back(i);
    }
    for(char c:order){
        if(pos[c].size() >= 2){
            //cout<<c<<":";
            for(int i = 0;i<pos[c].size();i++){
                cout<<c<<":";
                cout<<pos[c][i];
                if(i != pos[c].size()-1){
                    cout<<",";
                }
            }
            cout<<endl;
        }
    }
    
    
    
    return 0;
}