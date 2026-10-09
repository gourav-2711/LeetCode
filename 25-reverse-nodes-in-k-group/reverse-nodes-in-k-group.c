/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* reverseKGroup(struct ListNode* head, int k) {
    struct ListNode dummy;
    dummy.next = head;

    struct ListNode* prevGroup = &dummy;

    while (1) {
        struct ListNode* kth = prevGroup;

        for (int i = 0; i < k; i++) {
            kth = kth->next;

            if (kth == NULL) {
                return dummy.next;
            }
        }

        struct ListNode* nextGroup = kth->next;

        struct ListNode* prev = nextGroup;
        struct ListNode* curr = prevGroup->next;

        while (curr != nextGroup) {
            struct ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }

        struct ListNode* temp = prevGroup->next;
        prevGroup->next = kth;
        prevGroup = temp;
    }
}