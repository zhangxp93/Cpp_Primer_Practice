//50到100的和
#include<iostream>

int main()
{
    int sum = 0, val = 50;
    while(val <= 100){
        sum += val;
        ++val;
    }
    std::cout << sum <<std::endl;
    
    return 0;
}