#include<iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    void deleteNode(ListNode* node) {
	    node->val=node->next->val;
	    node->next=node->next->next;
    }
};
int main()
{
	ListNode(1) *p;
	cout<<p->val<<endl;
	

	cout<<"hello world!"<<endl;
	return 0;
}
