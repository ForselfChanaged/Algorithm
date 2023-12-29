struct ListNode {
	int val;
	ListNode* next;
	ListNode() :val(0), next(nullptr) {};
	ListNode(int x) :val(x), next(nullptr) {};
	ListNode(int x, ListNode* next) :val(x), next(next) {};
};
class LinkList
{
public:
	LinkList();
	int get(int index);
	void addAtHead(int val);
	void addAtTail(int val);
	void addAtIndex(int index, int val);
	void delteAtIndex(int index);
	void DeleteVal(int val);
	void Print();
	static void reverseLink(LinkList list);

private: ListNode* head;
private:int size;
};

