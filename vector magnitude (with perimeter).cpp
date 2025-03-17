#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

struct Vector{
  float x;
  float y;
  float z;
};

float calculateMagnitude(Vector v){
    return sqrt(pow(v.x, 2)+ pow(v.y, 2)+ pow(v.z, 2));
}
int main(){
    Vector v;
    cout<<"Enter x, y, z components of the vector \n";
    cout<<"Enter x: ";
    cin>>v.x;
    cout<<"Enter y: ";
    cin>>v.y;
    cout<<"Enter z: ";
    cin>>v.z;
    float magnitude = calculateMagnitude(v);
    cout<<"Magnitude: "<<fixed<<setprecision(2)<<magnitude;
    return 0;
}
