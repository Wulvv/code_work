#include <iostream>
#include <vector>
using namespace std;

double gs(int n){
    if(n>=90){
        return 4.0;
    }if(n>=85){
        return 3.7;
    }if(n>=82){
        return 3.3;
    }if(n>=78){
        return 3.0;
    }if(n>=75){
        return 2.7;
    }if(n>=72){
        return 2.3;
    }if(n>=68){
        return 2.0;
    }if(n>=64){
        return 1.5;
    }if(n>=60){
        return 1.0;
    }else{
        return 0.0;            //小于60分要记得有返回值
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> xuefen(n);
    vector<int> grade(n);
    for(int i = 0;i<n;i++){
        cin>>xuefen[i];
    }
    for(int i = 0;i<n;i++){
        cin>>grade[i];
    }
    int sumxuefen = 0;
    for(int i = 0;i<n;i++){
        sumxuefen += xuefen[i];
    }
    double sumjidian = 0;                //这里应该定义成double类型，因为绩点是小数
    for(int i = 0;i<n;i++){
        sumjidian += gs(grade[i])*xuefen[i];
    }
    double res = sumjidian/sumxuefen;
    printf("%.2f",res);                   //保留两位小数点后输出方式
    
    return 0;
}