#include<iostream>
using namespace std;
int main(){
int a = 10; // a means dividend.
int b = 3; // b means divisor.
int q = a/b; // q means quotient.
int r; // r means remainder.
// int r = a -(b*q);
// a = (b * q )+ r; // Dividend = Divisor * Quotient + Remainder.
r = a -(b*q);
cout<<r; // Print the remainder.
// cout<<a%b;  // Dividend = Divisor * Quotient + Remainder. a = b *q +r.
}

