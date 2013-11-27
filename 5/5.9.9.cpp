//Вводить слова до тех пор,пока не напишут quit.Надо еще удалить одинаковые слова,но я нашел в инете сложные очень варианты.Вообще знаю как сделать,но не в данном случае.
#include <iostream>
#include <string>
int main() {
	std::string stroke = "n";
	while (stroke != "quit") {
		std::cout << "Введите вашу строчку:";
		std::cin >> stroke;
		std::cout << stroke << "\n";
	}

}