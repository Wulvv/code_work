/* 给定 a0,a1，以及 an=p×an−1+q×an−2中的 p,q
。

这里 n≥2
。

求第 k个数 ak对 10000的模。

输入格式
输入包括 5个整数：a0、a1、p、q、k
。

输出格式
第 k个数 ak对 10000的模。 */





//利用递推公式，从 a0 和 a1 开始循环计算到 ak，每一步取模 10000，并用两个变量滚动更新。

#include <iostream>
using namespace std;

int main(){
    int a0,a1,p,q,k;
    cin>>a0>>a1>>p>>q>>k;
    if(k == 0){
        cout<<a0%10000;
        return 0;
    }
    
    if(k == 1){
        cout<<a1%10000;
        return 0;
    }
    
    for(int i = 2;i<=k;i++){
        int t = (a1*p+a0*q)%10000;
        a0 = a1;
        a1 = t;
    }
    
    cout<<a1;
    
    
    return 0;
}