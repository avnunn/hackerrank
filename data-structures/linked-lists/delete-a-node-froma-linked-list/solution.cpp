Node* Delete(Node* head, int position){
  if (!head) return NULL;
  else if (position == 0){
   Node* buffer = head->next;
   delete head;

   return buffer; 
  }

  Node* current = head;
  Node* left = head->next;

  while (position && current->next){
    --position;
    left = current;
    current = current->next;
  }

  Node* right = current->next;
  delete current;
  left->next = right;

  return head; 
}
