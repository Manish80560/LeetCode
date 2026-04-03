/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode* temp = head;

    while(temp != NULL && temp->next != NULL){
        // condition to check that the current value is equal or not to the next value
        if(temp->val == temp->next->val){
            // if true then go to the next pointer
            temp->next = temp->next->next;
        }else{
            // otherwise go to the next pointer 
            temp = temp->next;
        }
    }
    return head;
}