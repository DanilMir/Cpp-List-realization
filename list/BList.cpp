//
// Created by Danil Mirgayazov on 004 04.04.21.
//

#include "BList.h"

BList::BList()
{
	_data = new int[0];
	_size = 0;
}

BList::BList(int* data, int size)
{
	arrayCopy(data, size);
	_size = size;
}

void BList::arrayCopy(int* data, int size)
{
	int* tempData = new int[size];
	for (int i = 0; i < size; ++i) {
		tempData[i] = data[i];
	}
	delete _data;
	_data = tempData;
}

void BList::arrayResize(int* data, int size)
{
	int* tempData = new int[size];
	int iterSize = _size > size ? size : _size;
	for (size_t i = 0; i < iterSize; i++)
	{
		tempData[i] = data[i];
	}
	delete _data;
	_data = tempData;
}

int& BList::operator[](size_t j)
{
	return *(_data + j);
}

void BList::Add(int item)
{
	_size++;
	arrayResize(_data, _size);
	_data[_size - 1] = item;
}

void BList::Remove()
{
	_size = _size > 0 ? _size - 1 : 0;
	arrayResize(_data, _size);
}

int BList::IndexOf(int item)
{
	for (size_t i = 0; i < _size; i++)
	{
		if (_data[i] == item)
		{
			return i;
		}
	}

	return -1;
}

int BList::Size()
{
	return _size;
}

BList::~BList()
{
	delete _data;
}

//template <typename T>
//int BList<T>::Size() {
//    return _size;
//}
