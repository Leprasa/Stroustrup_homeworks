
//запишите в массив строк месяцы и выведите их
#include <iostream>
int main() {
	char s[12] = {"Jan", "Feb", "Mar", "Apr", "May", "June", "July", "Aug", "Sep", "Oct", "Nov", "Dec"};
	for(int i = 0; i < 12; i ++) {
		std::cout << s[i] << "\n";
	}
 }

