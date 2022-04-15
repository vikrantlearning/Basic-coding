//Remove Duplicates
Node * removeDuplicates( Node *head) 
    {
     // your code goes here
     map<int,int> mp;
     
     Node *temp=head;
     Node *nex=head->next;
     mp[head->data]=1;
     while(temp->next)
     {
         if(mp[nex->data])
         {
             nex=nex->next;
             temp->next=nex;
         }
         else
         {
             mp[nex->data]=1;
             temp=nex;
             nex=nex->next;
         }
     }
     return head;
    }