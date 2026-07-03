/* 从键盘输入一行英文句子，句子中只有英文单词和空格，每个单词之间用若个空格隔开，英文单词由大小写字母组成，编程完成以下任务：

统计并输出此句子中英文字母的个数；
统计并输出此句子中单词的个数；
查找此句子中出现次数最多的字母（不区分大小写，大小写字母是相同的）及次数。当出现最多的字母不止一个时，全部找到，并输出找到的所有字母及次数。（输出顺序按字母顺序，且输出时字母全部小写）
输入格式
一行字符串。仅有空格和英文字母构成。

输出格式
第一行输出此句子中英文字母的个数。

第二行输出此句子中单词的个数。

第三行输出出现最多的字母，不止一个时，按字母顺序逐个输出，空格隔开。

第四行输出出现最多的字母的出现次数。

数据范围
输入字符串长度不超过 1000。 */




#include <iostream>
#include <vector>
#include <string>
#include <cctype>                                    //tolower(),isalpha()函数需要cctype库
#include <algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    vector<string> parts;
    int cntal = 0;
    string part = "";                              //保存单词
    for(char c:s){
        if(isalpha(c)){
            part += c;
            cntal++;
        }else if(c == ' '){                        //通用写法是isalpha(c)作为分隔符
            if(!part.empty()){                     //防空串
                parts.push_back(part);
                part = "";
            }
        }
        
    }
    parts.push_back(part);                          //把最后一个单词加入到parts里
    vector<int> cnt(26);
    for(char c:s){
        if((c>='A'&&c<='Z')||(c>='a'&&c<='z')){
            cnt[tolower(c)-'a']++;
        }
    }
    int m = 0;
    for(int i = 0;i<cnt.size();i++){
        m = max(m,cnt[i]);
    }
    cout<<cntal<<endl;
    cout<<parts.size()<<endl;
    for(int i = 0;i<cnt.size();i++){
        if(cnt[i] == m){
            cout<<char(i+'a')<<' ';                  //把数字转换成字母，i是0-25，a的ASCII码加上i就是对应的字母
        }
    }
    cout<<endl;
    cout<<m<<endl;
    
    return 0;
}