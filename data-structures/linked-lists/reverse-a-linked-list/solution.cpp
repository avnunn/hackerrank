#include<stack>
using std::stack;
 
Node* Reverse(Node* head){
  if (!head) return NULL; 
  stack<Node*> s;

  while (head){
    s.push(head); 
    head = head->next;
  }

  Node* buffer = head = s.top();
  s.pop();

  while (!s.empty()){
    Node* top = s.top();
    buffer->next = top;
    buffer = top;
    s.pop();
  }
  buffer->next = NULL;

  return head;
}
