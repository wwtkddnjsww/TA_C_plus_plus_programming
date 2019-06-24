#include <iostream>
#include <string>
using namespace std;

template <typename T = int> // ����Ʈ �Ű����� ���ø����� ����
class integer_or_string {
private:
	T x;
	T y;

public:
	integer_or_string(T x, T y) : x(x), y(y) {} // ������
	T get_x() {
		return x;
	}
	T get_y() {
		return y;
	}
};

int main(void) {
	integer_or_string<> integer(10, 20);
	integer_or_string<string> char_string("orange", "grape");

	cout << integer.get_x() << ":" << integer.get_y() << endl;

	cout << char_string.get_x() << ":" << char_string.get_y() << endl;

}