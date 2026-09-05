/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeKLists(struct ListNode** lists, int listsSize) {
    struct ListNode * head = NULL;
    struct ListNode * temp = NULL;
    for(int i = 0 ; i < listsSize ; i++){
        while(lists[i] != NULL){
            if(head == NULL){
                head = lists[i];
                temp = lists[i];
            }
            else{
                temp->next = lists[i];
                temp = lists[i];
            }
            lists[i] = lists[i]->next;
        }
    }
    for(struct ListNode *p = head ; p != NULL ; p = p->next ){
        for(struct ListNode *q = p->next ; q != NULL ; q = q->next){
            if(p->val > q->val ){
                p->val = p->val + q->val ;
                q->val = p->val - q->val;
                p->val = p->val - q->val;
            }
        }
    }
    return head; 
}