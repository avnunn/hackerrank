/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/


// This is a "method-only" submission. 
// You only need to complete this method.
int GetNode(Node* head, int positionFromTail){
  int length = 0; 
  Node* buffer = head;

  //count the length of the list
  while (buffer){
    ++length;
    buffer = buffer->next;
  }

  //reset our iteration 
  buffer = head;
  //adjust to where we want to stop
  length -= positionFromTail + 1; 
  //get to our desired position 
  while (length > 0){
    buffer = buffer->next;
    --length; 
  }

  //return positions data
  return buffer->data;
}
