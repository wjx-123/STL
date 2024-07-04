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
	void add(int);//头插法
	void remove(int);
	SingleListNode* find(int);
};