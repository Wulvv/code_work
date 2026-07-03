/* 求两个正整数的最大公约数和最小公倍数。

输入格式
两个正整数 A,B
。

输出格式
两个正整数的最大公约数、最小公倍数。

数据范围
1≤A,B≤10000 */




#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    for(int i = min(a,b);i>0;i--){
        if((a%i == 0)&&(b%i == 0)){
            cout<<i;
            break;
        }
    }
    cout<<' ';
    for(int i = max(a,b);i<100000000;i++){
        if((i%a == 0)&&(i%b == 0)){
            cout<<i;
            break;
        }
    }
    
    return 0;
}