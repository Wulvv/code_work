/* 描述
    Among grandfather's papers a bill was found.     72 turkeys $_679_     The first and the last digits of the number that obviously represented the total price of
     those turkeys are replaced here by blanks (denoted _), for they are faded and are illegible. What are the two faded digits and what was the price of one turkey?
     We want to write a program that solves a general version of the above problem.     N turkeys $_XYZ_     The total number of turkeys, N, is between 1 and 99,
     including both. The total price originally consisted of five digits, but we can see only the three digits in the middle. We assume that the first digit is 
     nonzero, that the price of one turkeys is an integer number of dollars, and that all the turkeys cost the same price.     Given N, X, Y, and Z, write a program 
     that guesses the two faded digits and the original price. In case that there is more than one candidate for the original price, the output should be the most 
     expensive one. That is, the program is to report the two faded digits and the maximum price per turkey for the turkeys.
输入描述：
    The first line of the input file contains an integer N (0<N<100), which represents the number of turkeys. In the following line, there are the three decimal 
    digits X, Y, and Z., separated by a space, of the original price $_XYZ_.
输出描述：
    For each case, output the two faded digits and the maximum price per turkey for the turkeys. */


/* 1<=n<=99
第一个数不是0
单价是整数 */


#include <iostream>
using namespace std;

int main() {
    int n;
    int x,y,z;
    while(cin>>n){
        cin>>x>>y>>z;                                                  //输入格式学一下
        int flag = 0;                                                  //设置一个标志位，判断是否找到满足条件的价格
        for(int i = 9;i>0;i--){
            for(int j = 9;j>=0;j--){
                int total = i*10000+x*1000+y*100+z*10+j;
                if((total%n == 0)){
                    cout<<i<<' '<<j<<' '<<total/n<<endl;
                    flag = 1;
                    break;
                }
            }
            if(flag){
                break;
            }
        
        }
        if(flag == 0){
            cout<<'0'<<endl;
        }
    }
    return 0;
}
