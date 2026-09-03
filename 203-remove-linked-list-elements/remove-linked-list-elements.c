/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode *newnodehead = NULL; 
    struct ListNode *temp = NULL;
    while(head != NULL){
        if(head->val != val){
            struct ListNode *newnode = (struct ListNode *)malloc(sizeof(struct ListNode)); 
            newnode->val = head->val;
            newnode->next = NULL;
            if(newnodehead == NULL){
                newnodehead = newnode;
                temp = newnode;
            }
            else{
                temp->next = newnode;
                temp = newnode;
            }
            head = head->next;
        }
        else{
            head = head->next;
        }
    }
    return newnodehead;
    
}