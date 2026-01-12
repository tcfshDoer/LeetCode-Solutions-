class Solution {//木桶效應（水位由短板決定）
public:
    int trap(vector<int>& height) {//每一個陣列中元素的高度
        int n = height.size();//獲取陣列的長度。
        int res = 0;//初始化結果變數 res（result 的縮寫），用來累加每一列算出來的水量。
        int left = 0,right = n-1;//定義左指針和右指針利用雙指針 (Two Pointers) 從兩端向中間逼近，並維護「左側最高」與「右側最高」來決定水量。
        int leftMax = 0,rightMax = 0;
        while(left < right){
            leftMax = max(leftMax,height[left]);//隨時更新左右兩側的屏障
            rightMax= max(rightMax,height[right]);
            if(leftMax<rightMax){//只要我右邊有一個比 leftMax 更高的屏障，我左邊這根柱子能接多少水就只取決於 leftMax
                res +=leftMax - height[left];
                left++;//掃描下一個
            }
            else{
                res +=rightMax - height[right];
                right--;
            }//隨著 left 增加（向右走）和 right 減少（向左走），兩個指針最終會相遇。當他們相遇時，while(left < right) 條件就會結束，代表整排柱子都掃描完畢。
        }
        return res;
    }
};
