#ifndef _TRAVERSAL_H
#define _TRAVERSAL_H
#include "Node.h"

void printTraversalInorder(Node *node);
void printTraversalPostorder(Node *node);
void printTraversalPreorder(Node *node);
void _printTraversalInorder(Node *node, void(*print)(Node *node));
#endif // _TRAVERSAL_H
