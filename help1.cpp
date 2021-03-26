#include <bits/stdc++.h>
using namespace std;

class Complex
{
    private:
      float real;
      float imag;
    public:
       Complex(): real(0), imag(0){ }
       void input()
       {
           
           cin >> real;
           cin >> imag;
       }

       // Operator overloading
       Complex operator + (Complex c2)
       {
           Complex temp;
           temp.real = real + c2.real;
           temp.imag = imag + c2.imag;

           return temp;
       }

       void output()
       {
           if(imag < 0)
               cout<<real<<"-i"<<imag;
           else
               cout << real << "+i" << imag;
       }
};
int main()
{
    Complex c1,c2,c3;
    c1.input();
    c2.input();
    c3=c1+c2;
    c3.output();
    return 0;
}
