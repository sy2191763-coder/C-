#include<iostream>
using namespace std;

class Time {
public:
    int hours, minutes, seconds;

    void input() {
        cin >> hours >> minutes >> seconds;
    }

    void add(Time t1, Time t2) {
        seconds = t1.seconds + t2.seconds;
        minutes = t1.minutes + t2.minutes;
        hours = t1.hours + t2.hours;

        if (seconds >= 60) {
            seconds -= 60;
            minutes++;
        }

        if (minutes >= 60) {
            minutes -= 60;
            hours++;
        }
    }

    void display() {
        cout << hours << ":" << minutes << ":" << seconds;
    }
};

int main() {
    Time t1, t2, result;

    cout << "Enter first time (HH MM SS): ";
    t1.input();

    cout << "Enter second time (HH MM SS): ";
    t2.input();

    result.add(t1, t2);

    cout << "Sum of time = ";
    result.display();


}
