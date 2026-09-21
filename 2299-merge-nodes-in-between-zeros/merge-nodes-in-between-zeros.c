/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeNodes(struct ListNode* head) {

    struct ListNode *temp1 = head->next;
    struct ListNode *ptr = NULL;
    struct ListNode *temp = NULL;

    while(temp1 != NULL) {

        struct ListNode *newnode = malloc(sizeof(struct ListNode));

        newnode->val = 0;
        newnode->next = NULL;

        while(temp1 != NULL && temp1->val != 0) {

            newnode->val += temp1->val;
            temp1 = temp1->next;
        }

        if(ptr == NULL) {
            ptr = newnode;
            temp = newnode;
        }
        else {
            temp->next = newnode;
            temp = newnode;
        }

        if(temp1 == NULL) {
            break;
        }

        temp1 = temp1->next;
    }

    return ptr;
}