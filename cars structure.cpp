#include<iostream>
#include<iomanip>
using namespace std;

struct Car{
    char make[50];
    char model[50];
    int year;
    float mileage;
};

int main(){
    Car c;
    cout<<"Enter car make: ";
    cin>>c.make;
    cout<<"Enter car model: ";
    cin>>c.model;
    cout<<"Enter year of manufacture: ";
    cin>>c.year;
    cout<<"Enter mileage (in miles): ";
    cin>>c.mileage;
    
    cout<<"\nCar Details: \n";
    cout<<"Make: "<<c.make<<endl;
    cout<<"Model: "<<c.model<<endl;
    cout<<"Year: "<<c.year<<endl;
    cout<<"Mileage: "<<fixed<<setprecision(2)<<c.mileage<<" miles";
    return 0;
}
