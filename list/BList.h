#pragma once
class BList
{
public:
	BList();
	BList(int* data, int size);

	int& operator [] (size_t j);
	void push_back(int item);
	void pop_back();
	void add_at(size_t index, int item);
	void remove_at(size_t index);

	int index_of(int item);
	int size();

	~BList();
private:
	void swap(int& t1, int& t2);
	void arrayCopy(int* data, int size);
	void arrayResize(int* data, int size);

private:
	unsigned _size;
	int* _data;
};
