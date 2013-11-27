//7.Определите таблицу, содержащую название месяцев и кол-во дней в каждом из них.
//Выведите содержимое таблицы.Воспользуйтесб массивом структур,каждая из которых 
//хранит назв. месяца и кол-во дней в нем. 
//
#include <iostream>

struct month {
	const char *name;
	int days;
};

int main()
{
	month year[5];

	year[0].name = "Jan";
	year[0].days = 31;

	year[1].name = "Feb";
	year[1].days = 30;

	year[2].name = "Mar";
	year[2].days = 31;

	year[3].name = "Apr";
	year[3].days = 30;

	year[4].name = "May";
	year[4].days = 31;

	for (int i = 0; i < 5; i++) {
		std::cout << year[i].name << " " << year[i].days << std::endl;
	}
}
