class Solution {
public:
    
    void help(int i, vector<int> &arr, int B, int sumTillNow, vector<int> &subset, vector<vector<int>> &ans){
        
        if(sumTillNow == B){
            ans.push_back(subset);
            return;
        }
        
        if(i >= arr.size()) return;
        if(sumTillNow > B) return;
        
        //skip the element
        help(i+1, arr, B, sumTillNow, subset, ans);
        
        sumTillNow += arr[i];
        subset.push_back(arr[i]);
        help(i, arr, B, sumTillNow, subset, ans);
        sumTillNow -= arr[i];
        subset.pop_back();
        
        
        
    }
    
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> susbet;
        int sumTillNow = 0; 
        vector<vector<int>> ans;
        help(0 , candidates , target , sumTillNow , susbet , ans);
        return ans;
     }
};