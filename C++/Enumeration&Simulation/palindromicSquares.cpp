/* 描述
打印所有不超过256，其平方具有对称性质的数。如2，11就是这样的数，因为2*2=4，11*11=121。
输入描述：
无任何输入数据
输出描述：
输出具有题目要求的性质的数。如果输出数据不止一组，各组数据之间以回车隔开。 */


#include <iostream>
#include <string>
using namespace std;
bool reverse(string s){
    int j = 0;
    int k = s.size()-1;
    while(j<k){
        if(s[j] != s[k]){
            return false;
        }else{
            j++;
            k--;
        }
    }
    return true;
}
int main() {
    int i = 0;
    while(i<=256){
        int res = i*i;
        string s = to_string(res);
        if(reverse(s)){
            cout<<i<<endl;
            i++;
        }else{
            i++;
        }
    }

    return 0;
}