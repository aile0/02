#include<iostream>

int main()
{
    std::cout << "输入一个0-100的数字：" << std::endl;
    int temp;
    std::cin >> temp;
    while (temp >= 0 && temp <= 100)
    {
        std::cout << "输入的数字符合要求" << std::endl;
        std::cout << "请再次输入数字："<< std::endl;
        std::cin >> temp;
    }
}

