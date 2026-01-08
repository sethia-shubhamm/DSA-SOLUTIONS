class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        freq = Counter(nums)
        buckets = [[] for _ in range(len(nums) + 1)]

        for num, f in freq.items():
            buckets[f].append(num)

        ans = []
        for i in range(len(buckets) - 1, -1, -1):
            for num in buckets[i]:
                ans.append(num)
                if len(ans) == k:
                    return ans

#Short Thought Process:
# 1. We use a Counter to count the frequency of each element in the input list
# 2. We create a list of buckets where the index represents the frequency and each bucket contains the elements with that frequency.
# 3. We iterate through the frequency dictionary and place each element in its corresponding bucket based
# on its frequency.
# 4. We then iterate through the buckets in reverse order (from highest frequency to lowest) and collect elements until we have k elements.
# 5. Finally, we return the list of the top k frequent elements.    
#link: https://leetcode.com/problems/top-k-frequent-elements/description/