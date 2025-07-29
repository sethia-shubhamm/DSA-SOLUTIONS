class Solution {
public:
    int maxArea(vector<int>& height) {
        int area=0;
        int l=0,h=height.size()-1;
        while(l<h){
            if(height[l]<height[h]){
                int checkArea=height[l]*(h-l);
                if(checkArea>area) area=checkArea;
                l++;
            }
            else {
                int checkArea=height[h]*(h-l);
                if(checkArea>area) area=checkArea; 
                h--;
            }
        }
        return area;
    }
};