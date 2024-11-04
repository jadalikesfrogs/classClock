/* Class example of a clock*/
#include <iostream>
#include <iomanip>

using namespace std;

class Clock {
public:  // anybody who uses this class can plays with these numbers
	// doing this in minutes 
	int minute; // the current minute
	int minutesPerDay; // e.g 1440 on Earth
	void tick();
	void printTime();
};

void Clock::tick() { // inside the scope of clock. this function belongs to CLOCK
	minute++;
	minute %= minutesPerDay;
}
void Clock::printTime() {
	cout << setw(2) << setfill('0') << (minute / 60);
	cout << ":";
	cout << setw(2) << setfill('0') << (minute % 60);

}
int main() {


}