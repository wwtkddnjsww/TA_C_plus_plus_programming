#include <iostream>
#include "tv.h"

bool Tv::volume_up() {
	if (volume < MAX_VOLUME) {
		volume++;
		return true;
	}
	else return false;
}

bool Tv::volume_down() {
	if (volume > MIN_VOLUME) {
		volume--;
		return true;
	}
	else return false;
}

void Tv::channel_up() {
	if (channel < max_channel) channel++;
	else channel = 1;
}

void Tv::channel_down() {
	if (channel > 1) channel--;
	else channel = max_channel;
}

void Tv::settings() const {
	using std::cout;
	using std::endl;

	cout << "TV = " << (on ? "ON" : "OFF") << endl; 
	//3�׿����� ( ���� ?  1 : 2 ) ������ true�϶� 1, ������ false �϶� 2
	if (on) {
		cout << "���� = " << volume << endl;
		cout << "ä�� = " << channel << endl;
		cout << "��� = " << (mode == ANTENNA ? "�����Ĺ��" : "���̺� ���") << endl;
		cout << "�Է� = " << (input == TV ? "TV" : "DVD") << endl;
	}
}



