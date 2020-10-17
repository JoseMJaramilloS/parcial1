#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    const float g=9.81;
    float Xoo=0,Voo=0,alpha_oo=0,t=0,Hoo=0;
    float Xto= Xoo +(Voo*cos(alpha_oo))*t;
    float Yto= Hoo +(Voo*sin(alpha_oo))*t-1/2*g*(t*t);

    float Xod=0,Vod=0,alpha_od=0,t=0,Hod=0;
    float Xtd= Xod +(Vod*cos(alpha_od))*t;
    float Ytd= Hod +(Vod*sin(alpha_od))*t-1/2*g*(t*t);



    cout << "Hello World!" << endl;
    return 0;
}
