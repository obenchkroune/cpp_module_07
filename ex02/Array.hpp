#pragma once

#include <exception>
#include <cstring>

template<class T>
class Array
{
public:
	Array();
	Array(unsigned int n);
	Array(const Array &other);
	~Array();
	Array &operator=(const Array &other);
	T &operator[](unsigned int n);
	const T &operator[](unsigned int n) const;
	unsigned int size() const;

	/** Exceptions */
	class IndexOutOfBoundsException : public std::exception {
	public:
		const char *what() const throw();
	};
private:
	unsigned int _size;
	T* _elements;
};

#include "Array.tpp"
