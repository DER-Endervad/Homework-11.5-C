#include "Figure.h"

Figure::Figure() {
	sides_count = 0;
	name = "������";
}

void Figure::get_sides_count() {
	std::cout << name << ": " << std::endl;
};