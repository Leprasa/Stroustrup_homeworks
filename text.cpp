#include <iostream>
int main()
{
	int m[10]; 
	char s = 'a';
	char* p = &s;//указатель на массив(1 элемент)
	char* b = p;//указатель на указатель на массив
	const int i = 1;//константа
	int* d = i;//указатель на константу
	const int* d = i;//зачем нужен константный указатель?
}
