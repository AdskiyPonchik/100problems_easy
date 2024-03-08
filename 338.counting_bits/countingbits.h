//
// Created by adskiyponchik on 3/8/24.
//
#include <vector>

#ifndef INC_100PROBLEMS_COUNTINGBITS_H
#define INC_100PROBLEMS_COUNTINGBITS_H

#endif //INC_100PROBLEMS_COUNTINGBITS_H

class Solution {
public:
    std::vector<int> countBits(int n) {
        std::vector<int> result(n + 1, 0);
        for (int i = 1; i <= n; ++i) {
            result[i] = result[i >> 1] + (i & 1);
        }
        return result;
    }
};