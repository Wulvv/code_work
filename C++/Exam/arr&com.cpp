#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool is(string s){
    int ji = 0;
    int ou = 0;
    for(int i = 0;i<s.size();i++){
        if((s[i]-'0')%2 == 1){
            ji++;
        }else{
            ou++;
        }
    }
    if(ji == 0||ou == 0){
        return false;
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(is(s)){
            sort(s.begin(),s.end(),greater<char>());
            int pos;
            string a;
            for(int i = s.size()-1;i>=0;i--){
                if((s[i]-'0')%2 == 1){
                    pos = i;
                    a += s[i];
                    break;
                }
            }
            for(int i = s.size()-1;i>=0;i--){
                if(pos == i){
                    continue;
                }else{
                    a += s[i];
                }
            }
            reverse(a.begin(),a.end());
            string b;
            for(int i = 0;i<s.size();i++){
                if((s[i]-'0')%2 == 0){
                    pos = i;
                    b += s[i];
                    break;
                }
            }
            for(int i = 0;i<s.size();i++){
                if(pos == i){
                    continue;
                }else{
                    b += s[i];
                }
            }
            reverse(b.begin(),b.end());
            int numa = stoi(a);
            int numb = stoi(b);
            cout<<numa-numb<<endl;
        }else{
            cout<<"-1"<<endl;
        }
    }
    return 0;
}