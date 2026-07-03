/* 描述
输入一个数n，然后输入n个数值各不相同，再输入一个值x，输出这个值在这个数组中的下标（从0开始，若不在数组中则输出-1）。
输入描述：
测试数据有多组，输入n(1<=n<=200)，接着输入n个数，然后输入x。
输出描述：
对于每组输入,请输出结果。 */



#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    int j = 0;
    while(j<n && arr[j] != x){                //加上j<n的条件，防止越界访问arr[j]
        j++;
    }if(j == n){
        cout<<"-1"<<endl;
    }else{
        cout<<j<<endl;
    }
    return 0;
}