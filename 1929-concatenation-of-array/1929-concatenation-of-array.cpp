class Solution {
public:
    vector<int> help(vector<int> nums,int n){
        vector<int> array;
        for(int i=0; i<2*n; i++){
            array.push_back(nums[i % n]);
        }
        return array;
    }
    
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int>arr=help(nums,n);
        return arr;
    }
};