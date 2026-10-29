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
    ListNode *detectCycle(ListNode *head) {
        typedef ListNode node ; 
        node *temp = head ; 
        node *arr[10000];
        int j = 0 ;
        while(temp != NULL){
            for(int i = 0 ; i < j ; i++){
                if(temp == arr[i]){
                    return temp ; 
                }
            }
            arr[j++] = temp; 
            temp = temp->next;
        }
        return NULL;
    }

};