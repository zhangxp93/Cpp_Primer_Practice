//输入两个数，打印这两个数范围内的所有整数
#include <iostream>

int main()
{
    int v1 = 0, v2 = 0;
    std::cout << "请输入两个整数：" << std::endl;
    std::cin >> v1 >>v2;
    if(v1 > v2){
        int temp = v1;  //交换v1和v2的值
        v1 = v2;    //交换v1和v2的值
        v2 = temp;  //交换v1和v2的值
    }
    while(v1 <= v2){
        std::cout << v1 << std::endl;
        ++v1;
    }
    return 0;
}