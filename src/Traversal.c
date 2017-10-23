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
