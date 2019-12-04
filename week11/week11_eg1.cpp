#include <iostream>

using namespace std;

class Animal;

const Animal operator+(const Animal& a, const Animal& b);

class Animal{
public:	
	Animal() {cout <<"Animal"<< endl;}
	friend const Animal& operator+(const Animal& a, const Animal& b);
	~Animal() {cout <<"~Animal"<< endl;}
};

class Dog : public Animal{
public:	
	Dog() {cout <<"Dog"<< endl;}
	const Animal& operator+(const Animal& a, const Animal& b);
	~Dog() {cout <<"~Dog"<< endl;}	
};

const Animal& operator+(const Animal& a, const Animal& b)
{
	return a;
}

int main(void){
	Dog d1, d2;
	d1 + d2;
	delete dog;
	return 0;
}
