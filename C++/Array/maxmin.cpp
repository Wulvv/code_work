/* 给定 N
 个整数 a1∼aN
，求出这 N
 个数中的最大值和最小值。

输入格式
输入包含不超过 100
 组测试数据。

每组数据占两行，第一行包含正整数 N
，第二行包含 N
 个正整数 a1∼aN
。

输出格式
每组数据输出一行结果，包含两个整数，用一个空格隔开，分别表示 N
 个数中的最大值和最小值。

数据范围
1≤N≤100
,
1≤ai≤100

输入样例：
5
4 6 7 3 1
4
4 3 5 1
输出样例：
7 1
5 1
 */


#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n;
    while(cin>>n){                                      //不确定输入行数，且每组数据占两行，所以用while(cin>>n)来控制输入
    vector<int> arr(n);
    for(int i = 0;i<arr.size();i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    cout<<arr[n-1]<<' '<<arr[0]<<endl;
    }
    return 0;
}