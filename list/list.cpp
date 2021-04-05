#include <iostream>
#include <string.h>
#include "BList.h"

using namespace std;

int main()
{
	int a[4]{ 1,2,3,4 };

	BList<int> array(a, 4);

	array.push_back(1);
	array.push_back(123);
	array.push_back(34);
	array.push_back(231);
	array.push_back(223);


	
	for (size_t i = 0; i < array.size(); i++)
	{
		cout << array[i] << ' ';
	}
	cout << '\n';
}
