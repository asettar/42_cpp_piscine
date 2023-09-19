#include "Point.hpp"

int main(){
	Point a(1.5f, 1.2f);
	Point b(2.1f, 3.8f);
	Point c(3.5, 0.9f);
	Point point(2.3f, 1.6f);
	std::cout << bsp(a, b, c, point) << std::endl;
}

