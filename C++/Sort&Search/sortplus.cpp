/* 输入 10
 个整数，彼此以空格分隔。

重新排序以后输出(也按空格分隔)，要求:

先输出其中的奇数,并按从大到小排列；
然后输出其中的偶数,并按从小到大排列。
输入格式
任意排序的 10
 个整数，彼此以空格分隔。

输出格式
按照要求排序后输出，整数之间由空格分隔。

数据范围
输入整数取值范围 [0,100]
。 */




#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(int a,int b){
    if(a%2 == 1&&b%2 == 0){
        return true;
    }
    if(a%2 == 0&&b%2 == 1){
        return false;
    }
    return a<b;
}

bool cmp1(int a,int b){
    return a>b;
}
int main(){
    vector<int> arr(10);
    for(int i = 0;i<10;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end(),cmp);               //排序规则还得加深印象
    int j = 0;
    while(j<arr.size()&&arr[j]%2 == 1){            //while循环条件里先判断边界，再判断需要满足的条件
        j++;
    }
    
    reverse(arr.begin(),arr.begin()+j);           //翻转从下表0到j-的元素，即前j个元素
    for(int i = 0;i<10;i++){
        cout<<arr[i]<<' ';
    }
    return 0;
}