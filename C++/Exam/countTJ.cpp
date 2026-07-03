#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int count = 0;
    for(int i = 0;i<str.size()-1;i++){
        if(str[i] == 'T'){
        for(int j = i+1;j<str.size();j++){
            if(str[j] == 'J'){
                count++;
            }
        }
    }
    }
    cout<<count<<endl;

    return 0;
}