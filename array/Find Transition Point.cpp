#include <iostream>

int slice(int arr[], int n, int i, int j){
    int mid=(i+j)/2;
    // std::cout << i << " " << mid << " " << j << "\n";
    if(i>j)
        return i;
    
    if(arr[mid]==1){
        return slice(arr, n, i, mid-1);
    }else{
        return slice(arr, n, mid+1, j);
    }
};

int transitionPoint(int arr[], int n) {
    int res=slice(arr, n, 0, n-1);
    return res < n ? res : -1;
};

int main(){
    int arr[] = {0,0};
    std::cout << transitionPoint(arr, 2);
}