/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int Divisor(int a , int b){
    while(b != 0 ){
        int temp = b ;
        b = a % b ; 
        a = temp ; 
    }
    return a ; 
}
struct ListNode* insertGreatestCommonDivisors(struct ListNode* head) {
    struct ListNode *temp = head ; 
    while(temp->next != NULL){
        int value1 = temp->val;
        int value2 = temp->next->val; 
        int divisor = Divisor(value1 , value2);
        struct ListNode *newnode = malloc(sizeof(struct ListNode));
        newnode->val = divisor;
        newnode->next = temp->next; 
        temp->next = newnode; 
        temp = temp->next->next;
    }
    return head; 
}