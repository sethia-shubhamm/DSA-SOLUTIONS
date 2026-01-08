class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        freq = defaultdict(list)

        for s in strs:
            char = [0] * 26
            for c in s:
                char[ord(c) - ord('a')] += 1
            freq[tuple(char)].append(s)

        return list(freq.values())

#Short Thought Process:
# 1. We use a defaultdict to group anagrams together(defaultdict instead of a normal dictionary to avoid key errors automatically fills missing keys with a default value).
# 2. For each string, we create a frequency list of size 26 (for each letter in the alphabet).
# 3. We convert this list to a tuple (to make it hashable) and use it as a key in the dictionary.from collections import defaultdict 
# 4. We append the original string to the list corresponding to this key.
# 5. Finally, we return the values of the dictionary as a list of lists.from collections import defaultdict

#link: https://leetcode.com/problems/group-anagrams/description/