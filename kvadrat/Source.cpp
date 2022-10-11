#include <iostream>
using namespace std;
 
class Square{
public:
	void squ() {
		cout << "квадрат";
	}
};
class Circle {
public:
	void cir() {
		cout << "крyг";
	}
};
class CircleinSquare : public Square, public Circle {//множественное наследование



};


int main() {
	setlocale(LC_ALL, "ru");
	CircleinSquare obj;
	obj.cir();
	cout << " в ";
	obj.squ();
}