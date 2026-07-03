class Solution {
public:
    string reverseVowels(string s) {
        vector<int> index;
        for(int i = 0;i<s.size();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||
               s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                index.push_back(i);
            }
        }
        int i;
        int j;
        for(i = 0,j = index.size()-1;i<j;i++,j--){
            swap(s[index[i]],s[index[j]]);
        }
        return s;
    }
};