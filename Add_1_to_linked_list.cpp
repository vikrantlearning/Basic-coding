Node* rev(Node *head)
    {
        Node *prev=NULL;
        Node *cur=head;
        
        while(cur)
        {
            Node* nex=cur->next;
            cur->next=prev;
            prev=cur;
            cur=nex;
        }
        //cur->next=prev;
        return prev;
    }
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        Node *temp,*tt;
        temp=head;
        if(head->next==NULL)
        {
             head->data=head->data+1;
             return head;
        }
        tt=rev(temp);
        
        temp=tt;
        int carry=0;
        //temp->data=temp->data+1;
        if(temp->data!=9)
        temp->data+=1;
        else {
        while(temp->data==9&&temp->next!=NULL)
        {
            temp->data=0;
            temp=temp->next;
            carry=1;
        }
    
        if(temp!=NULL)
        temp->data=temp->data+carry;
        }
         
        //}
        
        tt=rev(tt);
        
        return tt;
    }