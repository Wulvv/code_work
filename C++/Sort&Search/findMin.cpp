/* 描述
第一行输入一个数n，1 <= n <= 1000，下面输入n行数据，每一行有两个数，分别是x y。输出一组x y，该组数据是所有数据中x最小，且在x相等的情况下y最小的。 
输入描述：
输入有多组数据。 每组输入n，然后输入n个整数对。
输出描述：
输出最小的整数对。
 */


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct nums{
    int x;
    int y;
};

bool cmp(nums a,nums b){
    if(a.x != b.x){
        return a.x<b.x;
    }else{
        return a.y<b.y;
    }
}

int main() {
    int n;
    cin>>n;
    vector<nums> data(n);                                 //记得初始化数组大小，如果报错说数组越界要想到这里
    for(int i = 0;i<n;i++){
        cin>>data[i].x>>data[i].y;
    }
    sort(data.begin(),data.end(),cmp);

    cout<<data[0].x<<" "<<data[0].y<<endl;


    return 0;
}