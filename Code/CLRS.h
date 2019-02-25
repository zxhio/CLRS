// File:    CLRS.h
// Author:  definezxh@163.com
// Date:    2019/02/22 12:05:57

#ifndef CLRS_CLRS_H
#define CLRS_CLRS_H

#include <chrono>

inline uint64_t timestamp() {
    return std::chrono::duration_cast<std::chrono::microseconds>(
               std::chrono::high_resolution_clock::now().time_since_epoch())
        .count();
}

//===----------------------------------------------------------------------===//
// 2. Getiing Stared
//===----------------------------------------------------------------------===//

// 2.1
template <typename T> void InsertionSort(T Array[], int N);

#endif // CLRS_CLRS_H