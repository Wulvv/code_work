/* 给定 N
 个整数，将它们从小到大排序后输出。

输入格式
第一行包含一个整数 N
。

接下来 N
 行，每行包含一个整数。

输出格式
将所给整数从小达大排序后输出，每行输出一个整数。

数据范围
1≤N≤100
,
输入整数均为正数，且长度不超过 1000 */




#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(string a,string b){
    if(a.size() != b.size()){
        return a.size()<b.size();                  //如果长度不相等，长度短的排在前面
    }
    return a<b;                                    //如果长度相等，字典序小的排在前面
}



int main(){
    int n;
    cin>>n;
    vector<string> arr(n);
    for(int i = 0;i<n;i++){
        string s;
        cin>>s;
        arr[i]  = s;
    }
    sort(arr.begin(),arr.end(),cmp);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}