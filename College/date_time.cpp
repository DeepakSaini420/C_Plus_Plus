#include <iostream>
#include <vector>

using namespace std;

class Date{
    int day{0},month{0},year{0};
    public:
        Date(){
            cout << "Enter Date:- ";
            cin >> this->day;
            while (this->day>31)
            {
                cout << "Please Enter Date Less than 32."<<endl;
                cin >> this->day;
            }
            cout << "Enter Month:- ";
            cin >> this->month;
            while (this->month>12)
            {
                cout << "Please Enter Month Less than 13."<<endl;
                cin >> this->month;
            }
            cout << "Please Enter Year:- ";
            cin >> this->year;
        }
        void getDate(){
            cout << "Date:- " << this->day << "-"<< this->month <<"-"<<this->year<<endl;
        }

        virtual void printTime()=0;
        virtual int getMinutes()=0;

};

class Time:public Date{
    int hours{0};
    int minutes{0};
    public:
        Time(){
            cout << "Enter Hours:- ";
            cin >> this->hours;
            while (hours>24)
            {
                cout << "Please Enter Hours Less than or equal to 24:- ";
                cin >> hours;
            }
            cout << "Enter Minutes:- ";
            cin >> this->minutes;
            if(minutes>60){
                int min = this->minutes;
                while(min>60){
                    min = min-60;
                    this->hours +=1;
                }
                this->minutes = min;
            }
        }
        void printTime(){
            cout << "Time:- "<<this->hours << ":" << this->minutes<<endl;
        }
        int getMinutes(){
            return (this->hours*60)+this->minutes;
        }
};

int main(){
    Date *d = new Time();
    cout << endl;
    d->getDate();
    d->printTime();
    cout<<"Minutes:- "<< d->getMinutes()<< endl;; 
}
