/* #include <iostream>
#include <string>
#include <vector>
using namespace std;

bool div(string s){
    string part = "";
    vector<string> parts;
    for(char c:s){
        if(c>='0'&&c<='9'){
            part += c;
        }else if(c == '*'){
            part = '*';
            parts.push_back(part);
            part = "";
        }else if(c == '.'){
            if(!part.empty()){
            parts.push_back(part);
            part = '.';
            parts.push_back(part);
            part = "";
            }else{
                part = '.';
                parts.push_back(part);
                part = "";
            }
        }
    }
    parts.push_back(part);
    if(parts.size()!=7)
        return false;
    for(int i = 0;i<parts.size();i+=2){
        if(parts[i].empty()){
            return false;
        }else {
            if(parts[i]!="*"){
                int num = stoi(parts[i]);
                if(num<0||num>255){
                    return false;
                }
            }
        }
    }
    return true;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        string ip;
        cin>>ip;
        if(div(ip)){
            cout<<'1'<<endl;
        }else{
            cout<<'0'<<endl;
        }

    }
    return 0;
} */




#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool div(string s){
    vector<string> parts;
    string part = "";

    // 按 '.' 分割
    for(char c : s){
        if(c == '.'){
            parts.push_back(part);
            part = "";
        }else{
            part += c;
        }
    }
    parts.push_back(part);

    // 必须4段
    if(parts.size() != 4) return false;

    for(string p : parts){
        if(p.empty()) return false;

        // 允许 *
        if(p == "*") continue;

        // 必须是数字
        for(char c : p){
            if(!isdigit(c)) return false;
        }

        // 前导0（面试加分点）
        if(p.size() > 1 && p[0] == '0') return false;

        int num = stoi(p);
        if(num < 0 || num > 255) return false;
    }

    return true;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string ip;
        cin >> ip;
        cout << (div(ip) ? 1 : 0) << endl;
    }
    return 0;
}