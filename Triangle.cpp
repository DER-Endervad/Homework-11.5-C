#include "Triangle.h"

Triangle::Triangle(int l_a, int l_b, int l_c, int a_a, int a_b, int a_c) {
	if ((a_a + a_b + a_c) == 180) {
		sides_count = 3;
		name = "�����������";
		length_a = l_a;
		length_b = l_b;
		length_c = l_c;
		angel_a = a_a;
		angel_b = a_b;
		angel_c = a_c;
	}
	else {
		std::cout << "����� ����� � ������������ �� ����� 180." << std::endl;
	}
}

Triangle::Triangle(int l_a, int l_b, int l_c, int a_a, int a_b, int a_c, std::string name) {
	if ((a_a + a_b + a_c) == 180) {
		sides_count = 3;
		this->name = name;
		length_a = l_a;
		length_b = l_b;
		length_c = l_c;
		angel_a = a_a;
		angel_b = a_b;
		angel_c = a_c;
	}
	else {
		std::cout << "����� ����� � ������������ �� ����� 180." << std::endl;
	}
}

void Triangle::get_sides_count() {
	Figure::get_sides_count();
	std::cout << "�������: a=" << length_a << " b=" << length_b << " c=" << length_c << std::endl;
	std::cout << "����: A=" << angel_a << " B=" << angel_b << " C=" << angel_c << std::endl;
}
