#ifndef _TRAVERSAL_H
#define _TRAVERSAL_H

typedef struct Node Node;
struct Node{
  Node *Left;
  Node *Right;
  int Data;
};


void printTraversalInorder(Node *node);
void printTraversalPostorder(Node *node);
void printTraversalPreorder(Node *node);
#endif // _TRAVERSAL_H
