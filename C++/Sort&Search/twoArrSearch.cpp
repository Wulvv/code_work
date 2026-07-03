/* 给定一个长度为 n
 的数组 a1,…,an
 和一个长度为 m
 的数组 b1,…,bm
。

对于每一个 bi
，请你查找其是否在数组 a
 中出现过。

输入格式
第一行包含整数 n
。

第二行包含 n
 个整数 a1,…,an
。

第三行包含整数 m
。

第四行包含 m
 个整数 b1,…,bm
。

输出格式
共 m
 行，对于第 i
 行，如果 bi
 在数组 a
 中出现过，则输出 YES，否则输出 NO。 */



#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;                                       //记得写输入
    vector<int> a(n);
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    int m;
    cin>>m;
    vector<int> b(m);
    for(int i = 0;i<m;i++){
        cin>>b[i];
    }
    for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){
            if(a[j] == b[i]){
                cout<<"YES"<<endl;
                break;
            }
            if(j == n-1&&a[j] != b[i]){
                cout<<"NO"<<endl;
                
            }
        }
    }
    
    
    
    
    return 0;
}