#include <iostream>
#include <vector>
using namespace std;
int main(){
    int y,m,d;
    cin>>y>>m>>d;                             //输入方式要记住！！！
    if(m>10||(m == 10&&d>=2)){
        cout<<y-1895<<endl;
    }else{
        cout<<y-1896<<endl;
    }










    /* vector<int> today(3);
    for(int i = 0;i<3;i++){
        cin>>today[i];
    }
    if(today[1] >=10 && today[2]>=2){          //11.1则判断错误，写题能不能带点脑子啊冀紫健！！！
        cout<<today[0]-1895<<endl;
    }else if(today[1] >=10 && today[2]<2){
        cout<<today[0]-1896<<endl;
    }else if(today[1]<10){
        cout<<today[0]-1896<<endl;
    } */
    return 0;
}