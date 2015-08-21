struct Node;

Node* InsertNth(Node *head, int data, int position){
  Node* node = new Node();
  node->data = data; 
  if (!head) return node; 
  else if (position == 0){
    node->next = head; 
    return node;
  }

  Node* left = head; 
  Node* right = head->next;
  Node* current = head;
  
  while (position && current->next){
    --position;
    left = current;
    current = current->next; 
    right = current;
  }

  left->next = node;
  node->next = right;

  return head;
}
