class Solution {
公共:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if (n <= 1 || k % n == 0) return;//邊界判斷
        reverse(nums.begin(),nums.end());//反轉整個數組
        reverse(nums.begin(),nums.begin()+k%n);//對前k個元素反轉
        reverse(nums.begin()+ k % n ,nums.end());//後面剩餘元素各進行一次反轉
    }//由於k的數字可能很大，為了避免溢出，所以k對數組長度n取餘數即可
};
