// Case1.cpp: определяет точку входа для приложения.
//

#include "Case1.h"
#include "Transports/Bike.cpp"
#include "Transports/Scooter.cpp"
#include "Transports/Auto.cpp"
#include "Transports/Bus.cpp"

using namespace std;

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "");
	for (int i{1}; i < argc; i++)
	{
		switch (*argv[i])
		{
		case '0':
		{
			Bike bike;
			bike.print();
			std::cout << "--------------------------------------------" << std::endl;
			std::cout << "" << std::endl;
			break;
		}
		case '1':
		{
			Scooter scooter;
			scooter.print();
			std::cout << "--------------------------------------------" << std::endl;
			std::cout << "" << std::endl;
			break;
		}
		case '2':
		{
			Auto automobil;
			automobil.print();
			std::cout << "--------------------------------------------" << std::endl;
			std::cout << "" << std::endl;
			break;
		}
		case '3': 
		{
			Bus bus;
			bus.print();
			std::cout << "--------------------------------------------" << std::endl;
			std::cout << "" << std::endl;
			break;
		}
		default:
			std::cout << "НЕИЗВЕСТНЫЙ ТИП ТРАСНПОРТА" << std::endl;
			std::cout << "--------------------------------------------" << std::endl;
			std::cout << "" << std::endl;
			break;
		}
	}
	return 0;
}


