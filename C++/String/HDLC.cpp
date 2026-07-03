/* 给你一个 01
 序列，HDLC 协议处理的话，如果出现连续的 5
 个 1
 会补 1
 个 0
。

例如 1111110
，会变成 11111010
。

现在给你一个经过 HDLC 处理后的 01
 序列，你需要找到 HDLC 处理之前的 01
 序列。

例如给你 11111010
，你需要输出 1111110
。

输入格式
第一行一个整数 N
，表示共有 N
 组测试数据。

每组数据占一行，包含一个 01
 序列。

输出格式
每组数据输出一行结果，为处理之前的 01
 序列。

数据范围
1≤N≤100
,
01
 序列长度不超过 100 */




#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        int cnt1 = 0;
        for(int i = 0;i<s.size();i++){
            if(s[i] == '1'){                         //注意这里是比较字符型，而不是比较数字，要加上单引号
                cnt1++;
                cout<<s[i];
            }
            if(s[i] == '0'&&cnt1 == 5){
                
                cnt1 = 0;                            //直接跳过后面所有逻辑，继续执行i++
                continue;                            //这里如果不加continue的话，cnt1被重置为0，继续执行的话满足下边的if条件，也就是还会输出当前的0
            }                                        //continue的作用是，防止状态修改后，又误触发后面的逻辑
            if(cnt1<5&&s[i] == '0'){
                cout<<s[i];
                cnt1 = 0;
            }
        }
        cout<<endl;
    }
    
    
    return 0;
}