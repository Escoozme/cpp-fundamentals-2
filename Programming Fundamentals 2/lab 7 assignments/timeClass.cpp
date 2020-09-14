#include <iostream>
#include <ctime>

using namespace std;

class Time {
private:
    int hour, minute, second;

public:
    Time() {
        int totalSeconds = time(0);
        second = totalSeconds % 60;
        int totalMinutes = totalSeconds / 60;
        minute = totalMinutes % 60;
        int totalHours = totalMinutes / 60;
        hour = totalHours % 24;
    }

    Time(int time) {
        int totalSeconds = time;
        second = totalSeconds % 60;
        int totalMinutes = totalSeconds / 60;
        minute = totalMinutes % 60;
        int totalHours = totalMinutes / 60;
        hour = totalHours % 24;
    }

    Time(int newHour, int newMinute, int newSecond) {
        hour = newHour;
        minute = newMinute;
        second = newSecond;
    }

    int getHour() {
        return hour;
    }

    int getMinute() {
        return minute;
    }

    int getSecond() {
        return second;
    }

    void setTime(int elapseTime) {
        int newTime = 0;
        newTime += second;
        newTime += minute * 60;
        newTime += hour * 3600;
        newTime += elapseTime;

        int totalSeconds = newTime;
        second = totalSeconds % 60;
        int totalMinutes = totalSeconds / 60;
        minute = totalMinutes % 60;
        int totalHours = totalMinutes / 60;
        hour = totalHours % 24;
    }
};

int main() {
    Time time1;
    Time time2(555550);

    cout << time1.getHour() << ":" << time1.getMinute() << ":" << time1.getSecond() << endl;
    cout << time2.getHour() << ":" << time2.getMinute() << ":" << time2.getSecond() << endl;

    cout << endl << "Code by Jacob Smetana" << endl;
    return 0;
}
