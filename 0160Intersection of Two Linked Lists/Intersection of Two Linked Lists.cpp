/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {//我走過你走過的路，我們終將相遇。
public://當鏈表A和鏈表B從開頭到相交節點長度分別為a和b，相交節點到節尾的長度為c，二者總長度為a+b+c，經過a+b+c次遍歷一定可以能夠同時到達相交的第一次節點，模擬出了長度相同的情況
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
ListNode* tempA = headA;//從頭遍歷A鏈表
ListNode* tempB = headB;//從頭遍歷B鏈表
        while(tempA != tempB){ 
        if(tempA != nullptr)tempA = tempA -> next;//如果當前節點沒有到達節尾，就更新下一跳
        else tempA = headB;//到達節尾就更新另一個開頭的鏈表位置，並不是回到「自己」的第一格，而是跳到「對方」的第一格

        if(tempB != nullptr) tempB = tempB -> next;
        else tempB = headA;//一旦遍歷到的結尾相同就一定是相交的起始節點
    }
    return tempA;//演算法終止時，tempA 只有兩種狀態：指向相交節點，或因不相交而指向 nullptr；因此直接回傳 tempA 即可優雅地處理所有邊界條件。
    }
};
