//Split a linked_List into two halves
void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    // your code goes here
  Node *temp1,*temp2,*temp3;
  temp1=head;
  temp2=head;
  temp3=head;
  
 
  while(temp2->next!=head&&temp2->next->next!=head)
  {
      temp1=temp1->next;
      temp2=temp2->next->next;
  }
  if(temp2->next==head){
   temp2->next=temp1->next;
  }
  else{
   temp2->next->next=temp1->next;
  }
  
  temp3=temp1->next;
  temp1->next=head;
  *head1_ref=head;
  *head2_ref=temp3;
  
  
}