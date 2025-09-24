#include "difference_of_squares.h"

#include<iostream>

namespace difference_of_squares {

// TODO: add your solution here

    int square_of_sum(int num){
        for (int i = num-1; i > -1; --i){
            std::cout << " " << num << " ";
            num = num + i;
        }
        return num*num;
    }

    int sum_of_squares(int num){
        int sum_of_squares = 0;
        for (int i = num; i > -1; --i){
            sum_of_squares = sum_of_squares + i*i;
        }
        return sum_of_squares;
    }

    int difference(int num){
        num = sum_of_squares(num) - square_of_sum(num);
        if (num < 0){
            num = num*-1;
        }
        return num;
    }

}  // namespace difference_of_squares
