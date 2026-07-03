/* 输入一个数 n
，输出其所有相加为 n
 的二元质数组？

输入格式
一个整数 n
。

输出格式
按照第一个数从小到大的顺序，每行输出一个相加为 n
 的二元质数组。

数据范围
0≤n≤106 */





#include <iostream>
using namespace std;
bool is(int a,int b){
    for(int i = 2;i*i<=a;i++){
        if(a%i == 0){
            return false;
        }
    }
    for(int i = 2;i*i<=b;i++){
        if(b%i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    for(int i = 2;i<=n/2;i++){
        int b = n-i;
        if(is(i,b)){
            cout<<i<<' '<<b<<endl;
        }
    }
    return 0;
}