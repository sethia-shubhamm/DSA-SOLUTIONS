
class Solution {
public:
    int reverse(int x) {
        int ans=0,lastDig;
        while(x!=0){
            lastDig=x%10;
            if((long)ans*10<INT_MAX && (long)ans*10>INT_MIN) ans=(ans*10)+lastDig;
            else return 0;
            x=x/10;
        }
        return ans;
    }
};

