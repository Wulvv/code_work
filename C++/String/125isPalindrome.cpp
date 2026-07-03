#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>//字符处理函数
#include <vector>
using namespace std;
int main(){
    string s;
    getline(cin,s);//cin>>s在遇到空格时会停止
    //transform(开始迭代器, 结束迭代器, 结果位置, 处理函数);需导入algorithm库
    transform(s.begin(),s.end(),s.begin(),::tolower);
    vector<char> res;
    int i = 0;
    for(char c:s){//依次取出字符串 s 中的每个字符
        if(isalnum(c)){//isalnum函数判断一个字符是否为字母或数字，需要cctype库
            res.push_back(c);
        }
    }
    i = 0;
    int j = res.size()-1;
    while(i<j){
        if(res[i] !=res[j]){
            cout<<"false";
            return 0;
        }
        i++;
        j--;
    }
    cout<<"true";
    return 0;
}



/* isalnum → 字母或数字
isalpha → 字母
isdigit → 数字
tolower → 转小写
toupper → 转大写 */


/* 其实 vector 可以不用。

string clean;

for(char c:s){
    if(isalnum(c)){
        clean += tolower(c);
    }
}

然后直接：

int i=0,j=clean.size()-1;
while(i<j){
    if(clean[i]!=clean[j]) return false;
    i++;
    j--;
} */