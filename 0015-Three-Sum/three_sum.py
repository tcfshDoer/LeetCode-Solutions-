class Solution:#排序加雙指針
    def threeSum(self, nums: List[int]) -> List[List[int]]:#nums是一個整數列表，「->」標示函數執行完後會回傳什麼，回傳一堆整小陣列
        n=len(nums)#定義n是列表nums的長度
        if n <3:#邊界條件檢查
            return []#這題沒答案

            #1.排序O(nlogn)
        nums.sort()#由小道大升序排列
        result=[]#建立結果儲存桶

        #2.遍歷固定第一個數(i)
        #只需要遍歷到n-2的位置，因為需要三個數，所以至少要留2位置給剩下的兩個數
        for i in range(n-2):

            #優化1:如果nums[i]已經大於0，則三樹枝和不可能為0(因為數組已經排序)
            if nums[i]>0:
                break

            #優化2:固定i的去重
            #如果當前i與上一次固定的數相同，則跳過
            if i > 0 and nums[i] == nums[i-1]:
                continue

            #3雙指針查找 (L和R)
            L = i+1
            R = n-1

            while L<R:
                current_sum = nums[i] + nums[L]+nums[R]

                if current_sum == 0:
                    #找一個解
                    result.append([nums[i],nums[L],nums[R]])
                    #找到解後，L和R都需要移動，並進行去重
                    L+=1
                    R-=1

                    #去重L和R(核心步驟)
                    while L < R and nums[L] == nums[L-1]:
                        L += 1 #避免使用重複的L
                    while L < R and nums[R] == nums[R+1]:
                        R -= 1#避免使用重複的R

                elif current_sum <0:
                    #和大小,L 右移，嘗試更大的數
                    L +=1
                else:

                    R -=1

        return result
