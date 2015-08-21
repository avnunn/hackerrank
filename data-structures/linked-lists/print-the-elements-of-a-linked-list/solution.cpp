#include <iostream>
using namespace std;

struct Node;

void Print(Node* head){
  if (!head) return;

  cout << head->data << endl;
  Print(head->next);
}
