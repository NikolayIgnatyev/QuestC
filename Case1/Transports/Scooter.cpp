#include <string>
#include "../Transports/Transport.cpp"

using namespace std;

class Scooter : public Transport{
public: 
	int currentValueAkb;
	Scooter() {
		name = "�������";
		maxSpeed = 25;
		countWeels = 2;
		currentValueAkb = 75;
	}
	void print() {
		Transport::print();
		std::cout << "����� �������: " << currentValueAkb << " %" << std::endl;
	}
};