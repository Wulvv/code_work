#include <iostream>
using namespace std;

int main(){
    int pro;
    cin >> pro;

    if(pro <= 100000){
        cout << pro * 0.1 << endl;
    }
    else if(pro > 100000 && pro <= 200000){
        cout << 10000 + (pro - 100000) * 0.075 << endl;
    }
    else if(pro > 200000 && pro <= 400000){
        cout << 17500 + (pro - 200000) * 0.05 << endl;
    }
    else if(pro > 400000 && pro <= 600000){
        cout << 27500 + (pro - 400000) * 0.03 << endl;
    }
    else if(pro > 600000 && pro <= 1000000){
        cout << 33500 + (pro - 600000) * 0.015 << endl;
    }
    else if(pro>1000000){
        cout << 39500 + (pro - 1000000) * 0.01 << endl;
    }

    return 0;
}
/* 在 C++ 中：

不允许这样写

a < b < c

必须写成：

a < b && b < c */