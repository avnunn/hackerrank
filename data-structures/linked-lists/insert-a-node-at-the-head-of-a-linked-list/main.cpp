struct Node;

Node* create(int& data){
  Node* node = new Node();
  node->data = data;

  return node;
}

Node* unshift(Node* head, Node* push){
  push->next = head;
  return push;
}

Node* Insert(Node* head, int& data){
  if (!head) return create(data);
  else return unshift(head, create(data));
}
