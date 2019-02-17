#include<iostream>
#include<vector>
using namespace std;
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    vector<int> result;
    vector<int> preorder(Node* root) {
        
        dfs(root);
        return result;
       
    }
    void dfs(Node* root)
    {
        if(root==NULL)
            return;
        result.push_back(root->val);
        for(auto c: root->children)
        {
            dfs(c);
        }
        
    }
};
int main()
{

	cout<<"hello world!"<<endl;
	return 0;
}
