//Approach
//Step1 :Find the middle element
//Step2: Reverse the second half of linked list
//Step3: Now traverse the first half with second half and put first half->next as second half

Node* reverse(Node *head)
{
    Node *curr,*prev,*nex;
    prev=NULL;
    curr=head;
    nex=head->next;
    while(curr)
    {
        nex=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nex;
    }
    return prev;
}

void reorderList(Node* head) {
    // Your code here
    if(head==NULL||head->next==NULL)
    return;
    Node *slow,*fast;
    slow=head;
    fast=head;
    while(fast->next&&fast->next->next)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    Node *sec_head=slow->next;
    slow->next=NULL;
    sec_head=reverse(sec_head);
    Node *first_head=head;
    Node *temp1,*temp2;
    while(first_head&&sec_head)
    {
     temp1=first_head->next;
     first_head->next=sec_head;
     temp2=sec_head->next;
     sec_head->next=temp1;
     first_head=temp1;
     sec_head=temp2;
    }
    
}