/*
  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not. 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int CompareLists(Node *headA, Node* headB)
{
  while (true){
    if (headA && !headB) return 0;
    else if (!headA && headB) return 0;
    else if (!headA && !headB) return 1;
    else if (headA->data != headB->data) return 0;
    headA = headA->next;
    headB = headB->next;
  }
}

