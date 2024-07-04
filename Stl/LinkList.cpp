#include "LinkList.h"

SingleListNode::SingleListNode(int val, SingleListNode* ptr) : data(val),next(ptr)
{
}

SingleList::SingleList() : dummy(new SingleListNode(-1))
{
}

SingleList::~SingleList()
{
	auto ptr = dummy->next;
	while (ptr)
	{
		auto temp = ptr;
		ptr = ptr->next;
		delete temp;
		std::cout << "Element deleted" << std::endl;
	}
	delete dummy;
	std::cout << "SingleList deleted" << std::endl;
}

void SingleList::add(int val)
{
	auto ptr = find(val);
	if (ptr)//非空
	{
		std::cerr << val << " exists,add failed!" << std::endl;
		return;
	}
	else 
	{
		auto temp = new SingleListNode(val);//从堆区创一个新节点，赋值为val
		temp->next = dummy->next;
		dummy->next = temp;
		std::cout << "Element add " << std::endl;
	}
}

void SingleList::remove(int val)
{
	auto ptr = find(val);
	if (ptr == nullptr)
	{
		std::cerr << val << "does not exist,remove failed!" << std::endl;
		return;
	}
	else 
	{
		auto temp = ptr->next;
		ptr->next = ptr->next->next;
		delete temp;
	}
}

SingleListNode* SingleList::find(int val)
{
	auto prev = dummy;
	auto temp = dummy->next;
	while (temp)//非空
	{
		if (temp->data == val) 
		{
			return prev;
		}
		prev = prev->next;
		temp = temp->next;
	}
	return nullptr;
}

int SingleList::getLength()
{
	int result = 0;
	auto ptr = dummy;
	while (ptr->next != nullptr)
	{
		result++;
		ptr = ptr->next;
	}
	return result;
}

bool SingleList::ifLinkListEmpty()
{
	if (dummy->next != nullptr)
	{
		return false;
	}
	return true;
}

/*
* test:
* SingleList singleList;
	cout << singleList.ifLinkListEmpty() << endl;
	singleList.add(0);
	singleList.add(1);
	singleList.add(2);
	singleList.add(3);
	cout << singleList.ifLinkListEmpty() << endl;
	singleList.add(3);
	std::cout << "length: " << singleList.getLength() << std::endl;
	singleList.remove(0);
	singleList.remove(2);
	singleList.remove(4);
	singleList.remove(5);
	for (auto temp = singleList.dummy->next; temp; temp = temp->next)
	{
		std::cout << temp->data << " ";
	}
	std::cout << "" << std::endl;
*/