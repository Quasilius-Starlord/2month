#include <iostream>
#include <vector>

int getNegetive(int num){
    return num < 0 ? num : (num*-1); 
}

int MissingNumber(std::vector<int>& array, int n) {
    // Your code goes here
    for (int i = 0; i < array.size(); i++){
        if(std::abs(array[i])-1<array.size())
            array[std::abs(array[i])-1]=getNegetive(array[std::abs(array[i])-1]);

    }
    
    for (int i = 0; i < array.size(); i++)
    {
        if(array[i]>0){
            return i+1;
        }
    }
    return n;
    
};

int main(){
    std::vector<int> array={1,2,3,5};
    MissingNumber(array, array.size()+1);
}