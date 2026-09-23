/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {

    struct ListNode* temp = head;
    struct ListNode* head2 = NULL;
    struct ListNode* temp3 = NULL;

    while (temp != NULL) {

        int value = temp->val;
        struct ListNode* temp2 = temp;
        bool found = false;

        while (temp2->next != NULL && temp2->next->val == value) {
            found = true;
            temp2 = temp2->next;
        }

        if (found == false) {
            struct ListNode* newnode = malloc(sizeof(struct ListNode));

            newnode->val = temp->val;
            newnode->next = NULL;

            if (head2 == NULL) {
                head2 = newnode;
                temp3 = newnode;
            }
            else {
                temp3->next = newnode;
                temp3 = newnode;
            }
        }

        temp = temp2->next;
    }

    return head2;
}