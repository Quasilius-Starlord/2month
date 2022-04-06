#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>

class Solution{
private:
public:
    std::vector<int> duplicates(int arr[], int n) {
        // code here
        std::vector<int> map;
        std::priority_queue<int, std::vector<int>, std::greater<int>> q;
        std::vector<int> res;

        for(int i =0; i<n; i++){
            map.push_back(0);
        }
        
        for (int i = 0; i < n; i++)
            map[arr[i]-1]++;

        for (int i = 0; i < n; i++)
        {
            if(map[i]>1)
                res.push_back(i+1);
        }

        if(res.size()==0)
            res.push_back(-1);
        
        return res;
    }
};

int main(){
    
}