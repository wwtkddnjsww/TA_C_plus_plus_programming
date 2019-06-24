#include <iostream>

using namespace std;

void swap_by_value		(int  a, int  b);
void swap_by_pointer	(int* a, int* b);
void swap_by_reference	(int& a, int& b);
void custom_print		(int orange, int grape);

int main() {
	
	int orange = 1000;
	int grape = 3000;
	
	cout << "�ٲٱ� ��" << endl;
	custom_print(orange, grape);

	cout << "value�� �ٲ� ��" << endl;
	swap_by_value(orange, grape);
	custom_print(orange, grape);

	cout << "�����ͷ� �ٲ� ��" << endl;
	swap_by_pointer(&orange, &grape);
	custom_print(orange, grape);

	cout << "���������� �ٲ� ��" << endl;
	swap_by_reference(orange, grape);
	custom_print(orange, grape);

}
void swap_by_value(int a, int b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void swap_by_pointer(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b= temp;
}

void swap_by_reference(int& a, int& b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void custom_print(int orange, int grape) {
	cout << "	������  = " << orange << endl;
	cout << "	���� = " << grape << endl << endl;

}