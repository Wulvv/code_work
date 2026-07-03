将一个给定字符串 s 根据给定的行数 numRows ，以从上往下、从左到右进行 Z 字形排列。

比如输入字符串为 "PAYPALISHIRING" 行数为 3 时，排列如下：

P   A   H   N
A P L S I I G
Y   I   R
之后，你的输出需要从左往右逐行读取，产生出一个新的字符串，比如："PAHNAPLSIIGYIR"。

请你实现这个将字符串进行指定行数变换的函数：

string convert(string s, int numRows);
 

示例 1：

输入：s = "PAYPALISHIRING", numRows = 3
输出："PAHNAPLSIIGYIR"
示例 2：
输入：s = "PAYPALISHIRING", numRows = 4
输出："PINALSIGYAHRPI"
解释：
P     I    N
A   L S  I G
Y A   H R
P     I
示例 3：

输入：s = "A", numRows = 1
输出："A"



class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows<2){                      //特判
            return s;
        }
        vector<string> rows(numRows);
        int i = 0,flag = -1;                 //i当前字符应该放到哪一行，flag控制方向
        for(char c:s){
            rows[i].push_back(c);           //放入元素，string类型的vector支持每行的push_back
            if(i == 0||i == numRows-1){     //判断是否调转方向
                flag = -flag;
            }
            i += flag;                      //更新行号
        }
        string res;
        for(int j = 0;j<numRows;j++){       //结果拼接
            res += rows[j];
        }
        return res;
    }
};

//模拟z字轨迹的上下跳动 0 1 2 3 2 1 0 1 2 3 2 1 0
//for循环里三步顺序：先放字符，再判断要不要调换方向，最后移动一步

