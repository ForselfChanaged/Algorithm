#include<stdio.h>
struct ListNode {
	int val;
	ListNode* next;
	ListNode() :val(0), next(nullptr) {};
	ListNode(int x) :val(x), next(nullptr) {};
	ListNode(int x, ListNode* next) :val(x), next(next) {};
};
class Link {
public:
	static ListNode* DeleteVal(ListNode* head, int val)
	{
		ListNode* vrNode = new ListNode(0, head);
		ListNode* cur = vrNode;
		while (cur->next != NULL)
		{
			if (cur->next->val == val)
			{
				ListNode* tmp = cur->next;
				cur->next = cur->next->next;
				delete tmp;
			}
			else {
				cur = cur->next;
			}
		}
		head = vrNode->next;
		delete vrNode;
		return head;
	}
	static void Print(ListNode* head)
	{
		ListNode* cur = head;
		while (cur != NULL)
		{
			printf(" %d ", cur->val);
			cur = cur->next;

		}
		printf("\n");
	}
};