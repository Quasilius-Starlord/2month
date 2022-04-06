#include <iostream>
#include <vector>

class Solution{
private:
public:
    int majorityElement(int arr[], int n){
        int element=0; int count=0;

        for (int i = 0; i < n; i++)
        {
            if(count==0)
                element=arr[i];
            
            if(element==arr[i])
                count++;
            else
                count--;
        }
        int counter=0;

        for (int i = 0; i < n; i++)
        {
            if(arr[i]==element)
                counter++;
        }
        std::cout << counter;
        return counter > (n/2) ? element : -1;
    };
};

int main(){

}