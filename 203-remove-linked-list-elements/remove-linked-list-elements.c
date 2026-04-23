/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
           struct  ListNode* temp = head;

        // handle deletion at head
        while (temp != NULL && temp->val == val) {
            temp = temp->next;
        }

        head = temp;

        // main logic (same idea as your code)
        while (temp != NULL && temp->next != NULL) {
            
            // cout fixed (optional debug)
            // cout << temp->val << " ";

            if (temp->next->val == val) {
                temp->next = temp->next->next;
            } else {
                temp = temp->next;
            }
        }

        return head;
}