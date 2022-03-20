 //Merge K Sorted linked List
 ListNode* merge(ListNode *list1,ListNode *list2)
    {
        if(list1==NULL)
            return list2;
        if(list2==NULL)
            return list1;
        
        ListNode *head,*temp;
        if(list1->val<list2->val){
            head=list1;
            list1=list1->next;
        }
        else{
            head=list2;
            list2=list2->next;
        }
        temp=head;
        while(list1 and list2)
        {
            if(list1->val<list2->val)
            {
                temp->next=list1;
                list1=list1->next;
            }
            else{
                temp->next=list2;
                list2=list2->next;
                }
            temp=temp->next;
        }
        if(list1)
        {
            temp->next=list1;
        }
        if(list2)
        {
            temp->next=list2;
        }
        return head;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0)
            return NULL;
        ListNode *head;
        while(lists.size()>1)
        {
            ListNode *list= merge(lists[0],lists[1]);
            lists.push_back(list);
            lists.erase(lists.begin());
            lists.erase(lists.begin());  
        }
        return lists.front();
        
    }
	
	//Geeks Merge k lists
	Node* merge(Node* list1,Node* list2)
    {
        if(list1==NULL)
            return list2;
        if(list2==NULL)
            return list1;
        
        Node *head,*temp;
        if(list1->data<list2->data){
            head=list1;
            list1=list1->next;
        }
        else{
            head=list2;
            list2=list2->next;
        }
        temp=head;
        while(list1 and list2)
        {
            if(list1->data<list2->data)
            {
                temp->next=list1;
                list1=list1->next;
            }
            else{
                temp->next=list2;
                list2=list2->next;
                }
            temp=temp->next;
        }
        if(list1)
        {
            temp->next=list1;
        }
        if(list2)
        {
            temp->next=list2;
        }
        return head;
    }
    Node * mergeKLists(Node *arr[], int K)
    {
           // Your code here
           if(K==0)
           return NULL;
           
           int rows=K;
           Node *ans=NULL;
           int i=0;
           while(i<K)
           {
              ans=merge(ans,arr[i]);
               i++;
           }
           
           return ans;
    }