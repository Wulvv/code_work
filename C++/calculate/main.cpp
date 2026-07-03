#include <iostream>

using namespace std;

int main()
{
    int a, n;
    int sn=0;
    cin>>a>>n;
    int m[11]={0,1,11,111,1111,11111,111111,1111111,11111111,111111111,1111111111};
    if(a>1&&a<10&&n>1&&n<10){
        for(int i=1;i<=n;i++ ){
            sn+=a*m[i];
        }
     cout<<sn<<endl;
     return 0;
    }
    else return false;
}
