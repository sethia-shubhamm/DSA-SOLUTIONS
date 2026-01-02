class Solution {
public:
    bool canBloom(vector<int>& bloomDay, int days, int m, int k) {
        int count = 0;
        for (int i = 0; i < bloomDay.size(); i++) {
            if (bloomDay[i] <= days) {
                count++;
                if (count == k) {
                    m--;
                    count = 0;
                    if (m == 0) return true;
                }
            } else {
                count = 0;
            }
        }
        return false;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        if ((long long)m * k > bloomDay.size()) return -1;

        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());
        int ans = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (canBloom(bloomDay, mid, m, k)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};
