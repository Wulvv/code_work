/* 给定学生的成绩单，成绩单中包含每个学生的学号和分数，请将成绩单按成绩从低到高的顺序重新排序。

如果学生的成绩相同，则按照学号从小到大的顺序进行排序。

输入格式
第一行包含整数 N
，表示学生数量。

接下来 N
 行，每行包含两个整数 p
 和 q
，表示一个学生的学号和成绩。

学生的学号各不相同。

输出格式
输出重新排序后的成绩单。

每行输出一个学生的学号和成绩，用单个空格隔开。
 */



/* bool cmp(A a, A b){
    if(第一关键字不同)
        return 第一关键字规则;
    return 第二关键字规则;
} */



#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
struct stu{                                 //定义学生类型stu结构体      这里的结构体定义不能用data，因为data是C++17中的保留字
    int sno;
    int grade;
};                                          //结构体后要加;
bool cmp(stu a,stu b){
    if(a.grade != b.grade){                //第一关键字不同
        return a.grade<b.grade;            //第一关键字规则
    }
    return a.sno<b.sno;                    //第二关键字规则
}

int main(){
    int n;
    cin>>n;
    vector<stu> student(n);
    for(int i = 0; i<n;i++){
        cin>>student[i].sno>>student[i].grade;
    }
    sort(student.begin(),student.end(),cmp);
    for(int i = 0; i<n;i++){
        cout<<student[i].sno<<' '<<student[i].grade<<endl;
    }
    return 0;
}