#pragma once

#include <cstddef>

template<class T>
void iter(T* arr, std::size_t length, void (*iter_fn)(T&)) {
	for (std::size_t i = 0; i < length; i++) {
		iter_fn(arr[i]);
	}
}
