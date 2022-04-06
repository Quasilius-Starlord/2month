#include <iostream>

int split(int arr[], int n, int i, int j){
    int mid=(j+i)/2;
    std::cout << i << " " << mid << " " << j << "\n";
    if(i==j)
        return i;
    
    if(mid==0){
        if(arr[mid]>=arr[mid+1])
            return mid;
        else
            return split(arr, n, mid+1, j);
    }

    if(mid==n-1){
        if(arr[mid]>=arr[mid-1])
            return mid;
        else
            return split(arr, n, i, mid-1);
    }

    if(arr[mid]>=arr[mid-1] && arr[mid]>=arr[mid+1])
        return mid;
    else{
        if(arr[mid+1]>=arr[mid]){
            return split(arr, n, mid+1, j);
        }else{
            return split(arr, n, i,mid-1);
        }
    }
}

int peakElement(int arr[], int n)
{
   // Your code here
    std::cout << "here\n";
    if(n==1)
        return 0;
    else
        return split(arr, n , 0, n-1);
}

int main(){
    int arr[] = {15, 3, 19, 1, 7, 11, 1, 7, 7};
    std::cout << peakElement(arr, 9);
}