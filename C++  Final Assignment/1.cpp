//Set:1
//Question:1 Vectors: Write a C++ program, there you take two vectors of names. The program should return a vector that has all the names only once.

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include<bits/stdc++.h>

int main() {

    int i,j;
    std::string name;
    std::vector<std::string> stringsVector (4);
    
    std::cout << "Vector1: " ;
    //<< std::endl;
    for(size_t i{} ; i < stringsVector.size(); i++)
    {
        std::getline(std::cin, name);
        stringsVector[i] = name;
        //std::string name;
    
    }
    
    std::vector<std::string> stringsVector1 (5);
   
    std::cout << "Vector2: " ;
    //<< std::endl;
    for(size_t j{} ; j< stringsVector1.size(); j++)
    {
        std::getline(std::cin, name);
        stringsVector1[j] = name;
       // std::string name;   
    }
    for(int i=0 ; i < stringsVector.size(); i++)
    {   
        std::cout <<stringsVector[i] <<", ";
    
    }
   
   
    if(stringsVector.size()>stringsVector1.size())
    {
        stringsVector.size() == stringsVector1.size();
    }
    
    for(int j=0 ; j < stringsVector1.size(); j++)
     {  
         i=0;
         if(stringsVector[i] != stringsVector1[j])
        {
            std::cout <<stringsVector1[j] <<", ";
        } i++;
     }
     
}
