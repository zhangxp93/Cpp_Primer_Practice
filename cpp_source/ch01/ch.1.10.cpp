//打印10到0之间的整数
#include<iostream>
int main()
{
    int val = 10;
    while(val >=0){
        std::cout << val << std::endl;
        --val;  //将val减1
    }
    return 0;
}