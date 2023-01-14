#include "../structs/test/test.h"


int main()
{
	int size = 2;
	Test** test = new Test * [size];
		test[0] = new Test();
		test[1] = new Test();

	delete [] test;
	return 0;
}