/*
  Detect loop in a linked list
  List could be empty also
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/

int HasCycle(Node *head) {
  Node* turtoise = head;
  if (turtoise == NULL) return 0;
  Node* hare = turtoise->next;
  if (hare == NULL) return 0;
  
  while (turtoise != hare){
      turtoise = turtoise->next;
      hare = hare->next;
      if (hare == NULL) return 0;
      hare = hare->next;
      if (hare == NULL) return 0;
  }
  
  return 1;
}