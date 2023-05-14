#include<iostream>
#include <cmath>
using namespace std;

float Force(){

    float m1,m2,R1x,R1y,R1z,R2x,R2y,R2z;
    float F,P,Q;
    float G= 6.674e-11;
    cout<< "enter value of mass of first point mass \n";
    cin>> m1;
    cout<< "enter value of mass of second point mass \n";
    cin>> m2;
    cout<< "enter value of position of x-component of first point mass \n";
    cin>> R1x;
    cout<< "enter value of position of y-component of first point mass \n";
    cin>> R1y;
    cout<< "enter value of position of z-component of first point mass \n";
    cin>> R1z;
    cout<< "enter value of position of x-component of first point mass \n";;
    cin>> R2x;
    cout<< "enter value of position of y-component of second point mass \n";
    cin>> R2y;
    cout<< "enter value of position of z-component of second point mass \n";
    cin>> R2z;
    Q=((R1x-R2x)*(R1x-R2x)+(R1y-R2y)*(R1y-R2y)+(R1z-R2z)*(R1z-R2z));
    P= pow(Q,(3/2));
    F=(G*m1*m2)/P;
    cout<< "ans is " << F*(R1x-R2x)<<" i + "<< F*(R1y-R2y) << " j + "<< F*(R1z-R2z) << " k " << endl;
    return 0;
}
int main(){
    Force();
    return 0;
}
