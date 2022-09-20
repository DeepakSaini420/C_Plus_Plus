#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

class CarVehicle{
    int Carcode{0};
    int CarPrice{0};
    int CarQuantity{0};
    public:
        void car(int carCode,int carPrice,int carQuantity){
            this->Carcode = carCode;
            this->CarPrice = carPrice;
            this->CarQuantity = carQuantity;
            fstream myFile("cars.txt",ios::app | ios::out );

            if(myFile.is_open()){
                myFile << "======================" <<endl;
                myFile << "Car Code:- "<<carCode <<endl;
                myFile << "Car Price:- "<<carPrice <<endl;
                myFile << "Car Quantity:- "<<carQuantity <<endl;
                myFile << "=======================" <<endl;
            }
        }
        int getCarCode(){
            return this->Carcode;
        }
        int getCarPrice(){
            return this->CarPrice;
        }
        int getCarQuantity(){
            return this->CarQuantity;
        }
        void addCar(vector<CarVehicle> car){
            CarVehicle c;
            int carCode,carPrice,carQuantity;
            cout << "Enter Car Code:- ";
            cin >> carCode;
            cout << "Enter Car Price:- ";
            cin >> carPrice;
            cout << "Enrer Car Quantity:- ";
            cin >> carQuantity;
            c.car(carCode,carPrice,carQuantity);
            car.push_back(c);
        }

        void printStocks(){
            cout << "Total Stock Value:- "<<this->CarPrice<<endl;
        }

        friend ostream& operator<<(ostream& o,CarVehicle c);
};

ostream& operator<<(ostream& o,CarVehicle c){
    o << "Car Code:- "<< c.getCarCode()<<endl;
    o << "Car Price:- "<< c.getCarPrice()<<endl;
    o << "Car Quantity:- "<< c.getCarQuantity()<<endl;
    return o;
}

int main(){
    int N{0};
    cout << "Enter Numbers of Cars You Want to add:- ";
    cin >> N;
    vector<CarVehicle> car(N);
    for(int i=0;i<N;i++){
        int carCode,carPrice,carQuantity;
        cout << "Enter Car Code:- ";
        cin >> carCode;
        cout << "Enter Car Price:- ";
        cin >> carPrice;
        cout << "Enrer Car Quantity:- ";
        cin >> carQuantity;
        car[i].car(carCode,carPrice,carQuantity);
    }
    cout << endl;
    for(int i=0;i<N;i++){
        cout << endl;
        cout << car[i];
        // car[i].printStocks();
    }
    return 0;
}