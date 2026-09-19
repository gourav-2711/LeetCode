/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int carry = 0 ; 
    struct ListNode * head = NULL;
    struct ListNode * temp = NULL;
    while(l1 != NULL || l2 != NULL || carry != 0  ){
        int sum = carry; 
        struct ListNode * newnode = malloc(sizeof(struct ListNode));
        if(l1 != NULL){
            sum += l1->val;
        }
        if(l2 != NULL){
            sum += l2->val; 
        }
        carry = sum / 10; 
        newnode->val = sum % 10;
        newnode->next = NULL;
        if(head == NULL){
            head = newnode;
            temp = newnode ;
        }
        else{
            temp->next = newnode ; 
            temp = newnode ; 
        }
        if(l1 != NULL){
            l1 = l1->next ; 
        }
        if(l2 != NULL){
            l2 = l2->next ; 
        }
    }
    return head ; 
}