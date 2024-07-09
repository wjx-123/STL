#include "LinkList.h"
#include "doubleLinkList.h"

using namespace std;

int main() 
{
	/*SingleList singleList;
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
	std::cout << "" << std::endl;*/

	DoubleLinkList list;
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
	return 0;
}