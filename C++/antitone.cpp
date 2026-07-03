/* 设N是一个四位数，它的9倍恰好是其反序数（例如：1234的反序数是4321）
求N的值

输入输出格式
输入描述:
程序无任何输入数据。
输出描述:
输出题目要求的四位数，如果结果有多组，则每组结果之间以回车隔开。 */
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
//方法一
int getReverse(int n){
    int q = 0;
    int b = 0;
    int s = 0;
    int g = 0;
    q = n / 1000;
    b = n / 100 % 10;
    s = n / 10 % 10;
    g = n % 10;
    return g*1000+s*100+b*10+q;
}
int main(){
    for(int i = 1000;i<10000;i++){
        if(getReverse(i) ==9* i){
            cout<<i<<endl;
        }
    }
    return 0;
}



//方法二
int main(){
    for(int i = 1000; i < 10000; i++){
        string s = to_string(i);//to_string()把int转成string
        string t = s;
        reverse(t.begin(), t.end());//algorithm库里的函数

        if(stoi(t) == 9 * i){//stoi()把string转成int
            cout << i << endl;
        }
    }
}


/* string库里的函数
| 函数    | 含义                 |
| ----- | ------------------ |
| stoi  | string → int       |
| stol  | string → long      |
| stoll | string → long long |
| stof  | string → float     |
| stod  | string → double    |
 */