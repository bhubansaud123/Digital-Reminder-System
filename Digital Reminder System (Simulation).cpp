
#include <iostream>
using namespace std;

class Reminder {
    string task;
    int hour;
public:
    Reminder(string t, int h) : task(t), hour(h) {}

    void check(int currentHour) {
        if (currentHour == hour)
            cout << "⏰ Reminder: " << task << endl;
        else
            cout << "No reminder now.\n";
    }
};

int main() {
    Reminder r("Study OOP C++", 18);
    int current;
    cout << "Enter current hour (0-23): ";
    cin >> current;

    r.check(current);
    return 0;
}
