"""
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".
"""
strs = ["ab","abc"]

def longestCommonPrefix(strs) -> str:
    pref = ""
    if len(strs) == 1:
        return strs[0]

    new_strs = sorted(strs, key=len)
    #supposedly, using for i in range(len(list)) is bad practice. So I used the _ throwaway variable with enumerate
    for i, _ in enumerate(new_strs[0]):
        for j, _ in enumerate(strs[:-1]):#Debated using a while loop here, but opted for the nested for instead.
            letter = strs[0][i]
            if strs[j][i] != strs[j+1][i]:
                return pref
        pref += letter
    return pref

print(longestCommonPrefix(strs))