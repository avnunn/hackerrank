/*
 *   Remove all duplicate elements from a sorted linked list
 *     Node is defined as
 *       struct Node
 *       {
 *         int data;
 *         struct Node *next;
 *       }
 */
Node *RemoveDuplicates(Node *head) {
  // This is a "method-only" submission.
  // You only need to complete this method.
  Node *current = head;
  while (current && current->next) {
    if (current->data == current->next->data) {
      Node *buffer = current->next->next;
      delete current->next;
      current->next = buffer;
    } else {
      current = current->next;
    }
  }

  return head;
}
