#include <iostream>

/**
 * 变量和常量的声明和定义
 */
int main() {
    // 变量的定义
	// 语法1：数据类型 标识符;
	// 注意事项: 局部变量在使用之前，必须要赋值
    int num1;
    num1 = 10;
    std::cout << "num1 = " << num1 << std::endl;

    // 语法2：数据类型 标识符 = 初始值;
    int num2 = 20;
    std::cout << "num2 = " << num2 << std::endl;

    // 语法3：数据类型 标识符1, 标识符2, 标识符3, ...
	// 同时定义多个相同数据类型的变量，并且可以随时进行初始化的赋值操作。
    int chineseScore = 100, mathScore, englishScore = 80;
    mathScore = 90;
    std::cout << "chineseScore = " << chineseScore << std::endl;
    std::cout << "mathScore = " << mathScore << std::endl;
    std::cout << "englishScore = " << englishScore << std::endl;

    // 常量的定义，需要使用到关键字const
    const float PI = 3.14f;
    std::cout << "PI = " << PI << std::endl;

    return 0;
}