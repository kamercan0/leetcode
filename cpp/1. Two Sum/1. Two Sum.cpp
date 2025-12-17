#include <vector>
#include <iostream>
using namespace std;



class Solution{
    public:
    vector<int> twoSum(vector<int> &nums,int target){
        int vectorlength= nums.size();
        int i;
        int k;
        for(int i=0;i<vectorlength;i++){
            int result = target-nums[i];
            for(int k=i+1;k<vectorlength;k++){
                if ((nums[k]==result) && (k != i)){
                    return {i,k};
                } 
            }

        }
        return {};
        

    }
    
};
int main(){
    Solution s;
    int target=7;
    vector<int> nums={2,4,3};
    vector<int> res = s.twoSum(nums, target);
    cout << "[" << res[0] << "," << res[1] << "]" << endl;
    
}
