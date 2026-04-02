class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> temp = strs;
        map<string, vector<int>> mpp;
        for(int i=0;i<temp.size();i++){
            sort(temp[i].begin(), temp[i].end());
            mpp[temp[i]].push_back(i);
        }
        vector<vector<string>> ans;
        for(auto it: mpp){
            temp.clear();
            vector<int> idx = it.second;
            for(auto i: idx){
                temp.push_back(strs[i]);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
