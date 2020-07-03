#include "square.hpp"

#include <iostream>

Rectangle::Rectangle()
{
    a_side = 0;
    b_side = 0;
}

Rectangle::~Rectangle()
{

}

int Rectangle::calculate_area()
{
    return this->a_side * this->b_side;
}

void  Rectangle::set_a_side(int a_side)
{
    this->a_side = a_side;
}
int Rectangle::get_a_side()
{
    return b_side;
}

void Rectangle::set_b_side(int b_side)
{
    this->b_side = b_side;
}
int Rectangle::get_b_side()
{
    return b_side;
}