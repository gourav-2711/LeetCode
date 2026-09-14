/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {
    struct ListNode *temp = head; 
    struct ListNode *head2= NULL;
    while(temp != NULL){
        struct ListNode *newnode = malloc(sizeof(struct ListNode));
        newnode->val = temp->val;
        temp = temp->next ;
        newnode->next = head2;
        head2 = newnode;
    }
    temp = head; 
    struct ListNode *temp2 = head2;
    while(temp != NULL && temp2 != NULL){
        if(temp->val != temp2->val){
            return false;
        }
        temp= temp->next ;
        temp2= temp2->next;
    }
    return true; 
}