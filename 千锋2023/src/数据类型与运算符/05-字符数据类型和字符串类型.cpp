#include <iostream>

int main() {
    // 单引号中，只写一个字符
    char ch = 'a';
    std::cout << ch << std::endl;

    // 0110 0001 0110 0001 0110 0001
    // char ch2 = 'aaa'; // error
    // std::cout << ch2 << std::endl;

    std::string str = "hello world";
    std::cout << str << std::endl;

    return 0;
}