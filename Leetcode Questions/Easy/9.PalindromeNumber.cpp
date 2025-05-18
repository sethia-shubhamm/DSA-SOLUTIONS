class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return 0;
        int revNum=0,lastDig,num=x;
        while(x!=0){
            lastDig=x%10;
            if((long)revNum*10<INT_MAX && (long)revNum*10>INT_MIN) revNum=(revNum*10)+lastDig;
            else return 0;
            x=x/10;
        }
        return ((revNum==num)?1:0);
    }
};