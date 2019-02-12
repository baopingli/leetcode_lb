#include<iostream>
using namespace std;
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
	    if(root==NULL)
	    {
		    return NULL;
	    }
	    if((root->left==NULL)&&(root->right==NULL))
	    {
		    return NULL;
	    }
	    TreeNode* temp=root->left;
	    root->left=root->right;
	    root->right=temp;
	    invertTree(root->left);
	    invertTree(root->right);
    }
};
//上面的方法不行
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
	    if(!root) return NULL;
	    TreeNode *temp=root->left;
	    root->left=invertTree(root->right);
	    root->right=invertTree(temp);
	    return root;
    }
};
int main()
{
	cout<<"hello world!"<<endl;
	return 0;
}
