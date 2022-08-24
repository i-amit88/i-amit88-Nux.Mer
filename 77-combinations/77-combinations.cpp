class Solution {
public:
    
    void help(int i ,int n , int k , vector<int> &subset , vector<vector<int>> &ans){
        //if(i > n){
            if(k==0){
                ans.push_back(subset);
                return;
            }
            
            if(i>n)return;
        
        
        subset.push_back(i);   //take the element
        help(i+1 , n , k-1 , subset , ans);
        
        //skip the element
        subset.pop_back();
        help(i+1 , n , k , subset , ans);
    }
    
    vector<vector<int>> combine(int n, int k) {
        vector<int> subset;
        vector<vector<int>> ans;
        help(1 , n , k , subset , ans);
        return ans;
    }
};