#include<vector>
class Solution {
public:
    
    vector<int> buildArray(vector<int>& nums) {
        vector<int> array;
        for(int i = 0 ; i < nums.size(); i++){
            array.push_back(nums[nums[i]]);
        }
        return array;
    }
};