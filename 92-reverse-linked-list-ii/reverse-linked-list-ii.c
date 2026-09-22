/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseBetween(struct ListNode* head, int left, int right) {

    struct ListNode *temp = head;

    // Move temp to the left position
    for(int i = 1; i < left; i++) {
        temp = temp->next;
    }

    // temp is now at left
    struct ListNode *start = temp;

    // New reversed list
    struct ListNode *head2 = NULL;

    for(int i = left; i <= right; i++) {

        struct ListNode *newnode = malloc(sizeof(struct ListNode));

        newnode->val = temp->val;

        // Insert at beginning
        newnode->next = head2;
        head2 = newnode;

        temp = temp->next;
    }

    // Start again from left
    temp = start;

    // Copy reversed values back
    struct ListNode *temp2 = head2;

    for(int i = left; i <= right; i++) {

        temp->val = temp2->val;

        temp = temp->next;
        temp2 = temp2->next;
    }

    return head;
}
