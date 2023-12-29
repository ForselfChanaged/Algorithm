#include "LinkList.h"
#include<stdio.h>
LinkList::LinkList()
{
	head = new ListNode(0, nullptr);
	size = 0;
}
/// <summary>
/// 获取指定索引值，若索引无效返回-1
/// </summary>
/// <param name="index"></param>
/// <returns></returns>
int LinkList::get(int index)
{
	if (index < 0) return -1;
	ListNode* cur = head->next;
	while (index--)
	{
		if (cur->next == NULL) return-1;
		cur = cur->next;
	}
	return cur->val;
}

void LinkList::addAtHead(int val)
{
	ListNode* newHead = new ListNode(val);
	newHead->next = head->next;
	head->next = newHead;
	size++;
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
	size++;
}
void LinkList::addAtIndex(int index, int val)
{
	if (index < 0) {
		addAtHead(val);
		return;
	}
	if (index == size)
	{
		addAtTail(val);
		return;
	}
	if (index > size)
	{
		printf("非法索引");
		return;
	}
	ListNode* node = new ListNode(val);
	ListNode* cur = head;
	while (index--)
	{
		cur = cur->next;
	}
	node->next = cur->next;
	cur->next = node;
	size++;
}
void LinkList::delteAtIndex(int index)
{
	if (index >= size || index < 0)return;
	ListNode* cur = head;
	while (index--)
	{
		cur = cur->next;
	}
	ListNode* tmp = cur->next;
	cur->next = cur->next->next;
	delete tmp;
	tmp = nullptr;
	size--;
	return;
}
void LinkList::DeleteVal(int val)
{
	ListNode* cur = head;
	while (cur->next != NULL)
	{
		if (cur->next->val == val)
		{
			ListNode* tmp = cur->next;
			cur->next = cur->next->next;
			delete tmp;
			size--;
		}
		else {
			cur = cur->next;
		}
	}
}
void LinkList::Print()
{
	ListNode* cur = head;
	while (cur->next != NULL)
	{
		printf(" %d ", cur->next->val);
		cur = cur->next;

	}
	printf("\n");
}

void LinkList::reverseLink(LinkList list)
{
	

}
