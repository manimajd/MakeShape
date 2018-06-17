#include<iostream>
using namespace std;
//									structured


class Shape {
public:
	void hat();
	void egg();
	void stopSign();
	void eggPlus();
	void cup();
};


void Shape::hat()
{
	cout << "  ______" << endl;
	cout <<" /      \\"<< endl;
	cout <<"/        \\"<< endl;
	cout <<"+--------+"<< endl;
	cout <<endl;
}

void Shape::egg()
{
	cout << "  ______" << endl;
	cout << " /      \\" << endl;
	cout << "/        \\" << endl;
	cout <<"\\        /"<< endl;
	cout <<" \\______/"<< endl;
	cout << endl;
}

void Shape::stopSign()
{
	cout << "  ______" << endl;
	cout << " /      \\" << endl;
	cout << "/        \\" << endl;
	cout <<"|  STOP  |"<< endl;
	cout << "\\        /" << endl;
	cout << " \\______/" << endl;
	cout << endl;
}

void Shape::eggPlus()
{
	cout << "  ______" << endl;
	cout << " /      \\" << endl;
	cout << "/        \\" << endl;
	cout <<"+--------+"<< endl;
	cout << "\\        /" << endl;
	cout << " \\______/" << endl;
	cout << endl;
}


void Shape::cup()
{
	cout << "\\        /" << endl;
	cout << " \\______/" << endl;
	cout << "+--------+" << endl;
	cout << endl;
}




/*
int main() {
	Shape test;
	test.hat();
	test.egg();
	test.stopSign();
	test.eggPlus();
	test.cup();
    test.stopSign();

	system("PAUSE");
}
*/
