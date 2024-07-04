#include "LinkList.h"

using namespace std;

int main() 
{
	SingleList singleList;
	singleList.add(0);
	singleList.add(1);
	singleList.add(2);
	singleList.add(3);
	singleList.add(3);
	singleList.remove(0);
	singleList.remove(2);
	singleList.remove(4);
	singleList.remove(5);
	for (auto temp = singleList.dummy->next; temp; temp = temp->next)
	{
		std::cout << temp->data << " ";
	}
	std::cout << "" << std::endl;
	return 0;
}