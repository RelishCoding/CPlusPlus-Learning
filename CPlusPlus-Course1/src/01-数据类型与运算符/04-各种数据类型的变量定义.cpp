#include <iostream>
#include <iomanip>

/**
 * 各种数据类型的变量定义
 */
int main() {
    // 整型
    short num1 = 32767;
    int num2 = 10;
    long num3 = 100;
    long long num4 = 10000;
    std::cout << "num1: " << num1 << std::endl;
    std::cout << "num2: " << num2 << std::endl;
    std::cout << "num3: " << num3 << std::endl;
    std::cout << "num4: " << num4 << std::endl;

    // 浮点型
    /*
        注意事项：
        浮点型的字面量，默认的类型推导是double类型。
        给float类型的变量进行赋值的时候，会进行一次类型转换的操作。
	    出于效率的考虑，如果要给float类型的变量进行赋值，
        最好在浮点型的字面量的最后，添加一个f。
    */
    float num5 = 3.14f;
    double num6 = 3.14;
    std::cout << "num5: " << num5 << std::endl;
    std::cout << "num6: " << num6 << std::endl;
    std::cout << std::setprecision(20) << "num5: " << num5 << std::endl;

    // 布尔型
    // 布尔型存在一个隐式的转换，以0作为false，以非0作为true
    bool b1 = true;
    bool b2 = false;
    bool b3 = 2;
    bool b4 = 0;
    std::cout << "b1: " << b1 << std::endl;
    std::cout << "b2: " << b2 << std::endl;
    std::cout << "b3: " << b3 << std::endl;
    std::cout << "b4: " << b4 << std::endl;
    
    return 0;
}