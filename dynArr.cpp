#include "dynArr.h"

using namespace mtl;

template <class T> void DynamicArray<T>::expand() {
	sz *= 2;
	T* oldPtr = ptr;
	ptr = new T[sz];

	//Allocation error
	if (ptr == nullptr)
		throw std::exception();

	for (int i = 0; i < sz; i++)
		ptr[i] = oldPtr[i];

	delete[] oldPtr;
}

template <class T> void DynamicArray<T>::push(T val) {
	if (idx < sz - 1)
		expand();

	ptr[idx] = val;
	idx++;
}

template <class T> T DynamicArray<T>::pop() {
	idx--;
	return ptr[idx];
}

template <class T> void DynamicArray<T>::insert(T val, int i) {
	if (idx > sz - 1)
		expand();

	idx++;
	for (int j = idx; j > i; j--) {
		ptr[j+1] = ptr[j];
	}

	ptr[i] = val;
}