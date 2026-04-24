// /**
//  * Definition for singly-linked list.
//  */
//   struct ListNode {
//       int val;
//       struct ListNode *next;
//   };
 
// bool isPalindrome(struct ListNode* head) {
//     struct ListNode* temp = head;

//     while(temp != NULL){
//         printf("%d ",temp->val);
//         temp = temp->next
//     }

// }

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

bool isPalindrome(struct ListNode* head) {
    int arr[100000];   // large enough for constraints
    int n = 0;

 // Step 1: Store values in array
    struct ListNode* temp = head;
    while (temp != NULL) {
        arr[n++] = temp->val;
        temp = temp->next;
    }

// Step 2: Compare forward & backward
    int i = 0, j = n - 1;
    while (i < j) {
        if (arr[i] != arr[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}