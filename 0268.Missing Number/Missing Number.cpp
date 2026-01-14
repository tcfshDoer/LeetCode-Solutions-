class Solution {
public:
    int missingNumber(vector<int>& nums) {//如果 (n) 的規模達到十萬等級，用 int 計算總和會發生 Integer Overflow。為了系統的穩定性（Stability），建議將求和變數提升為 long long。
        long long  n = nums.size();//遍歷所有數字，確定數組長度
        long long curSum = 0;//實際總和
        for(int num : nums){
            curSum = curSum + num;
        }
        long long originSum = (0+n) * (n+1) / 2;
        return originSum - curSum;
    }
};
