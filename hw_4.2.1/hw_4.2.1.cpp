#include <iostream>

enum class months {
	exit = 0,
	январь,
	февраль,
	март,
	апрель,
	май,
	июнь,
	июль,
	август,
	сентябрь,
	октябрь,
	ноябрь,
	декабрь
};

int main() {
	setlocale(LC_ALL, "Russian");
	int month_input;
	std::cout << "Введите номер месяца: ";
	std::cin >> month_input;

	do {
		if ((month_input >= static_cast<int>(months::январь)) && (month_input <= static_cast<int>(months::декабрь))) {
			std::cout << "Введите номер месяца: ";
			std::cin >> month_input;
		}
		if ((month_input > static_cast<int>(months::декабрь)) || (month_input < static_cast<int>(months::январь))) {
			std::cout << "Неверно! Введите номер месяца: ";
			std::cin >> month_input;
		}
	} while (month_input != static_cast<int>(months::exit));
	
	std::cout << "До свидания!";
}