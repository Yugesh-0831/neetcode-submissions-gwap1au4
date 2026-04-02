class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        temp = strs[:]
        mpp = dict()
        for i in range (0, len(temp)):
            temp[i] = ''.join(sorted(temp[i]))
            mpp.setdefault(temp[i], []).append(i)
        ans : List[List[Str]] = []
        for idx in mpp.values():
            temp = []
            for i in idx:
                temp.append(strs[i])
            ans.append(temp)
        return ans