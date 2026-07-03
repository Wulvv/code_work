/* 春天是鲜花的季节，水仙花就是其中最迷人的代表，数学上有个水仙花数，它是这样定义的：

“水仙花数”是指一个三位数，它的各位数字的立方和等于其本身，比如：153=13+53+33
。

现在要求输出所有在 m
 和 n
 范围内的水仙花数。

输入格式
输入包含多组测试数据。

每组数据占一行，包含两个整数 m
 和 n
。

最后一行 0 0 表示输入结束。

输出格式
每组数据输出一行答案，从小到大输出所有位于 [m,n]
 范围内的水仙花数，数之间用空格隔开，如果没有则输出 no。

数据范围
100≤m≤n≤999
,
输入最多包含 10
 组数据。

输入样例：
100 120 
300 380 
0 0
输出样例：
no
370 371 */





#include <iostream>
using namespace std;
bool isFlower(int n){
    int a = n/100;
    int b = n/10%10;
    int c = n-a*100-b*10;
    if(n == a*a*a+b*b*b+c*c*c){
        return true;
    }else{
        return false;
    }
}
int main(){
    int a,b;
    while(cin>>a>>b){
        if(a==0&&b==0){                    //哨兵结束
            break;
        }
        int count = 0;
        for(int i = a;i<=b;i++){
            if(isFlower(i)){
                cout<<i<<' ';
                count++;
            }
        }
        if(count == 0){
            cout<<"no";           //这里使用单引号是错误的，因为no是不合法的字符常量，要使用双引号表示字符串常量！！！
        }
        cout<<endl;
    }
    
    return 0;
}


//多组输入+哨兵结束
/* #include <iostream>
using namespace std;

int main(){

    int m, n;

    while(cin >> m >> n){
        if(m == 0 && n == 0){
            break;
        }

        // 在这里处理 m 和 n
        cout << m << " " << n << endl;
    }

    return 0;
} */