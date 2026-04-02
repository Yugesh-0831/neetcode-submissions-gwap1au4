class Solution:

    def encode(self, strs: List[str]) -> str:
        encoded_string = str()
        for s in strs:
            n = len(s)
            encoded_string += str(n)
            encoded_string += '#'
            encoded_string += s
        return encoded_string


    def decode(self, s: str) -> List[str]:
        print(s)
        # check for inputs till we reach the delimiter
        i = 0
        ans : List[str] = []
        while i<len(s):
            k = i
            while s[k] != '#': k+=1
            # print(i, k, s[i:k])
            n = int(s[i:k])
            ans.append(s[k+1:n+k+1])
            i=n+k+1
            # print("idx", i)
        return ans

