/* 给定学生的成绩单，成绩单中包含每个学生的姓名和分数，请按照要求将成绩单按成绩从高到低或从低到高的顺序进行重新排列。

对于成绩相同的学生，无论以哪种顺序排列，都要按照原始成绩单中靠前的学生排列在前的规则处理。

输入格式
第一行包含整数 N
，表示学生个数。

第二行包含一个整数 0
 或 1
，表示排序规则，0
 表示从高到低，1
 表示从低到高。

接下来 N
 行，每行描述一个学生的信息，包含一个长度不超过 10
 的小写字母构成的字符串表示姓名以及一个范围在 0∼100
 的整数表示分数。

输出格式
输出重新排序后的成绩单。

每行输出一个学生的姓名和成绩，用单个空格隔开。 */



#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int m;                                            //cmp函数里要用到m，设置成全局变量
struct stu{
    string name;
    int grade;
};

bool cmp(stu a,stu b){
    if(m == 0){
        return a.grade>b.grade;                        //m == 0的话降序
    }
    return a.grade<b.grade;                              //m == 1的话升序
}


int main(){
    int n;
    cin>>n>>m;
    vector<stu> student(n);
    for(int i = 0 ;i<n;i++){
        cin>>student[i].name>>student[i].grade;
    }
    stable_sort(student.begin(),student.end(),cmp);        //稳定排序，保证成绩相同的学生按照原始成绩单中靠前的学生排列在前的规则处理
    
    for(int i = 0;i<n;i++){
        cout<<student[i].name<<' '<<student[i].grade<<endl;
    }
    return 0;
    
}