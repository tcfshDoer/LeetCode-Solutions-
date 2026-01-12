class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();//定義整數n是陣列中元素的Intput總個數
        vector<int> res(2);//定義res(2)是Output的輸出陣列
        unordered_map<int,int>mp;//定義哈希表mp將遍歷過的元素和下標存儲起來
        for(int i = 0;i<n;i++){//逐一掃瞄，i是正在第幾個位置
            int rest=target-nums[i];//定義整數rest是target與目標元素的差
            if(mp.count(rest)){//查詢哈希表中有無差這個元素
                res={i,mp[rest]};//將i位置和rest在哈希表中的位置設定成Output res
                break;//找到答案陣列，跳出迴圈
            }
            mp[nums[i]]=i;//沒找到差值rest，把i元素和i元素的陣列位置關係紀錄下來
        }
        return res;//將答案陣列傳給評分系統
    }
};
