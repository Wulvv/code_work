/* 给定 n
 个闭区间 [a,b]
，请你在数轴上删除若干区间，使得选中的区间之间互不相交（包括端点）。

输出至少需要删除区间的数量。

输入格式
第一行包含整数 n
，表示区间数。

接下来 n
 行，每行包含两个整数 a,b
，表示一个区间的两个端点。

输出格式
输出一个整数，表示可选取区间的最大数量。 */




//删除最少区间，就是要保留最多满足条件的区间
//右端点越小，就能留给后边更多空间，从而保留更多区间


#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
struct node{
    int l;
    int r;
};
bool cmp(node a,node b){
    return a.r<b.r;
}
int main(){
    int n;
    cin>>n;
    vector<node> arr(n);
    for(int i = 0;i<n;i++){
        cin>>arr[i].l>>arr[i].r;
    }
    sort(arr.begin(),arr.end(),cmp);
    int cnt = 0;
    int last_end = -1e9;
    for(int i = 0;i<n;i++){
        if(arr[i].l>last_end){                   //排除端点相交的情况
            cnt++;
            last_end = arr[i].r;
        }
    }
    cout<<n-cnt<<endl;
    return 0;
}