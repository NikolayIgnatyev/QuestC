#include <string>
#include "../Transports/Transport.cpp"

using namespace std;

class Bus : public Transport {
public:
	bool isConductor;
	Bus() {
		name = "Автобус";
		maxSpeed = 60;
		countWeels = 6;
		isConductor = false;
	}

	void print() {
		Transport::print();
		std::cout << "Наличие кондуктора: ";
		if (isConductor) {
			std::cout << "Есть" << std::endl;
		}
		else {
			std::cout << "Отсутсвует" << std::endl;
		}
	}
};