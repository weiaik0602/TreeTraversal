#ifndef _NODE_H
#define _NODE_H
#include <stdint.h>

typedef struct Node Node;
struct Node {
  Node *Left;
  Node *Right;
  uint32_t Data;
};

typedef struct StringNode StringNode;
struct StringNode {
  StringNode *Left;
  StringNode *Right;
  char *Data;
};

#endif // _NODE_H
