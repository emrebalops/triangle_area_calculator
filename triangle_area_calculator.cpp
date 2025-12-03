#include <iostream>
using namespace std;

double area(double base , double height){
return base * height / 2;
}
int main(){
double base;
double height;
cout << "Enter the base length: ";
cin >> base;
cout << "Enter the height: ";
cin >> height;
cout << "Area of the triangle: " << area(base , height);
return 0;
}


