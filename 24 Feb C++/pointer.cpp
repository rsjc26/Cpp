// code for pointer

#include <iostream>
using namespace std;

int main()
{
    //char *pt = new char;
    //*pt = '1';
    float *pt = new float;
    *pt = 55;
    cout <<"Value="<<*pt;
    cout <<"\nAddress="<<pt;
    cout <<"\nSize="<<sizeof (*pt);
    cout <<"\nSize ptr="<<sizeof pt;
}


