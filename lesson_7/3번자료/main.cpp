#include "derived.h"

int main() {
	Derived d(44, "Larry", "Page");
	Base &r = d;    //����
	Base *p = &d;   //����
	cout << p->full_name() << endl;

	//Base b("Mark", "Zuckerberg");
	//Derived &r = b;   //������ ����
	//Derived *p = &b;  //������ ����
	//cout << r.full_name() << endl;
	//cout << p->get_age() << endl;
	
	return 0;
}