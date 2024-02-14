#include <iostream>
#include <cstring>
#include<windows.h>
#include<fstream>
#include<string>
#include<cstdlib>
#include<ctime>


 
enum class months 
{
 January = 1 ,February, March, April,May, June,July,August, September, October, November, December
};
int main()
{
	setlocale(LC_ALL, "Russian");

	int montNumber;
	
	do {
		std::cout << "Введите номер месяца:";
		std::cin >> montNumber;
		if ( montNumber >= 13)
		{
			std::cout << "Неправильный номер!\n";
		}
		if (montNumber >= 1 && montNumber <= 12)
		{
			months Monts = static_cast<months>(montNumber);
				switch (Monts) 
				{
				case months::January: std::cout << "Января\n"; break;
				case months::February: std::cout << "Февраль\n"; break;
				case months::March: std::cout << "Март\n"; break;
				case months::April: std::cout << "Апрель\n"; break;
				case months::May: std::cout << "Май\n"; break;
				case months::June: std::cout << "Июнь\n"; break;
				case months::July: std::cout << "Июль\n"; break;
				case months::August: std::cout << "Август\n"; break;
				case months::September: std::cout << "Сентябрь\n"; break;
				case months::October: std::cout << "Октябрь\n"; break;
				case months::November: std::cout << "Ноябрь\n"; break;
				case months::December: std::cout << "Декабрь\n"; break;
			
				}

		}
		
		

	} while (montNumber != 0);
	std::cout << "До свидания!";

		return 0;
}