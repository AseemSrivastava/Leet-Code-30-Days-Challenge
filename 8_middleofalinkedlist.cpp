/*
Approach:- We will use tortoise and hare technique, where we will take two pointers, in which one 
pointer will travel with a twice the speed of another pointer, and when the faster pointer will 
reach null then the slow pointer will be present at the middle.
*/

ListNode* middleNode(ListNode* head) {
    if(head==NULL)return head;
    ListNode* p1=head,*p2=head;
    while(p2->next!=NULL && p2->next->next!=NULL)
    {
        p1=p1->next;
        p2=p2->next->next;
    }
    return p2->next==NULL ? p1 : p1->next;
}