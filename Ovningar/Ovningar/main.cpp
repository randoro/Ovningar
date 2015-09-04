#include <iostream>
// gör det endast för debug-läge
#ifdef _DEBUG
    #ifndef DBG_NEW
       #define DBG_NEW new (_NORMAL_BLOCK, __FILE__, __LINE__)
       #define new DBG_NEW
    #endif
#endif  // _DEBUG


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

class MinnesHantering 
{
public:
	MinnesHantering() 
	{
		int antal = 10;
		int nr = 1;
		int value = 0;

		int* intArray = new int[10];

		for (int i = 0; i < antal; i++)
		{
			cout << "Choose value nr. " << nr << endl;
			cin >> value;
			intArray[i] = value;
			nr++;
		}

		cout << "All " << antal << " values saved." << endl;

		cout << "Array { ";

		for (int i = 0; i < antal; i++)
		{
			cout << intArray[i] << ", ";
		}
		cout << "}" << endl;

		delete[] intArray;
		intArray = nullptr;

	}
};

int main() 
{

	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	MinnesHantering();
	int* dynArray = new int[5];

	_sleep(-1);
	return 0;

}


