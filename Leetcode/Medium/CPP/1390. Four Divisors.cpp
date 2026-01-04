class Solution {
public:
    int sumDivisors(int n){
        int sum = 0;
        int count = 0;

        for(int i = 1; i * i <= n; i++){
            if(n % i == 0){
                if(i == n / i){
                    count += 1;
                    sum += i;
                } else {
                    count += 2;
                    sum += i + (n / i);
                }

                if(count > 4) return 0;
            }
        }

        return (count == 4) ? sum : 0;
    }

    int sumFourDivisors(vector<int>& nums) {
        int ans = 0;
        for(int i = 0; i < nums.size(); i++){
            ans += sumDivisors(nums[i]);
        }
        return ans;
    }
};
