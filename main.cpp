#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    const float g=9.81;
    float Xoo=0,Voo=0,alpha_oo=0,t=0,Hoo=0;
    float Xto= Xoo +(Voo*cos(alpha_oo))*t;
    float Yto= Hoo +(Voo*sin(alpha_oo))*t-1/2*g*pow(t,2);

    float Xod=0,Vod=0,alpha_od=0,Hod=0;
    float Xtd= Xod +(Vod*cos(alpha_od))*t;
    float Ytd= Hod +(Vod*sin(alpha_od))*t-1/2*g*pow(t,2);


    for (t=0;Yto!=0;t+=0.001) {
        Xto= Xoo +(Voo*cos(alpha_oo))*(t);
        Yto= Hoo +(Voo*sin(alpha_oo))*(t)-1/2*g*pow(t,2);

        Xtd= Xod +(Vod*cos(alpha_od))*(t-2.5); //La balas de la defensa salen con un retraso de 2.5s despues del lanzamiento de la ofensa
        Ytd= Hod +(Vod*sin(alpha_od))*(t-2.5)-1/2*g*pow(t-2.5,2);

        if
    }




    cout << "Hello World!" << endl;
    return 0;
}
