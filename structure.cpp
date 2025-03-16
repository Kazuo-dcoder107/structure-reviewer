#include<iostream>
#include<string>
using namespace std;

struct hatdog {
    string brandname;
    int quantity;
    int est;
    bool masarap;
};

int main(){
   struct hatdog candidate1;
    cout<<"Enter BrandName: ";
    getline(cin,candidate1.brandname);
    cout<<"Enter Quantity: ";
    cin>>candidate1.quantity;
    cout<<"Enter the starting year: ";
    cin>>candidate1.est;
    cout<<"Taste test: ";
    cin>>candidate1.masarap;
    cout<<"Brandname: "<<candidate1.brandname<<endl;
    cout<<"Quantity: "<<candidate1.quantity<<endl;
    cout<<"Ever since the year: "<<candidate1.est<<endl;
    cout<<"Masarap ba? "<<candidate1.masarap<<endl;

    struct hatdog candidate2;
    cout<<"Enter BrandName: ";
    getline(cin,candidate2.brandname);
    cout<<"Enter Quantity: ";
    cin>>candidate2.quantity;
    cout<<"Enter the starting year: ";
    cin>>candidate2.est;
    cout<<"Taste test: ";
    cin>>candidate2.masarap;
    cout<<"Brandname: "<<candidate2.brandname<<endl;
    cout<<"Quantity: "<<candidate2.quantity<<endl;
    cout<<"Ever since the year: "<<candidate2.est<<endl;
    cout<<"Masarap ba? "<<candidate2.masarap;
    return 0;

}