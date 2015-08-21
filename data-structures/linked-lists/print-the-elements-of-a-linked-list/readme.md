# data structures / linked lists / print the elements of a linked list
## Problem Statemen
If youre new to working with linked lists, this is a great exercise to get familiar with them. Youre given the pointer to the head node of a linked list and you need to print all its elements in order, one element per line. The head pointer may be null, i.e., it may be an empty list. In that case, dont print anything!

## Input Format 
You have to complete the void `Print(Node* head)` method which takes one argument - the head of the linked list. You should NOT read any input from stdin/console. There are multiple test cases. For each test case, this method will be called individually.

## Output Format 
Print the elements of the linked list to stdout/console (using printf or cout) , one per line.

## Sample Input
```
NULL
1->2->3->NULL
```

## Sample Output
```
1
2
3
```

## Explanation
For first case, an empty list is passed to the method. So nothing is printed. For second case, all the elements of the linked list (1, 2 and 3) are printed in separate lines.
