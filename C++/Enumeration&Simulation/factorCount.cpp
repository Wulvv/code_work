/* 输入 n
 个整数，依次输出每个数的约数的个数。

输入格式
第一行包含整数 n
。

第二行包含 n
 个整数 ai
。

输出格式
共 n
 行，按顺序每行输出一个给定整数的约数的个数。

数据范围
1≤n≤1000
,
1≤ai≤10^9 */


//约束就是因数
//注意时间复杂度，可设置就j*j<=nums[i]来降低时间复杂度，只需要考虑sqrt(nums[i])以内的数就行




#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);    //这里要直接给出nums的大小
    for(int i = 0;i<n;i++){
        cin>>nums[i];
    }
    for(int i = 0;i<n;i++){
        int count = 0;
        for(int j = 1;j*j<=nums[i];j++){
            if(nums[i]%j == 0){
                if(j*j == nums[i]){         //这里的判值相等要注意是==，别粗心
                    count+=1;               //只能算一个约数
                }else{
                    count+=2;               //算两个
                }
            }
        }
        cout<<count<<endl;
    }
    
    return 0;
}