#pragma once

template <typename T>
class BList
{
public:
	BList()
	{
		_data = new int[0];
		_size = 0;
	}
	BList(T* data, int size)
	{
		arrayCopy(data, size);
		_size = size;
	}

	T& operator [] (size_t j)
	{
		return *(_data + j);
	}
	void push_back(T item)
	{
		_size++;
		arrayResize(_data, _size);
		_data[_size - 1] = item;
	}
	void pop_back()
	{
		_size = _size > 0 ? _size - 1 : 0;
		arrayResize(_data, _size);
	}
	void add_at(size_t index, T item)
	{
		if ((unsigned)index > _size)
			return;
		push_back(item);
		for (size_t i = _size - 1; i > index; i--)
		{
			swap(_data[i], _data[i - 1]);
		}
	}
	void remove_at(size_t index)
	{
		if ((unsigned)index > _size)
			return;
		for (size_t i = index; i < _size - 1; i++)
		{
			swap(_data[i], _data[i + 1]);
		}
		pop_back();
	}

	int index_of(T item)
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
	int size()
	{
		return _size;
	}

	~BList()
	{
		delete _data;
	}
private:
	void swap(T& t1, T& t2)
	{
		T temp = t1;
		t1 = t2;
		t2 = temp;
	}
	void arrayCopy(T* data, int size)
	{
		T* tempData = new T[size];
		for (int i = 0; i < size; ++i) {
			tempData[i] = data[i];
		}
		delete _data;
		_data = tempData;
	}
	void arrayResize(T* data, int size)
	{
		T* tempData = new T[size];
		int iterSize = _size > size ? size : _size;
		for (size_t i = 0; i < iterSize; i++)
		{
			tempData[i] = data[i];
		}
		delete _data;
		_data = tempData;
	}

private:
	unsigned _size;
	T* _data;
};
