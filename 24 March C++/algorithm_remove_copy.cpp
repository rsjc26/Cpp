//Algorithm remove and copy

#include <iostream>

using namespace std;
#include<algorithm>
#include<vector>

int main()
{
    char str[] = "I Love Nature";
    vector<char> v ,v2(30);
    
    int i;
    for(i=0; str[i]; i++)
    v.push_back(str[i]);
    
    cout<<"Input sequence:\n";
    for(i=0; i<v.size(); i++)
    cout<<v[i];
    cout<<endl;
    
    //remove all space
    
    remove_copy(v.begin(), v.end(), v2.begin(), ' ');
    
    cout<<"Result after removing spaces:\n";
    
    for(i=0; i<v2.size();i++)
    cout<<v2[i];
    
    cout<<endl<<endl;
    
    return 0;
}
