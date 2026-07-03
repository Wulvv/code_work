class Solution {
public:
    string convertToBase7(int num) {
        string table = "0123456789abcdef";
        string res = "";
        string flag = "";
        if(num==0) return "0";
        if(num<0){
            flag="-";
            num = -num;
        }
        while(num){
            res+=table[num%7];
            num/=7;
        }
        reverse(res.begin(),res.end());
        return flag+res;
        }
    };