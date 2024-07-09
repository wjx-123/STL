#include "doubleLinkList.h"

DoubleLinkNode::DoubleLinkNode(int val) : data(val),prev(nullptr),next(nullptr)
{
}

DoubleLinkList::DoubleLinkList() : dummy(new DoubleLinkNode(-1))
{
	dummy->next = nullptr;
	dummy->prev = nullptr;
}

DoubleLinkList::~DoubleLinkList()
{
}

void DoubleLinkList::add(int val)
{
	auto ptr = find(val);
	if (ptr != nullptr)
	{
		std::cerr << val << "exists,add failed!" << std::endl;
	}
	else
	{
		auto temp = new DoubleLinkNode(val);
		temp->next = dummy->next;
		temp->prev = dummy;
		if (dummy->next != nullptr)
		{
			dummy->next->prev = temp;
		}
		dummy->next = temp;
	}
}

void DoubleLinkList::remove(int val)
{
	auto ptr = find(val);
	if (ptr == nullptr)
	{
		std::cerr << val << "doesnet exist,remove failed" << std::endl;
	}
	else
	{
		if (ptr->next != nullptr)
		{
			ptr->next->prev = ptr->prev;
		}
		ptr->prev->next = ptr->next;
		delete ptr;
	}
}

DoubleLinkNode* DoubleLinkList::find(int val)
{
	auto temp = dummy->next;
	while (temp != nullptr)
	{
		if (temp->data == val) 
		{
			return temp;
		}
		temp = temp->next;
	}
	return nullptr;
}

/*
* DoubleLinkList list;
	list.add(0);
	list.add(1);
	list.add(2);
	list.add(3);
	list.add(4);
	list.add(4);
	list.remove(0);
	list.remove(2);
	list.remove(4);
	list.remove(4);
	for (auto temp = list.dummy->next; temp; temp = temp->next)
		std::cout << temp->data << " ";
	std::cout << std::endl;
*/