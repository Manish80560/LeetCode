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
// class Solution {
// public:
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         ListNode* p = head ;
//         ListNode* q = head -> next;

//         while(q -> next != nullptr){
//             p -> next = q -> next;
//             q -> next = q -> next -> next;
//         }

//         p -> next = q -> next -> next;

//         return head;
        
//     }
// };

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        int len = 0;
        ListNode* p = head;

        while(p != nullptr){
            len++;
            p = p->next;
        }

        if(len == n){
            return head->next;
        }

        p = head;

        for(int i = 1; i < len - n; i++){
            p = p->next;
        }

        p->next = p->next->next;

        return head;
    }
};