
//заменить значения числа двумя способами(просто так и используя * c &)
#include <iostream>
int main() {
 int a = 1, b = 2, solo;
 solo = a;
 a = b;
 b = solo;
 std::cout<< a << " " << b<< "\n";
 int q = 2, w = 4;
 int *z;
 int *x;
 z = &q;
 x = &w;
 q = *x;
 w = *z;
 std::cout << q << " " << w << "\n";
}
