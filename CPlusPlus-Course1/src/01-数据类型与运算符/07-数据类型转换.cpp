#include <iostream>

int main() {
    // char < short < int ~= long < long long < float < double

	// 自动类型转换
	// 由取值范围小的数据类型，向取值范围大的数据类型转换。
	// 转换的过程不需要进行额外的操作，直接赋值就可以了。
	// 不存在精度丢失的问题
    int num1 = 100;
    long long num2 = num1;
    std::cout << "num2 = " << num2 << std::endl;

    char c1 = 'a';
    int num3 = c1;
    std::cout << "num3 = " << num3 << std::endl;

    float f1 = num1;
    std::cout << "f1 = " << f1 << std::endl;

    // 强制类型转换
	// 由取值范围大的数据类型，向取值范围小的数据类型转换。
	// 可能会存在精度丢失的问题。
	// 所以，在进行强制类型转换的时候，最好添加上类型转换的操作
    // int num4 = num2;
    int num4 = (int)num2;
    std::cout << "num4 = " << num4 << std::endl;

    // 200的补码：0000 0000 0000 0000 0000 0000 1100 1000
	// 转换成char时前24位直接截断：1100 1000
    // 补码转原码 => 1011 1000 => -(32+16+8) = -56
    int num5 = 200;
    // char c2 = num5;
    char c2 = (char)num5;
    std::cout << "c2 = " << c2 << std::endl;
    std::cout << "c2 + 1 = " << c2 + 1 << std::endl; // -55

    // 注意事项：
	// 1.在进行运算的时候，计算结果的数据类型会向上对齐
    int nn1 = 100;
    long long nn2 = 200;
    long long nn3 = nn1 + nn2;
    auto res = nn1 + nn2;
    std::cout << "nn3 = " << nn3 << std::endl;
    std::cout << "sizeof(nn3) = " << sizeof(nn3) << std::endl;
    std::cout << "res = " << res << std::endl;

    // 2.在进行运算的时候，char、short类型结果会自动的转换成int类型
    short s1 = 100, s2 = 200;
    auto res2 = s1 + s2;
    std::cout << "sizeof(res2) = " << sizeof(res2) << std::endl;

    // 3.浮点型向整型转换的时候，会舍去小数点后面的所有部分，只保留整数部分
    float f2 = 3.94f;
    int num6 = (int)f2;
    std::cout << "num6 = " << num6 << std::endl;

    return 0;
}