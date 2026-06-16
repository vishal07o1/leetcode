class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_water=0;
       int left_pointer=0;
       int right_pointer=height.size()-1;
       while(left_pointer<right_pointer){


        int width=right_pointer-left_pointer;

        int heights=min(height[left_pointer],height[right_pointer]);

        int area=width*heights;
        max_water=max(area,max_water);

        height[right_pointer]>height[left_pointer] ? left_pointer++ :right_pointer--;
       }
        return max_water;
    }
};