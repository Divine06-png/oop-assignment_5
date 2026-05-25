#include<iostream>
using namespace std;
struct Time{
    int hour;
    int minute;
    int second;

};
void printTime(Time t){
cout<< t.hour<<":"<<t.minute<<":"<<t.second<<endl;
}
int main(){
    Time lunchTime;
    Time dinnerTime = {18, 30, 0};
    Time *ptrTime = &lunchTime;

    lunchTime.hour=12;
    ptrTime->minute=30;
    (*ptrTime).second=20;

cout<<"Lunch will be held at ";
    printTime(lunchTime);

    cout<<"Dinner will be held at ";
    printTime(dinnerTime);
    return 0;

}