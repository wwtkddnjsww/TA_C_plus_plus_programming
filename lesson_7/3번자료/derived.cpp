#include "derived.h"

Derived::Derived(unsigned age, 
				const string &first_name,
				const string &last_name) : Base(first_name, last_name) {
	this->age = age;
	cout << "�Ļ�Ŭ���� �������Դϴ�." << endl;
}

Derived::Derived(unsigned age, const Base &base) : Base(base) {
	this->age = age;
	cout << "�Ļ�Ŭ���� �������Դϴ�." << endl;
}