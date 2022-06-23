#include <iostream>

enum class months {
	jan = 1,
	feb,
	mar,
	apr,
	may,
	jun,
	jul,
	aug,
	sep,
	oct,
	nov,
	dec
};

int main() {
	setlocale(LC_ALL, "Russian");
	int month_input;
	std::cout << "Введите номер месяца: ";
	std::cin >> month_input;

	do {
			if ((month_input == static_cast<int>(months::jan))) {
				std::cout << "Январь" << std::endl;
			};
			if ((month_input == static_cast<int>(months::feb))) {
				std::cout << "Февраль" << std::endl;
			};
			if ((month_input == static_cast<int>(months::mar))) {
				std::cout << "Март" << std::endl;
			};
			if ((month_input == static_cast<int>(months::apr))) {
				std::cout << "Апрель" << std::endl;
			};
			if ((month_input == static_cast<int>(months::may))) {
				std::cout << "Май" << std::endl;
			};
			if ((month_input == static_cast<int>(months::jun))) {
				std::cout << "Июнь" << std::endl;
			};
			if ((month_input == static_cast<int>(months::jul))) {
				std::cout << "Июль" << std::endl;
			};
			if ((month_input == static_cast<int>(months::aug))) {
				std::cout << "Август" << std::endl;
			};
			if ((month_input == static_cast<int>(months::sep))) {
				std::cout << "Сентябрь" << std::endl;
			};
			if ((month_input == static_cast<int>(months::oct))) {
				std::cout << "Октябрь" << std::endl;
			};
			if ((month_input == static_cast<int>(months::nov))) {
				std::cout << "Ноябрь" << std::endl;
			};
			if ((month_input == static_cast<int>(months::dec))) {
				std::cout << "Декабрь" << std::endl;
			}
			std::cout << "Введите номер месяца: ";
			std::cin >> month_input;
		
		if ((month_input > static_cast<int>(months::dec)) || (month_input < static_cast<int>(months::jan))) {
			std::cout << "Неверно! Введите номер месяца: ";
			std::cin >> month_input;
		}
	} while (month_input != 0);
	
	std::cout << "До свидания!";
}
