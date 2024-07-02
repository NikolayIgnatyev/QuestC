#include <string>
#include "../Transports/Transport.cpp"

using namespace std;

class Bike : public Transport{
public:
	float valueMotor;
	Bike() {
		name = "Мотоцикл";
		maxSpeed = 55;
		countWeels = 2;
		valueMotor = 49.5;
	}

	void print() {
		Transport::print();
		std::cout << "Объем двигателя: " << valueMotor << " см3" << std::endl;
	}
};
