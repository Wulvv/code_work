/* 给定一个字符串 s
，对其进行若干次复制、剪切、粘贴操作，三种操作具体如下：

复制操作 COPY l r (0≤l≤r<n)
，n
 代表 s
 串的长度。表示将子串 s[l]∼s[r]
 复制到剪贴板 t
 里面，覆盖 t
 字符串。例如 s
 为 abcde，t
 为 pqr，执行 COPY 1 2 后，s
 为 abcde，t
 为 bc。
剪切操作 CUT l r (0≤l≤r<n)
，n
 代表 s
 串的长度。表示将子串 s[l]∼s[r]
 剪切到剪贴板 t
 里面（将该子串在 s
 串中删除），覆盖 t
 字符串。例如 s
 为 abcde，t
 为 pqr，执行 CUT 1 2 后，s
 为 ade，t
 为 bc。
粘贴操作 PASTE p (0≤p<n)
，n
 代表 s
 串的长度。这个表示将 t
 串插入到 s
 串 p
 位置的后面。t
 保持不变。例如 s
 为 abcde，t
 为 pqr，执行 PASTE 1 后，s
 为 abpqrcde ，t
为 pqr。
对每个操作，输出操作后的 s
 串。

输入格式
第一行包含字符串 s
。

第二行包含整数 m
。

接下来 m
 行，每行包含一个操作指令。

输出格式
对每个操作，输出一行操作后的 s
 串。

数据范围
初始字符串 s
 的长度不超过 100
，
1≤m≤100 */



#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin>>s;
    int m;
    cin>>m;
    string t = "";
    while(m--){
        string op;
        cin>>op;
        if(op == "COPY"){
            int l,r;
            cin>>l>>r;
            t = s.substr(l,r-l+1);                    //截取从l开始长度为r-l+1的子串，赋值给t
        }
        else if(op == "CUT"){
            int l,r;
            cin>>l>>r;
            t = s.substr(l,r-l+1);
            s.erase(l,r-l+1);                       //从s中删除从l开始长度为r-l+1的子串，erase()函数的第一个参数是要删除的子串的起始位置，第二个参数是要删除的子串的长度
        }
        else if(op == "PASTE"){
            int p;
            cin>>p;
            s.insert(p+1,t);                        //在s中p位置的后面插入t字符串，insert()函数的第一个参数是要插入的位置，第二个参数是要插入的字符串
        }                                           //如果是在p位置前插入子串的话，insert()函数的第一个参数不+1
        cout<<s<<endl;
    }
    return 0;
}