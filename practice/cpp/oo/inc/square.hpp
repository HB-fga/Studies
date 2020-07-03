#ifndef SQUARE_HPP
#define SQUARE_HPP

#include "square.hpp"

#include <iostream>

class Rectangle
{
    private:
        int a_side;
        int b_side;
    public:
        Rectangle();
        ~Rectangle();

        int calculate_area();

        void set_a_side(int a_side);
        int get_a_side();
        void set_b_side(int b_side);
        int get_b_side();
};

#endif