/* 给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串 s ，判断字符串是否有效。

有效字符串需满足：

左括号必须用相同类型的右括号闭合。
左括号必须以正确的顺序闭合。
每个右括号都有一个对应的相同类型的左括号。
 

示例 1：

输入：s = "()"

输出：true

示例 2：

输入：s = "()[]{}"

输出：true

示例 3：

输入：s = "(]"

输出：false

示例 4：

输入：s = "([])"

输出：true

示例 5：

输入：s = "([)]"

输出：false

 

提示：

1 <= s.length <= 104
s 仅由括号 '()[]{}' 组成 */


class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char c:s){
            if(c == '('||c == '{'||c == '['){
            st.push(c);
        }
        else{
            if(st.empty()) return false;
            char top = st.top();
            st.pop();
            if(c == ')'&& top!='('){
                return false;
            }
            if(c == '}'&& top!='{'){
                return false;
            }if(c == ']'&& top!='['){
                return false;
            }
            //if(st.empty()) return false;
        }
    }
    return st.empty();
    }
};




#include <stack>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isValid(string s) {

        stack<char> st;

        unordered_map<char,char> mp={    //c++中的map需要导入map库，这里是哈希表版本的map
            {')','('},                   //定义方式：map<key类型, value类型> 名字;二者相互对应，是有方向的
            {']','['},                   //value = mp[key]
            {'}','{'}
        };

        for(char c:s){

            // 左括号
            if(c=='(' || c=='[' || c=='{'){
                st.push(c);
            }

            // 右括号，可能为空，可能不匹配，可能匹配pop出
            else{

                if(st.empty()) return false;              

                if(st.top()!=mp[c]) return false;       //map访问方式mp['(']

                st.pop();
            }
        }

        return st.empty();//根据最后st是否空判断合法
    }
};