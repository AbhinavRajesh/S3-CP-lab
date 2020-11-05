#include<iostream>
using namespace std;

struct Phone {
    int area_code, exchange, number;
} p1, p2;

int main() {
    p1.area_code = 212;
    p1.exchange = 767;
    p1.number = 8900;
    cout<<"\n Enter your area code, exchange and number :";
    cin>>p2.area_code>>p2.exchange>>p2.number;
    cout<<"\n My number is ("<<p1.area_code<<") "<<p1.exchange<<"-"<<p1.number;
    cout<<"\n Your number is ("<<p2.area_code<<") "<<p2.exchange<<"-"<<p2.number;
    return 0;
}