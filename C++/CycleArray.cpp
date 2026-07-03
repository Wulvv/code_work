#include <iostream>
#include <vector>
template<typename T>//这里使用了模板template，意思是这个数组可以存储任意数据类型，T就是数据类型

class CycleArray{
    vector<T> arr;
    int start;
    int end;
    int count;

    void resize(int newsize){
        vector<T> newArr(newsize);
        for(int i = 0; i<count;i++){
            newArr[i] = arr[(start + i)%arr.size()];
        }
        arr = move(newArr);
        start = 0;
        end = count;
    }
}