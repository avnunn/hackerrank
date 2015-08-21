struct Node;

Node* NewNode(int& data){
  Node* node = new Node();
  node->data = data;

  return node;
}

Node* Insert(Node* head, int& data){
  Node* current = head;

  if (current){
    while (current->next){
      current = current->next;
    }

    current->next = NewNode(data);
    return head;
  }
  else{
    return NewNode(data);
  }
}
