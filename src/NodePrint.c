#include "NodePrint.h"
#include <stdio.h>

void printInteger(Node *node){
    printf("%d, ",node->Data);
}

void printDecoratedInteger(Node *node){
    printf("(***)%d, ",node->Data);
}

void printString(Node *node){
    printf("%s, ",node->Data);
}
