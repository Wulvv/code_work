/* 对 n
 个同学的考试成绩从大到小排名，成绩相同的算同一名。

求排名为 m
 的成绩。

若无排名为 m
 的成绩，输出最后一名的成绩。

输入格式
第一行包含整数 n
。

第二行包含 n
 个整数，表示 n
 个同学的成绩。

第三行包含一个整数 m
。

输出格式
一个整数，表示成绩。

数据范围
1≤n,m≤1000
，
学生成绩范围 [1,1000]
。 */


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> score(n);
    for(int i = 0;i<n;i++){
        cin>>score[i];
    }
    int m;
    cin>>m;
    sort(score.begin(),score.end(),greater<int>());
    vector<int> no;
    for(int i = 0;i<n;i++){
        if(score[i+1] != score[i]){
            no.push_back(score[i]);
        }
    }
    if(m>no.size()){
        cout<<no[no.size()-1];
    }else cout<<no[m-1];
    return 0;
}
