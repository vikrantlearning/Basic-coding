class Solution
{
    public:
    Node* reverse(Node *root)
    {
        Node *prev=NULL;
        Node *curr=root;
        
        while(curr)
        {
             Node *nex=curr->next;
             curr->next=prev;
             prev=curr;
             curr=nex;
        }
        return prev;
    }
    Node *compute(Node *head)
    {
        // your code goes here
        if(!head)
         return head;
        //lOGIC IS REVERSE THE linkedList ->any node smaller than curr_max(initially new 
        // new head will be removed from the List else if it is bigger update the curr_max and curr and prev node )
        head=reverse(head);
        
        int mx=head->data;
        Node *curr,*prev;
        curr=head;
        prev=head;
        curr=curr->next;
        while(curr)
        {
           if(curr->data<mx)
           {
              prev->next=curr->next;
              curr=curr->next;
           }
           else{
              mx=curr->data;
              prev=curr;
              curr=curr->next;
           }
        }
        
        head=reverse(head);
        return head;
    }
    