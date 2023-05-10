#include<iostream>
#include <cmath>
using namespace std;

int main(){

    int m1,m2,R1x,R1y,R1z,R2x,R2y,R2z;
    float F,P,Q;
    float G= 6.674e-11;
    cout<< "enter value \n";
    cin>> m1;
    cin>> m2;
    cin>> R1x;
    cin>> R1y;
    cin>> R1z;
    cin>> R2x;
    cin>> R2y;
    cin>> R2z;
    Q=((R1x-R2x)*(R1x-R2x)+(R1y-R2y)*(R1y-R2y)+(R1z-R2z)*(R1z-R2z));
    P= pow(Q,(3/2));
    F=(G*m1*m2)/P;
    cout<< "ans is " << F*(R1x-R2x)<<" i + "<< F*(R1y-R2y) << " j + "<< F*(R1z-R2z) << " k " << endl;
    return 0;
}
