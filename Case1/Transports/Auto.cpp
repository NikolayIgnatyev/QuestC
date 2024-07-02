#include <string>
#include "../Transports/Transport.cpp"
#include "../TypesKPP.cpp"

using namespace std;

class Auto : public Transport {
public:
	TypeKPP typeKPP;
	Auto() {
		name = "����������";
		maxSpeed = 100;
		countWeels = 4;
		typeKPP = TypeKPP::Automatic;
	}
	void print() {
		Transport::print();
		std::cout << "��� ���: ";
		if (typeKPP == TypeKPP::Automatic) {
			std::cout << "��������������" << std::endl;
		}
		else if(typeKPP == TypeKPP::Mechanic){
			std::cout << "������������" << std::endl;
		}
		else {
			std::cout << "����������" << std::endl;
		}
	}
};