#pragma once

#include "Array.hpp"
#include <cstddef>

template<typename T>
Array<T>::Array() : _size(0), _elements(NULL)
{
}

template<typename T>
Array<T>::Array(unsigned int n) : _size(n), _elements(new T[n]())
{
}

template<typename T>
Array<T>::Array(const Array<T>& other) : _size(other._size), _elements(new T[_size]())
{
	std::memmove(_elements, other._elements, _size * sizeof(T));
}

template<typename T>
Array<T> &Array<T>::operator=(const Array<T> &other) {
	if (this != &other) {
		delete [] _elements;
		_size = other._size;
		_elements = new T[_size]();
		std::memmove(_elements, other._elements, _size * sizeof(T));
	}
	return *this;
}

template<typename T>
T &Array<T>::operator[](unsigned int n)
{
	if (n >= _size)
		throw IndexOutOfBoundsException();
	return _elements[n];
}

template<typename T>
const T &Array<T>::operator[](unsigned int n) const
{
	if (n >= _size)
		throw IndexOutOfBoundsException();
	return _elements[n];
}

template<typename T>
const char *Array<T>::IndexOutOfBoundsException::what() const throw()
{
	return "index out of bounds";
}

template<typename T>
Array<T>::~Array()
{
	delete [] _elements;
}

template<typename T>
unsigned int Array<T>::size() const
{
	return _size;
}
