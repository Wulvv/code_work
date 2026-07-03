/* 判断一个数是否为对称且不大于五位数的素数。

输入格式
第一行包含整数 n
，表示共有 n
 个待判断整数。

第二行包含 n
 个整数 a1,a2,…,an
，表示待判断整数。

输出格式
共 n
 行，第 i
 行输出 ai
 的判断结果，如果是不大于五位数的对称素数，则输出 Yes，否则输出 No。

数据范围
1≤n≤60
,
0<x<232

输入样例：
3
11 101 272
输出样例：
Yes
Yes
No */



#include <iostream>
#include <string>
using namespace std;
bool isPrime(int n){                                                //素数的判断，再加深印象
    if(n<2) return false;
    for(int i = 2;i*i<=n;i++){           
        if(n%i == 0) return false;
    }
    return true;
}
bool isPali(int n){                                                  //不知道怎么写输出的时候重新写个函数用bool值判定
    string s = to_string(n);
    for(int i = 0,j = s.size()-1;i<=j;i++,j--){
        if(s[i] != s[j]){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    while(n--){
        int num;
        cin>>num;
        if(isPrime(num)&&isPali(num)&&num<=99999){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
    
    
    
    return 0;
}