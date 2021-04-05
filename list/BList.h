#pragma once
class BList
{
public:
	BList();
	BList(int* data, int size);

	int& operator [] (size_t j);
	void Add(int item);
	void Remove();

	int IndexOf(int item);
	int Size();

	~BList();
private:
	void arrayCopy(int* data, int size);
	void arrayResize(int* data, int size);

private:
	unsigned _size;
	int* _data;
};
