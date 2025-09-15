#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a=1,b=2;
    double eps=0.0001;
    double x;
    //формула хорд:
    //x=(a*f_b-b*f_a)/(f_b-f_a)
    do{
        x=(a*(b*b-2)-b*(a*a-2))/((b*b-2)-(a*a-2));
        if(fabs(x*x-2)<eps){
            b=x;
        }else{
            a=x;
        }
    }while(fabs(b-a)>=eps);
    cout<<x;
    return 0;
}
