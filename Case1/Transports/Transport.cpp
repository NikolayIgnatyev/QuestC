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
		std::cout << "������������ ����������: " << name << std::endl;
		std::cout << "���-�� �����: " << countWeels << std::endl;
		std::cout << "������������ ��������: " << maxSpeed << " ��/�" << std::endl;
	}
};