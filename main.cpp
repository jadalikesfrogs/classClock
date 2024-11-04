/* Class example of a clock*/
#include <iostream>
#include <iomanip>

using namespace std;

class Clock {
public:  // anybody who uses this class can plays with these numbers
	// doing this in minutes 
	int minute; // the current minute
	int minutesPerDay; // e.g 1440 on Earth
/*advances the clock by one minute. minute is advanced by the modulo the minutesPerDay*/
	void tick();
	//displays time in HH:mm style
	void printTime();
};
 /* These functions exclusively belong to instances of the clock. You need all 3 pieces of info (clock, functionType (void), functionName (tick)*/

int main() {
	Clock earth; 
	earth.minute = 9 * 60 + 23;
	earth.minutesPerDay = 1440;
	earth.printTime();
	cout << endl;
	earth.tick();
	earth.printTime();
	cout << endl;

}
void Clock::tick() { // inside the scope of clock. this function belongs to CLOCK
	minute++;
	minute %= minutesPerDay;
}
void Clock::printTime() {
	cout << setw(2) << setfill('0') << (minute / 60);
	cout << ":";
	cout << setw(2) << setfill('0') << (minute % 60);

}
