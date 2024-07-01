// Case1.cpp: определяет точку входа для приложения.
//

#include "Case1.h"
#include "Transports/Bike.cpp"

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
			std::cout << "Наименование транспорта: " << bike.name << std::endl;
			std::cout << "Кол-во колес: " << bike.countWeels << std::endl;
			std::cout << "Максимальная скорость: " << bike.maxSpeed << std::endl;
			std::cout << "Объем двигателя: " << bike.valueMotor << std::endl;
			std::cout << "--------------------------------------------" << std::endl;
			std::cout << "" << std::endl;
			break;
		}
		case '2':
			std::cout << "case2" << std::endl;;
			break;
		default:
			std::cout << "НЕИЗВЕСТНЫЙ ТИП ТРАСНПОРТА" << std::endl;
			std::cout << "--------------------------------------------" << std::endl;
			std::cout << "" << std::endl;
			break;
		}
	}
	return 0;
}


