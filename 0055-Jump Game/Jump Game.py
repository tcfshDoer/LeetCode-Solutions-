class Solution: #我不關心具體怎麼跳，我只關心我目前最遠能跳到哪裡。
    def canJump(self, nums: List[int]) -> bool:
        max_reach = 0 #紀錄目前所有跳躍範圍內，能到達的最遠索引位置
        for i in range(len(nums)):
            if i > max_reach:  # 代表已經無法前進
                return False
            max_reach = max(max_reach, i + nums[i]) #在每一個點，都計算「從這裡跳最遠能到哪裡」，並更新全局最遠距離。
            if max_reach >= len(nums) - 1:  # 代表已經能到終點
                return True
        return True
