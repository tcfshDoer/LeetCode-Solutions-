/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {//將next指向上一個節點，即完成反轉
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* curNode = head;// preNode 用來記錄「前一個節點」，因為反轉後頭部會變成尾部
        ListNode* preNode = nullptr;// 開始遍歷整個鏈結串列，直到 curNode 變為 null
        while(curNode){
            ListNode* nextNode = curNode->next; // 1. 暫存
            curNode->next = preNode; // 2. 反轉
            preNode = curNode; // 3. 移動 preNode
            curNode = nextNode;// 4. 移動 curNode
        }
        return preNode;
    }
};
