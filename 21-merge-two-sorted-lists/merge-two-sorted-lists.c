/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode *temp1 = list1; 
    struct ListNode *temp2 = list2;
    struct ListNode *head = NULL;
    struct ListNode *temp = NULL;
    while(temp1 != NULL  && temp2 != NULL){
        if(temp1->val <= temp2->val){
            if(head == NULL){
                head = temp1;
                temp = temp1;
            }
            else{
                temp->next = temp1;
                temp = temp1; 
            } 
            temp1 = temp->next; 
        }
        else if(temp1->val >= temp2->val){
            if(head == NULL){
                head = temp2;
                temp = temp2;
            }
            else{
                temp->next = temp2;
                temp = temp2; 
            } 
            temp2 = temp2->next; 
        }
    }
    while(temp1 != NULL){
       if(head == NULL){
                head = temp1;
                temp = temp1;
            }
            else{
                temp->next = temp1;
                temp = temp1; 
            } 
            temp1 = temp->next; 
    }
    while(temp2 != NULL){
        if(head == NULL){
                head = temp2;
                temp = temp2;
            }
            else{
                temp->next = temp2;
                temp = temp2; 
            } 
            temp2 = temp2->next; 
    }
    return head ; 
}