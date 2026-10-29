class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        typedef ListNode node;

        node *head = NULL;
        node *temp = NULL;
        int carry = 0;
        int sum;
        node *newnode;

        while (l1 != NULL || l2 != NULL || carry != 0) {
            int x = (l1 != NULL) ? l1->val : 0;
            int y = (l2 != NULL) ? l2->val : 0;

            sum = x + y + carry;
            carry = sum / 10;
            int value = sum % 10;

            newnode = new node;
            newnode->val = value;
            newnode->next = NULL;

            if (head == NULL) {
                head = newnode;
                temp = head;
            }
            else {
                temp->next = newnode;
                temp = newnode;
            }

            if (l1 != NULL)
                l1 = l1->next;

            if (l2 != NULL)
                l2 = l2->next;
        }

        return head;
    }
};