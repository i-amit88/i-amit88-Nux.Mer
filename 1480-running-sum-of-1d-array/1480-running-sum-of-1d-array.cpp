#define ll long long
class Solution {
public:
    
    vector<int> help(vector<int> nums){
        vector<int> array={0};
        
        for(ll i =0; i< nums.size(); i++){
            array.push_back(array[array.size()-1]+nums[i]);
        }
        array.erase(array.begin());
        return array;
    }
    
    vector<int> runningSum(vector<int>& nums) {
        vector<int> arr=help(nums);
        return arr;
    }
};