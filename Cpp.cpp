#include<vector>
#include<sstream>
#include<iostream>

std::string vectorToString(std::vector<int> arr)
{
    std::stringstream res;
    res<<"{";
    for(int i=0; i<arr.size()-1; i++)
    {
        res << arr[i] << ", ";
    }
    res << arr[arr.size()-1] << "}";
    return res.str();
}

void print(std::vector<int> arr)
{
    std::cout<<"{";
    for(int i=0; i<arr.size()-1; i++)
    {
        std::cout<<arr[i]<<", ";
    }
    std::cout<<arr[arr.size()-1]<<'}'<<std::endl;
}