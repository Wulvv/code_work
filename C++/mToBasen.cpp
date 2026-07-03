/* 描述
将M进制的数X转换为N进制的数输出。
输入描述：
输入的第一行包括两个整数：M和N(2<=M,N<=36)。
下面的一行输入一个数X，X是M进制的数，现在要求你将M进制的数X转换成N进制的数输出。
输出描述：
输出X的N进制表示的数。 */



#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int m,n;
    string x;
    cin>>m>>n;
    cin>>x;
    //x转十进制
    
    long long res = 0;                     //防止res溢出
    for(char c:x){
        int val;
        if(c>='0'&&c<='9'){
            val = c - '0';
        }else{
            val = c - 'A' + 10;         //把字符 'A' ~ 'Z' 转换成对应的数字 10 ~ 35
        }
        res = res*m+val;
    }
    //res转n进制
    string table = "0123456789abcdefghijklmnopqrstuvwxyz";   //最多到36进制，所以要把10~35的数字也对应到字符上
    string res1 = "";
    while(res){
        res1 += table[res%n];
        res /=n;
    }
    reverse(res1.begin(),res1.end());
    cout<<res1;
    return 0;
}