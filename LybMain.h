#pragma once
#include <iostream>
#include "Figure.h"
#include "Triangle.h"
#include "Right_triangle.h"
#include "Isosceles_triangle.h"
#include "Equilateral_triangle.h"
#include "Quadrangle.h"
#include "Rectangle_Q.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhombus.h"

class LybMain
{
public:
	void Triangle2(int l_a, int l_b, int l_c, int l_d, int a_a, int a_b);
    void Right_triangle2(int l_a, int l_b, int l_c, int l_d, int a_a);
    void Isosceles_triangle2(int l_a, int l_b, int l_c, int l_d);
    void Equilateral_triangle2(int l_a);
    void Quadrangle2(int l_a, int l_b, int l_c, int l_d, int a_a, int a_b, int a_c, int a_d);
    void Rectangle_Q2(int l_a, int l_b);
    void Square2(int l_a);
    void Parallelogram2(int l_a, int l_b, int l_c, int l_d);
    void Rhombus2(int l_a, int l_b, int l_c);
};
void print_info(Figure* figure);

