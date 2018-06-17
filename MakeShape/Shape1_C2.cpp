#include<iostream>
using namespace std;
//							structured with redundancy
class Shape2 {
public:
	void top();
	void buttom();
	void plusLine();
	void stopLine();
	void hat();
	void egg();
	void stopSign();
	void eggPlus();
	void cup();
	void inversHat();
};


void Shape2::top()
{
	cout << "  ______" << endl;
	cout << " /      \\" << endl;
	cout << "/        \\" << endl;
}

void Shape2::buttom()
{
	cout << "\\        /" << endl;
	cout << " \\______/" << endl;
}

void Shape2::plusLine()
{
	cout << "+--------+" << endl;
}

void Shape2::stopLine()
{
	cout << "|  STOP  |" << endl;
}



void Shape2::hat()
{
	top();
	plusLine();
	cout << endl;
}

void Shape2::egg()
{
	top();
	buttom();
	cout << endl;
}

void Shape2::stopSign()
{
	top();
	stopLine();
	buttom();
	cout << endl;
}

void Shape2::eggPlus()
{
	top();
	plusLine();
	buttom();
	cout << endl;
}


void Shape2::cup()
{
	buttom();
	plusLine();
	cout << endl;
}


void Shape2::inversHat()
{
	plusLine();
	buttom();
}









/*
int main() {
	Shape2 test;
	test.hat();
	test.egg();
	test.stopSign();
	test.eggPlus();
	test.cup();
	test.inversHat();

system("PAUSE");
}

*/