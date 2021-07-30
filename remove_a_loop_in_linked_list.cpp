void remov(Node *slow,Node *fast)
    {
        while(slow!=fast)
        {
            slow=slow->next;
            fast=fast->next;
        }
        while(slow->next!=fast)
        {
            slow=slow->next;
        }
        slow->next=NULL;
    }
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        Node *slow=head;
        Node *fast=head;
        
        while(fast&&fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                slow=head;
                remov(slow,fast);
                break;
            }
        }
    }