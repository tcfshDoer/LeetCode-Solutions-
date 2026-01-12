class Solution {
公共:
    int maxArea(vector<int>& height) {
        int res = 0;
        int l = 0, r = height.size()-1;//左指針,右指針
        while(l <r){//指針向內收縮
            int w = r-l;//寬度
            int h = min(height[l],height[r]);//高度
            res = max(res,w*h);//更新最終水量
            if(height[l]<height[r]){
                int cur = height[l];//當前左指針高度
                while(l<r && height[l] <=cur) l++;//直到比之前的高度更高，左指針向右移動
            }
            else{
                int cur = height[r];//當前右指針高度
                while(l<r && height[r] <=cur) r--;//直到比之前的高度更高，右指針向左移動
            }
        }
        return res;
    }
};
