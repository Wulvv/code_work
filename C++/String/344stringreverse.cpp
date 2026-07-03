/* 给定一个字符串，反序输出。

输入输出格式
输入描述:
输入一个字符串在单独的一行，字符串长度<100。
输出描述:
将字符串反序输出。
输入输出样例
输入样例#:
Guiyang
输出样例#:
gnayiuG */

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    //方法一：数组
    char s[100];
    cin>>s;
    int i = 0;
    while(s[i] != '\0'){
        i++;
    }
    //'\0'是字符串结束标志，也会占用一个位置
    //题目要求字符串小于100，创建一个长为100的数组即可，最后一个位置放‘\0’
    for(int j = i-1;j>=0;j--){
        cout<<s[j];
    }
    //这里的j = i-1要求要从最后一个有效字符开始输出，“长度n最后下标n-1”
    //如果j = i的话会先输出一个字符结束标志



    //方法二：string的reverse,要用到string和algorithm库
    string s;
    cin>>s;
    reverse(s.begin(),s.end());
    cout<<s;



    //方法三：for循环
    string s;
    cin>>s;
    for(int i=s.length()-1;i>=0;i--){
        cout<<s[i];
    }
    //string是一个类，但是其内部是用字符数组实现的
    //这里i = s.length()-1，是从最后一个字符开始



    //手写双指针，两端交换，向中间移动，这里将内存中的也交换了，上述方法有的只交换了输出内存没变
    void reverseString(vector(char)& s){
        int left = 0;
        int right = s.size()-1;
        while(left<right){
            swap(s[left],s[right]);
            left++；
            right--；
        }
    }
    return 0;

}