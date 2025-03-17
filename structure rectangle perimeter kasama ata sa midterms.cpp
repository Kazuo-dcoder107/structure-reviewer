#include <iostream>
using namespace std;

struct Rectangle{
  int length;
  int width;
};
int calculatePerimeter(Rectangle r){
     return 2*(r.length + r.width);
}
int main(){
    Rectangle r;
    cout<<"Enter length: ";
    cin>>r.length;
    cout<<"Enter width: ";
    cin>>r.width;
   int perimeter =calculatePerimeter(r);
    cout<<"Perimeter: "<<perimeter;
    
    return 0;
}
