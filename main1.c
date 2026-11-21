#include <iostream>
using namespace std;
struct node{
    	int data;
    	struct node*left;
    	struct node*right;
    	node(int val){
    		data = val;
    		left = NULL;
    		right = NULL;
		}
	};
int main(){
 
    node*root = new node(1);
	root->left = new node(2);
	root->right = new node(3);
	root->left->left = new node(4);
	root->left->right = new  node(5);
	root->right->left = new node(6);
	root->right->right = new node(7);
	cout<<"Root : " <<root->data<<endl;
	cout<<"Root->left : "<< root->left->data<<endl ;
	cout<<"Root->right : " <<root->right->data<<endl;
	cout<<"Root->left->left : " <<root->left->left->data<<endl;
	cout<<"Root->right->left->right : " <<root->right->left->right->data<<endl;
	cout<<"Root->right->right :  " <<root->right->right->data<<endl;
	return 0;
	
}
