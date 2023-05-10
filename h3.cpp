#include <iostream>
#include<cmath>
using namespace std;

 class CelestialBody{
     public:
        double mass;
        double radius;
        double density;
        double DistFromEarth;
        double G=6.674e-11;
    void EscapeVelocity(){
        double X=((2*G*mass)/(radius));
        double EV= pow(X,(0.5));
        cout << "The escape velocity is " << EV << endl;
    }
     };

  class Planet:public CelestialBody{
    public:
        double orbitalRad;
        int Moons;
        string ParentStar;
        string Atmosphere;
        double G=6.674e-11;
    void OrbitalVelocity(){
        double Y;
        Y=((G*mass)/(orbitalRad));
       double OV= pow(Y,(0.5));
        cout << "The orbital velocity is " << OV << endl;
    }
 };

 class star:public CelestialBody{
    public:
        double luminosity;
        double surfaceTemp;
        string color;

 };
int main(){
    string boolean;
    Planet p;
    cout << "enter value of mass of celestial body\n";
    cin >> p.mass;
    cout << "enter radius of celestial body\n" ;
    cin >> p.radius;
    cout << "enter orbital radius of planet\n" ;
    cin >> p.orbitalRad;
    p.EscapeVelocity();
    p.OrbitalVelocity();
    cout << "If you want to know some properties about Earth, type 'yes' \n";
    cin >> boolean;
    if( boolean == "yes"){
        cout << "Celestial body: Earth\n" << "Type: Planet\n" << "Parent star: Sun\n" << "Number of moons: 01\n" << "Atmosphere: Made of ozone\n" << "Orbital velocity: 29.8 km/s\n" <<
                 "Escape velocity: 11.2 km/s\n" << endl;
    }
    else{ cout << "NO Worries, Thank you\n" << endl;}
   return 0;

}
