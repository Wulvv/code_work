/* 描述
一个正整数,如果它能被7整除,或者它的十进制表示法中某个位数上的数字为7, 则称其为与7相关的数.现求所有小于等于n(n<100)的与7无关的正整数的平方和。
输入描述：
案例可能有多组。对于每个测试案例输入为一行,正整数n,(n<100)
输出描述：
对于每个测试案例输出一行，输出小于等于n的与7无关的正整数的平方和。 */







#include <iostream>
#include <string>

using namespace std;
bool related7(int n){
    if(n%7 == 0){
        return false;
    }
    string s = to_string(n);
    for(int i = 0;i<s.size();i++){
        if(s[i] == '7'){               //这里应该是判断字符7而不是数字7！！！
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin>>n;
    int res = 0;
    int i = 0;
    while(i<=n){
        if(related7(i)){
            res+=i*i;
        }
        i++;
    }

    cout<<res<<endl;

    return 0;
}