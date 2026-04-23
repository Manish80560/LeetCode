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
 class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {

        ListNode* temp = head;

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
};