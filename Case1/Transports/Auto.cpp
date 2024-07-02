#include <string>
#include "../Transports/Transport.cpp"
#include "../TypesKPP.cpp"

using namespace std;

class Auto : public Transport {
public:
	TypeKPP typeKPP;
	Auto() {
		name = "Автомобиль";
		maxSpeed = 100;
		countWeels = 4;
		typeKPP = TypeKPP::Automatic;
	}
	void print() {
		Transport::print();
		std::cout << "Тип КПП: ";
		if (typeKPP == TypeKPP::Automatic) {
			std::cout << "Автоматическая" << std::endl;
		}
		else if(typeKPP == TypeKPP::Mechanic){
			std::cout << "Механическая" << std::endl;
		}
		else {
			std::cout << "Неизвестно" << std::endl;
		}
	}
};