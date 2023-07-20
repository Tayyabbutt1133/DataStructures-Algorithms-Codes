#include "DLL.h"

int main()
{
	DLL obj;
	
	obj.insertSorted(15);
	obj.insertSorted(20);
	obj.insertSorted(100);
	obj.insertSorted(-3);
	obj.insertSorted(18);
	obj.insertAtHead(67);
	obj.insertAtTail(420);

	cout << obj.deleteValue(180) << endl;;
	
	cout << "DFH: " << endl;
	obj.displayFromHead();
	cout << endl << "DFT: " << endl;
	obj.displayFromTail();

	

	return 0;
}