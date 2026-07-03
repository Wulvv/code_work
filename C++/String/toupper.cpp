/* 描述
对一个字符串中的所有单词，如果单词的首字母不是大写字母，则把单词的首字母变成大写字母。 在字符串中，单词之间通过空白符分隔，空白符包括：空格(' ')、制表符('\t')、回车符('\r')、换行符('\n')。
输入描述：
输入一行：待处理的字符串（长度小于100）。
输出描述：
可能有多组测试数据，对于每组数据， 输出一行：转换后的字符串。 */



#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    while(getline(cin,s)){                                 //不确定输入行数+有空格，比用while(getline)
        for(int i = 0;i<s.size();i++){
            if(isalpha(s[i])&&(i == 0||s[i-1] == ' '||s[i-1] == '\t'||s[i-1] == '\r'||s[i-1] == '\n')){               //记得用判等是==，不是=
                s[i] = toupper(s[i]);
            }
            cout<<s[i];
        }

    }


    return 0;
}
