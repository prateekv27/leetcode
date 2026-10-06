class Solution {
public:
    ListNode* getmiddle(ListNode* head){
        if(head==NULL){
            return NULL;
        }
        if(head->next == NULL){
            return head;
        }

        ListNode* slow = head;
        ListNode* fast = head -> next;
        while(fast!=NULL){
            fast = fast -> next;
            if(fast!=NULL){
                fast = fast -> next;
            }
            slow = slow -> next;
        }
        return slow;
    }

    ListNode* middleNode(ListNode* head) {
        return getmiddle(head);

        
        
        
    }
};