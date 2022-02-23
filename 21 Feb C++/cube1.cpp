#include <iostream>
using namespace std;

int cubevolume(int l=5, int w=6, int h=7)
{
return l*w*h;
}

int main()
{
cubevolume();
cubevolume(9);
cubevolume(15,12);
cubevolume(3,4,7);

 cout << "Cube: "<< cubevolume()<<endl<<endl;
}


