#include<iostream>
using std::cout;
using std::endl;

class Time {
private:
    int hour, minute, second;
    
public:
    void setTime(int h, int m, int s) {
        hour = (h >= 0 && h < 24) ? h : 0;
        minute = (m >= 0 && m < 60) ? m : 0;
        second = (s >= 0 && s < 60) ? s : 0;
    }
    
    void printTime() {
        cout << (hour < 10 ? "0" : "") << hour << ":"
             << (minute < 10 ? "0" : "") << minute << ":"
             << (second < 10 ? "0" : "") << second;
    }
};

int main(){
    Time lunchTime;
    Time dinnerTime;
    
    lunchTime.setTime(12,30,20);
    dinnerTime.setTime(30,70,80);

    cout << "Lunch will be held at ";
    lunchTime.printTime();
    cout << endl;

    cout << "Dinner will be held at ";
    dinnerTime.printTime();
    cout << endl;
    
    return 0;
}