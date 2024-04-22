//#include <iostream>
//#include<fstream>
//#include<random>
#include<iostream>
#include<mpir.h>
#include<mpirxx.h>
#include<boost/winapi/thread_pool.hpp>

int main()
{
	std::cout << "hello,world!" << std::endl;
}
//int main()
//{
//
//
//    std::fstream td("D:\\Desktop\\vs_file\\e1\\testdata.txt");
//    if (td.is_open())
//    {
//        std::cout << "打开成功" << std::endl;
//    }
//    double t = 0;
//    std::random_device seed;
//    std::default_random_engine e(seed());
//    std::uniform_real_distribution<double> g(-10000, 10000);
//    for (int i = 0; i < 1000; i++)
//    {
//        for (int j = 0; j < 5; j++)
//        {
//            t = g(e);
//            td << t << " ";
//        }
//        t = g(e);
//        td << t << std::endl;
//    }
//    td.close();
//    std::cout << "Hello World!\n";
//}

