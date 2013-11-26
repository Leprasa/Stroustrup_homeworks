//Напишите программу, которая печатает размеры фундаментальных типов.
#include <iostream>
int main()
{
	bool b;
	double d;
	char c;
	int a;
	std::cout << sizeof(a) << "\n" << sizeof(b) << "\n" << sizeof(c) << "\n" << sizeof(d) << "\n";
}