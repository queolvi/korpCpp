#include "Time.h"
College::mySecond::mySecond(int second = 1) : s(second) {
    if (second < 1 || second > 59) {
        throw std::invalid_argument("Error: Second must be between 1 and <= 59.. \n");
    }
};

int College::mySecond::getSecond() const { return s; }

College::mySecond::~mySecond() {};

College::myMinute::myMinute(int minute = 0) {
    if (minute < 0 || minute > 59 ) {
        throw std::invalid_argument("Error: Second must be between 0 and <= 59.. \n");
    }
}

int College::myMinute::getMinute() const { return m; }

College::myHour::myHour(int hour = 0) {
    if (hour < 0 || hour > 24 ) {
        throw std::invalid_argument("Error: Second must be between 0 and <= 24.. \n");
    }
}
int College::myHour::getHour() const { return h; }

College::myHour College::myHour::first() { return myHour(1); }
College::myHour College::myHour::second() { return myHour(2); }
College::myHour College::myHour::third() { return myHour(3); }
College::myHour College::myHour::fourth() { return myHour(4); }
College::myHour College::myHour::fiveth() { return myHour(5); }
College::myHour College::myHour::sixth() { return myHour(6); }
College::myHour College::myHour::seventh() { return myHour(7); }
College::myHour College::myHour::eighth() { return myHour(8); }
College::myHour College::myHour::nineth() { return myHour(9); }
College::myHour College::myHour::tenth() { return myHour(10); }
College::myHour College::myHour::eleventh() { return myHour(11); }
College::myHour College::myHour::twelveth() { return myHour(12); }
College::myHour College::myHour::thirteenth() { return myHour(13); }
College::myHour College::myHour::fourteenth() { return myHour(14); }
College::myHour College::myHour::fiveteenth() { return myHour(15); }
College::myHour College::myHour::sixteenth() { return myHour(16); }
College::myHour College::myHour::seventeenth() { return myHour(17); }
College::myHour College::myHour::eighteenth() { return myHour(18); }
College::myHour College::myHour::nineteenth() { return myHour(19); }
College::myHour College::myHour::twentienth() { return myHour(20); }
College::myHour College::myHour::twenty_first() { return myHour(21); }
College::myHour College::myHour::twenty_second() { return myHour(22); }
College::myHour College::myHour::twenty_third() { return myHour(23); }
College::myHour College::myHour::twenty_fourth() { return myHour(24); }

void College::myHour::dump(std::ostream& os) const {
    os << h;
}

explicit College::myTime::myTime(int s, int m, int h) : second_(s), minute_(m), hour_(h) {};

void College::myTime::dump(std::ostream &os) const {
    os << second_.getSecond() << ':';
    os << minute_.getMinute() << ':';
    hour_.dump(os);
}


std::ostream &College::operator<<(std::ostream os, const College::myTime &t) {
    t.dump(os);
    return os;
}

const College::myTime &College::myTime::addSeconds(int seconds) {
    second_ = mySecond(second_.getSecond() + seconds);
    return *this; 
}

const College::myTime &College::myTime::addMinutes(int minutes) {
    minute_ = myMinute(minute_.getMinute() + minutes);
    return *this;
}
const College::myTime &College::myTime::addHours(int hours) {
    hour_ = myHour(hour_.getHour() + hours);
    return *this;
}