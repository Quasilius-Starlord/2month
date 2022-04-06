#include <iostream>
#include <vector>

std::vector<int> subarraySum(int arr[], int n, long long s)
{
    // Your code here
    int i=0,j=0;
    long long sum=arr[i];
    int iter=0;
    std::vector<int>res;

    // for sliding window problem check how constraints are met then update the window size accourdingly
    // such that array bound isnt crossed then in constraint check part if constraint is met  return
    while (j<n)
    {
        // if(iter==15)
        //     break;
        // iter++;
        std::cout << "i and j " << i << " " << j << " " << sum << "\n";
        if(sum>s){
            if(i==j){
                if(j==(n-1))
                    break;
                j++;i++;
                sum=arr[i];
            }else{
                sum-=arr[i];
                i++;
            }
        }else if (sum<s)
        {
            if(j==(n-1))
                break;
            j++;
            sum+=arr[j];
        }else{
            res.push_back(i+1);
            res.push_back(j+1);
            break;
        }
    }
    if(res.size()==0)
        res.push_back(-1);
    return res;
};

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    std::vector<int>vec=subarraySum(arr, 10, 15);

    for (int i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << " ";
    }
    
}