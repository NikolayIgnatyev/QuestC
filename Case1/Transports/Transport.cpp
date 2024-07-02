#include <string>
#include <iostream>
#pragma once
using namespace std;

class Transport {
public:
	string name{ "default" };
	int maxSpeed{ 5 };
	int countWeels{ 1 };

	void print() {
		std::cout << "Наименование транспорта: " << name << std::endl;
		std::cout << "Кол-во колес: " << countWeels << std::endl;
		std::cout << "Максимальная скорость: " << maxSpeed << " км/ч" << std::endl;
	}
};