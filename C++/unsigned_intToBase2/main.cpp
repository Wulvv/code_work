#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
   unsigned int x;
   while(cin>>x){
   string table = "0123456789";
   string res = "";
   while(x){
    res += table[x%2];
    x/=2;
   }
   reverse(res.begin(),res.end());
   int i = 0;
   for(i = 0;i<res.size();i++){
        if(res[i] != 0){
            break;
        }
   }
   cout<<res.substr(i,res.size())<<endl;;
   }
    return 0;
}
