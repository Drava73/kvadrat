#include <iostream>
using namespace std;
 
class Square{
public:
	void squ() {
		cout << "�������";
	}
};
class Circle {
public:
	void cir() {
		cout << "��y�";
	}
};
class CircleinSquare : public Square, public Circle {//������������� ������������



};


int main() {
	setlocale(LC_ALL, "ru");
	CircleinSquare obj;
	obj.cir();
	cout << " � ";
	obj.squ();
}