class Solution {
public:
    bool canEat(vector<int>& piles, int h, long long k) {
        long long hours = 0;
        for (int bananas : piles) {
            hours += (bananas + k - 1) / k;
        }
        return hours <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        long long l = 1;
        long long high = *max_element(piles.begin(), piles.end());
        int ans = -1;

        while (l <= high) {
            long long mid = l + (high - l) / 2;
            if (canEat(piles, h, mid)) {
                ans = mid;
                high = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return ans;
    }
};
