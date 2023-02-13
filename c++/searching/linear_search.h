#pragma once

template<typename T>
bool linear_search(const T* arr, T value, unsigned int size)
{
	for (int i = 0; i < size; i++)
		if (arr[i] == value)
			return true;
	return false;
}