class Solution {
public:
    int bitwiseComplement(int n) {
        if(n == 0)
            return 1;
        
        string table = "0123456789abcdef";
        string res = "";
        while(n){
            res+=table[n%2];
            n/=2;
        }
        reverse(res.begin(),res.end());
        for(int i = 0;i<res.size();i++){
            if(res[i] == '0'){
                res[i] = '1';
            }else{
                res[i] = '0';
            }
        }
        int result = 0;
        for(char c:res){
            int val = c -'0';
            result = result*2 + val;
        }
        return result;
    }
};