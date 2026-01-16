#include<iostream>
#include<stdlib.h>
using namespace std;

struct TreeNode{
	int val; 
	TreeNode *left; 
	TreeNode *right;

	TreeNode(int x) : val(x) , left(NULL), right(NULL){}
};
void inorder(TreeNode* root){
	if(root == NULL)return; 
	inorder(root->left);
	cout<< root->val<<" "; 
	inorder(root->right);
}

void preorder(TreeNode* root){
	if(root == NULL)return;
	cout<<root->val<<" ";
	preorder(root->left);
	preorder(root->right);
}

void postorder(TreeNode* root){
	if(root == NULL) return;
	postorder(root->left);
	postorder(root->right);
	cout<<root->val<<" ";
}
int main(){
	TreeNode* root = new TreeNode(1); 
	root->left = new TreeNode(2); 
	root->right = new TreeNode(3); 

	cout<<"Root: "<<root->val;
	cout<<"Left: "<<root->left->val;
	cout<<"Right: "<<root->right->val;
	cout<<endl;
	inorder(root);
	cout<<endl;
	preorder(root);
	cout<<endl;
	postorder(root);
	cout<<endl;
}
