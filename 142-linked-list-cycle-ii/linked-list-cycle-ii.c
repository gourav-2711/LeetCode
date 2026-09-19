/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *detectCycle(struct ListNode *head) {
    if(head == NULL || head->next == NULL){
        return NULL; 
    }
    struct ListNode *temp = head;
    struct ListNode *arr[10000];
    int j = 0; 
    while(temp != NULL){
        for(int i = 0 ; i < j ; i++){
            if(temp  == arr[i]){
                return temp; 
            }
        }
        arr[j] = temp;
        j++;
        temp = temp->next ; 
    }
    return NULL;
}