//Exercise 1a pg.378

#include<iostream>
#include<string>
using namespace std;

class TestClass
{
private:
	int testInt;
public:
	TestClass();
};

TestClass::TestClass()
{
	cout << "Constructing" << endl;
}

int main()
{

	TestClass testClass;

}