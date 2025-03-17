#include<iostream>
using namespace std;

struct Point{
int x;
int y;
};

void displayPoint(Point p){
    cout<<"("<<p.x<<", "<<p.y<<")";
}
int main(){
    Point p;
    cout<<"Enter x: ";
    cin>>p.x;
    cout<<"Enter y: ";
    cin>>p.y;
    displayPoint(p);
    return 0;
}
