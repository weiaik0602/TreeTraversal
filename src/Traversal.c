#include "Traversal.h"
#include <stdio.h>



void printTraversalInorder(Node *node){
  if(node->Left!=NULL)
    printTraversalInorder(node->Left);
  printf("%d"",",node->Data);
  if(node->Right!=NULL)
    printTraversalInorder(node->Right);
}
void printTraversalPostorder(Node *node){
  if(node->Left!=NULL)
    printTraversalPostorder(node->Left);
  if(node->Right!=NULL)
    printTraversalPostorder(node->Right);
  printf("%d"",",node->Data);
}
void printTraversalPreorder(Node *node){
  printf("%d"",",node->Data);
  if(node->Left!=NULL)
    printTraversalPreorder(node->Left);
  if(node->Right!=NULL)
    printTraversalPreorder(node->Right);
}
void _printTraversalInorder(Node *node, void(*print)(Node *node)){
  if(node->Left !=NULL)
  _printTraversalInorder(node->Left,print);
  print(node);
  if(node->Right !=NULL)
  _printTraversalInorder(node->Right,print);
}

void _printTraversalPostorder(Node *node, void(*print)(Node *node)){
  if(node->Left!=NULL)
    _printTraversalPostorder(node->Left,print);
  if(node->Right!=NULL)
    _printTraversalPostorder(node->Right,print);
  printf("%d"",",node->Data);
}
