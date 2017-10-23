#include "unity.h"
#include "Traversal.h"
#include "NodePrint.h"
#include <stdio.h>

Node node1={NULL,NULL,1};
Node node3={NULL,NULL,3};
Node node7={NULL,NULL,7};
Node node24={NULL,NULL,24};
Node node28={NULL,NULL,28};
Node node2={&node1,&node3,2};
Node node5={NULL,&node7,5};
Node node15={NULL,NULL,15};
Node node25={&node24,&node28,25};
Node node4={&node2,&node5,4};
Node node20={&node15,&node25,20};
Node node10={&node4,&node20,10};



StringNode nodeAli = {NULL,NULL,"Ali"};
StringNode nodeAbu = {NULL,NULL,"Abu"};
StringNode nodeDavid = {NULL,NULL,"David"};
StringNode nodeSteven = {NULL,NULL,"Steven"};
StringNode nodeAbraham = {&nodeAli,&nodeAbu,"Abraham"};
StringNode nodeNoah = {&nodeDavid,&nodeSteven,"Noah"};
StringNode nodeAdam = {&nodeAbraham,&nodeNoah,"Adam"};

int inOrderGoldenVal[]={1,2,3,4,5,7,10,15,20,24,25,28};
int postOrderGoldenVal[]={1,3,2,7,5,4,15,24,28,225,20,10};
int preOrderGoldenVal[]={10,4,2,1,3,5,7,20,15,25,24,28};

int curlIndex;
int indexLimit;
int *goldenIntValues;


void verifyInorderInteger(Node *node){
  char error[1028];
  if(goldenIntValues[curlIndex]!=node->Data){
    sprintf(error,"At index %d,expected %d but was %d",
            curlIndex,goldenIntValues[curlIndex],node->Data);
    TEST_FAIL_MESSAGE(error);
  }
  if(curlIndex>=indexLimit){
    sprintf(error,"The number of values is greater than the number of golden values (%d)",indexLimit);
    TEST_FAIL_MESSAGE(error);
  }
  curlIndex++;
}
void test_verify(void){
  goldenIntValues=inOrderGoldenVal;
  indexLimit= sizeof(inOrderGoldenVal)/sizeof(int);
  _printTraversalPostorder(&node10,verifyInorderInteger);
  if(curlIndex<indexLimit){
    char error[1028];
    sprintf(error,"The number of values is lesser than the number of golden values (%d)",indexLimit);
    TEST_FAIL_MESSAGE(error);
  }
}

void setUp(void)
{
}

void tearDown(void)
{
}

void test_Traversal_printTraversalInorder(void)
{
    printf("%s","Inorder:\n");
    printTraversalInorder(&node10);
}
void test_Traversal_printTraversalPostorder(void)
{
    printf("%s","printTraversalPostorder:\n");
    printTraversalPostorder(&node10);
}
void test_Traversal_printTraversalPreorder(void)
{
    printf("%s","printTraversalPreorder:\n");
    printTraversalPreorder(&node10);
}

void test_printTraversalInorder_with_printInteger(void){
  _printTraversalInorder(&node10,printInteger);
}

void test_printTraversalInorder_with_printDecoratedInteger(void){
  _printTraversalInorder(&node10,printDecoratedInteger);
}

void test_printTraversalInorder_with_printString(void){
  _printTraversalInorder((Node *)&nodeAdam,printString);
}

void test_verify_inOrderGoldenVal(void){

}
