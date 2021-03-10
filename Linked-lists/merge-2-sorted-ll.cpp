SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
  SinglyLinkedListNode* dummy= new SinglyLinkedListNode(-1);
  SinglyLinkedListNode* first=dummy;
  while(head1 !=NULL && head2!=NULL){
      if(head1->data<head2->data){
          dummy->next=head1;
          head1=head1->next;
      }
      else{
          dummy->next=head2;
          head2=head2->next;
      }
      dummy=dummy->next;
  }
    if(head1!=NULL){
        dummy->next=head1;
    }
    else{
        dummy->next=head2;
    }
    
  return first->next;
}