class Solution {
public:
    int differenceOfSums(int n, int m) {
        int div1=0,div2=0;
        n++;
        while(n--){
            if(n%m==0) div1+=n;
            else div2+=n;
        }
        return (div2-div1);
    }
};1