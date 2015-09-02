#include <iostream>
using namespace std;



class Pointers {
public:
	Pointers() {
		cout << "sets int value1 to 50" << endl;
		int value1 = 50;
		cout << "sets int value2 to 25" << endl;
		int value2 = 25;
		cout << "creates pointer ptr and sets adress to value1's address" << endl;
		int* ptr = &value1;

		cout << "value1:" << value1 << endl;
		cout << "value2:" << value2 << endl;
		cout << "ptr:" << *ptr << endl;

		cout << "changes ptr to adress of value2" << endl;
		ptr = &value2;

		cout << "value1:" << value1 << endl;
		cout << "value2:" << value2 << endl;
		cout << "ptr:" << *ptr << endl;
	}
};

int main() 
{
	Pointers();

	_sleep(-1);
	return 0;

}


