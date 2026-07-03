/* 给定一个 n
 位整数 A
，各位从高到低依次为 a1,a2,…,an
。

给定一个 m
 位整数 B
，各位从高到低依次位 b1,b2,…,bm
。

给定一种特殊乘法，不妨用 ⊗
 来表示，我们规定 A⊗B=∑i=1n∑j=1mai×bj

例如，123⊗45=1×4+1×5+2×4+2×5+3×4+3×5
。

对于给定的 A
 和 B
，请你计算并输出 A⊗B
 的值。

输入格式
两个整数 A
 和 B
。

输出格式
一个整数，表示 A⊗B
 的值。 */



#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    string sa = to_string(a);
    string sb = to_string(b);
    vector<char> ssa;
    vector<char> ssb;
    for(char c:sa){
        ssa.push_back(c);
    }
    for(char c:sb){
        ssb.push_back(c);
    }
    int res = 0;
    for(int i = 0;i<ssa.size();i++){
        for(int j = 0;j<ssb.size();j++){
            res +=(ssa[i]-'0')*(ssb[j]-'0');        //把字符数字转成整数
        }
    }


/* for(char x : sa){                              //不需要创建动态数组，直接遍历字符串就行了
        for(char y : sb){
            res += (x - '0') * (y - '0');        
        }
    } */


    cout<<res<<endl;
    return 0;
}