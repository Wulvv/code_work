/* 输入n个数进行排序，要求先按奇偶后按从小到大的顺序排序。

输入输出格式
输入描述:
第一行输入一个整数n，表示总共有多少个数，n<=1000。
第二行输入n个整数，用空格隔开。
输出描述:
输出排序之后的结果。
输入输出样例
输入样例#:
8
1 2 3 4 5 6 7 8
输出样例#:
1 3 5 7 2 4 6 8 */

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//自定义比较规则，返回true时表示a在b前
bool cmp(int a,int b){
    //奇数在前偶数在后
    if(a%2==1&&b%2==0){
        return true;
    }
    if(a%2==0&&b%2==1){
        return false;
    }
    //同奇同偶时按升序排列
    return a<b;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    // arr(n) 表示创建一个大小为 n 的 vector，里面已经有 n 个元素，可以直接用 arr[i] 访问
    // vector<int> arr; 表示创建一个空 vector，此时没有元素，需要用 push_back() 添加
    //arr(n)是大小为n，arr是大小为0
    int i = 0;
    while(i<n){
        cin>>arr[i];
        i++;
    }
    //arr.sort();是错误的，因为vector中没有sort函数，algorithm中有，c++中算法和容器是分离的
    sort(arr.begin(),arr.end(),cmp);//这里的cmp是一个比较规则，相当于两级排序，先按奇偶排，再按大小排
    //cmp(a,b)返回true表示a应该排在b前边
    //如果是升序排序，cmp函数返回a<b;降序排序返回a>b，只按数值排序时成立
    //sort 需要的是比较函数本身，所以传入 cmp
    //如果传入 cmp() 就变成调用函数，但 cmp 需要两个参数，会报错
    for(int j = 0;j<n;j++){
        cout<<arr[j]<<" ";
    }

    return 0;
}