/* Class example of a clock*/
#include <iostream>
#include <iomanip>

using namespace std;

class Clock {
private:  // anybody who uses this class can plays with these numbers
	// private is when only things inside the class can mess with it 
	// protected this class and any derived class
	// doing this in minutes 
	int minute; // the current minute
	int minutesPerDay; // e.g 1440 on Earth

public:
	//constructors
	/*minutes per will be 1440, minute will be 0*/
	Clock(); // no params, default constructor
	
	// minutes per day will be mpd, minute will be 0
	Clock(int mpd);

	//minutes per day, and minutes both = 0
	Clock(int mpd, int m);

	// returns the raw minutes
	int getMinute();

	int getMinutesPerDay();

	void setMinute(int m);
	void setMinutesPerDay(int mpd);
	/*advances the clock by one minute. minute is advanced by the modulo the minutesPerDay*/
	void tick();
	//displays time in HH:mm style
	void printTime();

	// accessor - lets us access selected data
	//mutators - lets us change the data

};
 /* These functions exclusively belong to instances of the clock. You need all 3 pieces of info (clock, functionType (void), functionName (tick)*/

int main() {
	Clock earth; 
	earth.setMinute(9 * 60 + 23);
	earth.setMinutesPerDay(1440);
//earth.minute = 9 * 60 + 23; // 9:23AM
//earth.minutesPerDay = 1440; // cant print these anymore bc minutes and minutesperday are private.
	earth.printTime();
	cout << " raw minutes: " << earth.getMinute() << endl;
	cout << endl;
	earth.tick();
	earth.printTime();
	cout << endl;

}
int Clock::getMinute() {
	return minute;
}

int Clock::getMinutesPerDay()
{
	return minutesPerDay;
}

void Clock::setMinute(int m)
{
	minute = m;
}

void Clock::setMinutesPerDay(int mpd)
{
	minutesPerDay = mpd;
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
