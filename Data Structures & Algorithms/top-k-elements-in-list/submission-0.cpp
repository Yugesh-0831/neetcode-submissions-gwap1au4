class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // sorted by frequencies in acsending order

        unordered_map<int, int> freq;

        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }

        map<int, vector<int>> freqCount;

        for(auto &it: freq){
            freqCount[it.second].push_back(it.first);
        }

        vector<int> ans;

        for(auto it=freqCount.rbegin(); it!=freqCount.rend(); it++){
            vector<int> elements = it->second;
            for(auto it: elements){
                ans.push_back(it);
                k--;
                if(k == 0) return ans;
            }
        }
        return ans;
    }
};
