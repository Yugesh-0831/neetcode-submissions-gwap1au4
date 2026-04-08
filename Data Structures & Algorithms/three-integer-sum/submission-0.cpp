class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        set<vector<int>> temp;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    if(nums[i]+nums[j]+nums[k] == 0){
                        vector<int> t;
                        t = {nums[i], nums[j], nums[k]};
                        sort(t.begin(), t.end());
                        temp.insert(t);
                    }
                }
            }
        }
        vector<vector<int>> ans;
        for(auto it: temp) ans.push_back(it);
        return ans;
    }
};
