#include <iostream>
#include "tv.h"
#include "remote.h"

int main() {
	using std::cout;
	using std::endl;
	
	Tv lg_tv;
	cout << "LG TV�� �ʱ� ������" << endl;
	lg_tv.settings();
	lg_tv.onoff();
	lg_tv.channel_up();

	cout << endl << "LG TV�� ����� ������" << endl;
	lg_tv.settings();

	Remote remote;

	remote.set_channel(lg_tv, 10);
	remote.volume_up(lg_tv);
	remote.volume_up(lg_tv);

	cout << endl << "������ ��� �� LG TV�� ������" << endl;
	lg_tv.settings();

	Tv samsung_tv(true);
	samsung_tv.toggle_mode();
	remote.set_channel(samsung_tv, 28);
	cout << endl << "Samsung TV�� ������" << endl;
	samsung_tv.settings();

	return 0;
}