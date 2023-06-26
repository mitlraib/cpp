
#include<iostream>
#include<string>

using namespace std;

class Car {
private:
	string _owner;
	int _licencePlate;
	double _price;
public:
	string getOwner() const { return this->_owner; }
	int getLicencePlate() const { return this->_licencePlate; }
	double getPrice() const { return this->_price; }


	void setOwner(string ow) { this->_owner = ow; }
	void setLicencePlate(int li) { this->_licencePlate = li; }
	void setPrice(double pr) { this->_price = pr; }


	void printCar() const {
		cout << "Car details : ";
		cout << "(Owner:" << this->getOwner() << ", Licence Plate:" << this->getLicencePlate() << ", Price:" << this->getPrice() << ")" << endl;
	}

	Car() {
		cout << "Called my default constructor" << endl;
		this->setLicencePlate(6749817);
		this->setOwner("yehoram gaon");
		this->setPrice(50.3);
	}


	Car(string ow, int li, double pr) {
		cout << "Called constructor with all parameters" << endl;
		this->setOwner(ow);
		this->setLicencePlate(li);
		this->setPrice(pr);
	}

	Car(int li) {
		cout << "Called constructor with all parameters" << endl;
		this->setOwner("Eliaho Anavim");
		this->setLicencePlate(li);
		this->setPrice(642.5);
	}

	~Car() {
		cout << "Car destroyed" << endl;

	}

};

	void main() {
		Car c1;
		Car c2(567567);
		Car c3("Eliaho Anavim", 678678, 545.4);
		c1.printCar();
		c2.printCar();
		c3.printCar();
		Car c4(c3);//copy constructor
		c4.printCar();
	}

	// thank you :)