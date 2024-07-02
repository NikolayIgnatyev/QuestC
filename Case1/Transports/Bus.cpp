#include <string>
#include "../Transports/Transport.cpp"

using namespace std;

class Bus : public Transport {
public:
	bool isConductor;
	Bus() {
		name = "�������";
		maxSpeed = 60;
		countWeels = 6;
		isConductor = false;
	}

	void print() {
		Transport::print();
		std::cout << "������� ����������: ";
		if (isConductor) {
			std::cout << "����" << std::endl;
		}
		else {
			std::cout << "����������" << std::endl;
		}
	}
};