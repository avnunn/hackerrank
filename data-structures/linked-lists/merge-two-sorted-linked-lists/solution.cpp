/*
  Merge two sorted lists A and B as one linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* MergeLists(Node *headA, Node* headB)
{
  // This is a "method-only" submission. 
  // You only need to complete this method
  Node* head = new Node();
  Node* buffer = head;

  while (true){
    Node* add = headA; 
    if (!headA && !headB) break;
    else if (!headA || (headB && headA->data > headB->data)){
      add = headB;
      headB = headB->next;
    }else{
      headA = headA->next;
    }
    buffer = buffer->next = new Node(); 
    buffer->data = add->data;
  }

  buffer = head;
  head = buffer->next;
  delete buffer;

  return head; 
}

