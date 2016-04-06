/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        int length, half, status;
        ListNode *index, *newhead, *tmp, *newindex;
        for(length = 0, index = head; index !=NULL; length++, index = index->next);

        half = length/2;
        newhead = NULL, index = head;
        while(half > 0) {
            tmp = index->next;
            index->next = newhead;
            newhead = index;

            index = tmp;
            half--;
        }

        if(length % 2 )
            index = index->next;
        newindex = newhead;
        status = 1;
        while(newindex != NULL) {
            status =  (status && (newindex->val == index->val));
            newindex = newindex->next;
            newhead->next = tmp;
            tmp = newhead;
            newhead = newindex;
            index = index->next;
        }
        return status;
    }
};
