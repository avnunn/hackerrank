/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/
int FindMergeNode(Node *headA, Node *headB) {
  Node *left = headA;
  while (left){
      Node *right = headB;
      while (right){
          if (left->next == right->next)
            return left->next->data;
          else right = right->next;
      }
      left = left->next;
  }
  
  return 0;
}
