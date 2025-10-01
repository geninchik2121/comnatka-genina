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
        x=(cos(2/a)-2*sin(1/a)+1/a) * (cos(2/b)-2*sin(1/b)+1/b);
        if(fabs(x-2*x+x)<eps){
            b=x;
        }else{
            a=x;
        }
    }while(fabs(b-a)>=eps);
    cout<<x;
    return 0;
}
