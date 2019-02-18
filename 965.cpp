#include<iostream>
using namespace std;
class Solution {
public:
    bool isUnivalTree(TreeNode* root) {
	    if(root==NULL)
		    return true;
	    if(root->right==NULL&&root->left==NULL)
	    {
		    return true;
	    }
	    else if(root->right && root->left)
	    {
		    return (root->val==root->right->val) && (isUnivalTree(root->right)) && (root->val==root->left->val) && (isUnivalTree(root->left));
	    }
	    else if(root->right)
	    {
		    return(root->val==root->right->val) && (isUnivalTree(root->right));
	    }
	    else if(root->left)
	    {
		    return (root->val==root->left->val) && (isUnivalTree(root->left));

	    }
	    return false;
		
	    
    }
};
int main()
{
	cout<<"hello world"<<endl;
	return 0;
}
