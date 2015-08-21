#include <iostream>
#include <stack>

using namespace std;

void ReversePrint(Node* head){
  stack<int> buffer;

  while (head){
    buffer.push(head->value);
    head = head->next; 
  } 

  while (!buffer.empty()){
    cout << buffer.top() << "\n";
    buffer.pop(); 
  }
}
