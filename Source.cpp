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
		std::cout << "������� ����� ������:";
		std::cin >> montNumber;
		if ( montNumber >= 13)
		{
			std::cout << "������������ �����!\n";
		}
		if (montNumber >= 1 && montNumber <= 12)
		{
			months Monts = static_cast<months>(montNumber);
				switch (Monts) 
				{
				case months::January: std::cout << "������\n"; break;
				case months::February: std::cout << "�������\n"; break;
				case months::March: std::cout << "����\n"; break;
				case months::April: std::cout << "������\n"; break;
				case months::May: std::cout << "���\n"; break;
				case months::June: std::cout << "����\n"; break;
				case months::July: std::cout << "����\n"; break;
				case months::August: std::cout << "������\n"; break;
				case months::September: std::cout << "��������\n"; break;
				case months::October: std::cout << "�������\n"; break;
				case months::November: std::cout << "������\n"; break;
				case months::December: std::cout << "�������\n"; break;
			
				}

		}
		
		

	} while (montNumber != 0);
	std::cout << "�� ��������!";

		return 0;
}