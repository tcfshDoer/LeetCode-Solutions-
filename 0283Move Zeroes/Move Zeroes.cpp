class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int left = 0;//擔任「守門員」，它指著的位置代表「下一個非零元素應該存放的地方」，掃描到0就停住
        int right = 0;//擔任「偵察兵」，負責掃描陣列中所有的元素。
        while(right<n){
            if(nums[right]!=0){
                swap(nums[left],nums[right]);//當快指針發現一個非零數值時，立即與慢指針位置交換。這不僅把非零數往前挪，還能同時把 0 往後推。
                left++;//慢指針有條件地掃描
            }
            right++;//快指針一直掃描
        }
    }
};
