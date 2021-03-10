DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {
DoublyLinkedListNode *node = new DoublyLinkedListNode(data);
DoublyLinkedListNode* first=head;
DoublyLinkedListNode* temp;
    while(first!=NULL && first->data<data){
        temp=first;
        first=first->next;
    }
    if(first==head){
        node->next=head;
        node->prev=NULL;
        head->prev=first;
        head=node;
    }
    else if(first==NULL){
        temp->next=node;
        node->prev=temp;
    }
    else {
        temp->next=node;
        node->prev=temp;
        first->prev=node;
        node->next=first;
    }
    return head;

}