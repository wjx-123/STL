/*单链表*/
#pragma once
#include <iostream>

using namespace std;

//定义节点
struct SingleListNode 
{
	int data;
	SingleListNode* next;
	SingleListNode(int val, SingleListNode* ptr = nullptr);
};

class SingleList 
{
public:
	SingleListNode* dummy;
	SingleList();
	~SingleList();

public:

	void add(int);//插入节点头插法

	void remove(int);//删除节点

	SingleListNode* find(int);//找到某个元素

	int getLength();//返回链表长度

	bool ifLinkListEmpty();//判断是否是空链表
};