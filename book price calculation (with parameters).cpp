#include<iostream>
#include<iomanip>
using namespace std;

struct Book {
  float price;
  int quantity;
};

float calculateTotalPrice(Book book){
    return book.price * book.quantity;
}
int main(){
    Book book;
    cout<<"Enter price: ";
    cin>>book.price;
    cout<<"Enter quantity: ";
    cin>>book.quantity;
    
    float presyo = calculateTotalPrice(book);
    cout<<"Total Price: "<<fixed<<setprecision(2)<<presyo;
    return 0;
    
}
