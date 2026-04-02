class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, int> mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        vector<int> temp;
        for(int i=0;i<nums.size();i++){
            if(mpp.find(nums[i]-1) == mpp.end()){
                temp.push_back(nums[i]);
            }
        }
        int ans = 0;
        for(auto num: temp){
            int t = num;
            int i = 1;
            while(mpp.find(t+1) != mpp.end()){
                i+=1;
                t+=1;
            }
            ans = max(ans, i);
        }
        return ans;
    }
};
