#pragma once
class Tv {
private:
	bool on;
	int volume;
	int max_channel;
	int channel;
	int mode;
	int input;

public:
	friend class Remote;					//friend class�� private, public, protected �� �ƹ����� �ξ �������.
	enum { MIN_VOLUME, MAX_VOLUME = 20 };	//enum�� ������, ���ڸ� 1���� �ϳ��� ��ȣ �Űܼ� ��� #define �� ���.
											// MIN_VOLUME = 1, MAX_VOLUME = 20
	enum { ANTENNA, CABLE };				// ANTENNA = 1, CABLE = 2
	enum { TV, DVD };						// TV = 1, DVD = 2 

	Tv(bool on = false, int max_channel = 125)
		: on(on), volume(0), max_channel(max_channel),
		channel(1), mode(CABLE), input(TV) {}

	void onoff() { on = !on; }
	bool is_on() const { return on; }
	bool volume_up();
	bool volume_down();
	void channel_up();
	void channel_down();
	void toggle_mode() { mode ^= 1; } // ^ == XOR����
	void toggle_input() { input ^= 1; }
	void settings() const;
};