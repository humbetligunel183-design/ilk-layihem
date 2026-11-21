#include <stdlib.h>
#include <stdio.h>
using namespace std;
struct node
{
	int data;
	struct node*left;
	struct node*right;
	};
struct node *newNode(int data)
   {
   	struct node *temp = (struct node*)malloc(sizeof(struct node));
   	temp -> data = data;
   	temp  -> left = NULL;
   	temp  -> right = NULL;
   	return temp;
}
int main()
{
	struct node*root = newNode(1);
	root ->left = newNode(2);
	root ->right = newNode(3);
	root ->left->left = newNode(4);
	root ->left->right= newNode(5);
	root ->right->left= newNode(6);
	root ->right->right= newNode(7);
	printf("Root : %d \n", root->data);
	printf("Root->left : %d \n",root->left->data);
	printf("Root->right : %d \n",root->right->data);
	printf("Root->left->left : %d \n",root->left->left->data);
	printf("Root->left->right : %d \n", root->left->right->data);
	printf("Root->right->left : %d \n",root->right->left->data);
	printf("Root->right->right : %d \n",root->right->right->data);
	return 0;	
}
