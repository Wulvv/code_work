#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    /* vector<string> strs;
    string str;
    while(cin>>str){//cin>>s自动跳过空格，遇到空格或换行停止，每次读取一个字符串
        strs.push_back(str);
    } */



    int n;
    cin>>n;
    vector<string> strs(n);
    for(int i = 0;i<n;i++){
        cin>>strs[i];
    }
    if(strs.empty()){
        return 0;
    }
    string first = strs[0];
    for(int i = 0 ;i<first.size();i++){
        for(int j = 1;j<strs.size();j++){
            if(i>=strs[j].size()||strs[j][i]!=first[i]){
                cout<<first.substr(0,i);       //只会输出字符串下标0~i-1的字符串，从0开始，长度为i的字符串
                return 0;
            }
        }
    }
    return 0;
}



/* 五、整句话翻译成人话
if(i >= strs[j].size() || strs[j][i] != first[i])

等价于：

如果某个字符串已经没有第 i 个字符
或者
第 i 个字符和第一个字符串不一样

那么公共前缀结束。

六、为什么必须先写 i >= strs[j].size()

顺序非常重要：

正确：

if(i >= strs[j].size() || strs[j][i] != first[i])

错误：

if(strs[j][i] != first[i] || i >= strs[j].size())

原因：

如果 i 已经越界：

strs[j][i]

程序会 直接崩溃。

所以必须：

先判断长度
再访问字符 */



//方法二：先对字符串数组排序再找最长前缀
        sort(strs.begin(),strs.end());                                        //字符串数组也能排序！！！
        int length = min(strs[0].size(),strs[strs.size()-1].size());
        for(int i = 0;i<length;i++){
            if(strs[0][i] != strs[strs.size()-1][i]){
                return strs[0].substr(0,i);
            }
        }