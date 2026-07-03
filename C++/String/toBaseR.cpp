/* 将一个十进制数 N
 转换成 R
 进制数输出。

输入格式
第一行包含整数 T
，表示共有 T
 组测试数据。

每组数据占一行，包含两个整数 N
 和 R
。

输出格式
每组数据输出一行结果，即转换后的 R
 进制数。

数据范围
1≤T≤100
,
−105≤N≤105
,
2≤R≤16
,R≠10

输入样例：
3
7 2
23 12
-4 3
输出样例：
111
1B
-11 */




#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

string toR(int n,int r){
    string table = "0123456789ABCDEF";
    string res = "";
    while(n>0){
        res += table[n%r];
        n /= r;
    }
    reverse(res.begin(),res.end());
    return res;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,r;
        cin>>n>>r;
        if(n>0){
            cout<<toR(n,r)<<endl;
        }else if(n<0){
            cout<<"-";
            cout<<toR(abs(n),r)<<endl;
        }else if(n == 0){
            cout<<'0'<<endl;
        }
    }
    return 0;
}