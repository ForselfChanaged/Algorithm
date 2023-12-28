#include "LinkList.h"
#include<stdio.h>
/// <summary>
/// 获取指定索引值，若索引无效返回-1
/// </summary>
/// <param name="index"></param>
/// <returns></returns>
int LinkList::get(int index)
{
	if (index < 0) return -1;
	ListNode* cur = head;
	while (index--)
	{
		if (cur->next == NULL) return-1;
		cur = cur->next;
	}
	return cur->val;
}

void LinkList::addAtHead(int val)
{
	ListNode* newHead = new ListNode(val, head);
	head = newHead;
}
void LinkList::addAtTail(int val)
{
	ListNode* tail = head;
	while (tail->next != NULL)
	{
		tail = tail->next;
	}
	ListNode* newTail = new ListNode(val, nullptr);
	tail->next = newTail;
}
void LinkList::addAtIndex(int index, int val)
{
	if (index <=0) {
		addAtHead(val);
		return;
	}
	ListNode* node = new ListNode(val);
	ListNode* cur = head;
	while (--index)
	{
		cur = cur->next;
	}
	node->next = cur->next;
	cur->next = node;
}
void LinkList::DeleteVal(int val)
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
}
void LinkList::Print()
{
	ListNode* cur = head;
	while (cur != NULL)
	{
		printf(" %d ", cur->val);
		cur = cur->next;

	}
	printf("\n");
}
