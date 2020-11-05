#include<iostream>
#include<math.h>
using namespace std;

class Triangle {
    private: 
        float a, b, c; // Sides of the triangle
        int check;
    public:
        void init() {
            cout<<"\n Enter length of Side a=";
            cin>>a;
            cout<<"\n Enter length of Side b=";
            cin>>b;
            cout<<"\n Enter length of Side c=";
            cin>>c;
        }
        void validate() {
            int sum, lar;
            if ( a == 0 || b == 0 || c == 0) {
                cout<<"\n Triangle with the given sides is not possible to create";
                check = 0;
            } else {
                if ( a > b) {
                    if ( a > c) {
                        lar = a;
                        sum = b+c;
                    } else {
                        lar = c;
                        sum = a+b;
                    }
                } else {
                    if ( b > c) {
                        lar = b;
                        sum = a+c;
                    } else {
                        lar = c;
                        sum = a+b;
                    }
                }
                if ( lar >= sum ){
                    cout<<"\n Triangle with the given sides is not possible to create";
                    check = 0;    
                }
                else {
                    cout<<"\n Triangle with the given sides is valid";
                    check = 1;    
                }
            }
        }
        void sides() {
            if (check)
                cout<<"\n Sides of the triangle are: "<<a<<endl<<b<<endl<<c;
        }
        void area() {
            if (check) {
                float s = (a+b+c)/2;
                int area = sqrt(s*(s-a)*(s-b)*(s-c));
                cout<<"\n Area of the triangle: "<<area;
            }
        }
} triangle;

int main() {
    triangle.init();
    triangle.validate();
    triangle.sides();
    triangle.area();
    return 0;
}