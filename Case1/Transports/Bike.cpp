#include <string>
#include "../Transports/Transport.cpp"

using namespace std;

class Bike : public Transport{
public:
	float valueMotor;
	Bike() {
		name = "��������";
		maxSpeed = 55;
		countWeels = 2;
		valueMotor = 49.5;
	}

	void print() {
		Transport::print();
		std::cout << "����� ���������: " << valueMotor << " ��3" << std::endl;
	}
};
