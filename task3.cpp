#include <iostream>
int main()
{
	void f()
	{
		inf jd[3];
		jd[1].month = 'september';
		jd[1].days = '30';
		jd[2].month = 'october';
		jd[2].days = '31';
		jd[3].month = 'november';
		jd[3].days = '31';
		std::cout << jd[1] << '\n' << jd[2] << '\n' << jd[3] << '\n'
	}
}