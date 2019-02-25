// File:    code.cpp
// Author:  definezxh@163.com
// Date:    2019/02/25 12:24:27

//===----------------------------------------------------------------------===//
// chapter 02 - Getting Started.
// Code of implementation.
//===----------------------------------------------------------------------===//

#include "../CLRS.h"

// insertion sort of ascending order.
template <typename T> void InsertionSort(T Array[], int N) {
    int i, j;
    T Key;
    for (i = 1; i < N; ++i) {
        Key = Array[i];
        for (j = i - 1; Array[j] > Key && j >= 0; --j)
            Array[j + 1] = Array[j];
        Array[j + 1] = Key;
    }
}

