#include<iostream>
using namespace std;
class Solution {
public:
    int maxDepth(TreeNode* root) {
	    return root ? 1+max(maxDepth(root->left),maxDepth(root->right)) : 0;
    }
};
int main()
{
	cout<<"hello world!"<<endl;
	return 0;
}
