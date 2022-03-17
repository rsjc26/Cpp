//Returning the Template 

#include <iostream>
using namespace std;
template <typename T,typename U>

auto add(T a, U b)-> decltype(a+b)
{
    cout<<"In the function: "<<a+b<<endl;
    return a+b;
}

int main()
{
    auto c = 0;
    c = add(1, 'A');
    c = add(3, 5);
    c = add(3, 3.5);
    return 0;
}
