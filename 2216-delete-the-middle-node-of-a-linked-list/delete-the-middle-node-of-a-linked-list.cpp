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
    ListNode* deleteMiddle(ListNode* head) {

        if(!head|| !head -> next){
            return nullptr;
        }

        vector<ListNode*> res;
        ListNode* temp = head;

        while(temp != nullptr){
            res.push_back(temp);
            temp = temp->next;
        }

        int mid = res.size() / 2;
        res[mid - 1] -> next = res[mid] -> next;
        delete res[mid];
        return head;
        

        // ListNode* fast = head, *slow = head;

        // if (fast->next == NULL) return NULL;
        // fast = fast->next->next;
        // while (fast != NULL && fast->next != NULL) {
        //     fast = fast->next->next;
        //     slow = slow->next;
        // }

        // slow->next = slow->next->next;
        // return head;
    }
};