#include <iostream>
#include "Vector2.h"

int main (){
    Vector2 a(5.0, 2.0);
    Vector2 b(2.0, 3.0);

    std::cout << a.getR() << std::endl;

    std::cout << a.getPhi() << std::endl;

    std::cout << a.getA() << std::endl;

    auto c = a+b;
    std::cout << c.x << std::endl;
    std::cout << c.y << std::endl;

    auto v = a-b;
    std::cout << v.x << std::endl;
    std::cout << v.y << std::endl;

    auto d=a*2;
    std::cout << d.x << std::endl;
    std::cout << d.y << std::endl;

    auto l=a*2;
    std::cout << l.x << std::endl;
    std::cout << l.y << std::endl;

    std::cout << a*b << std::endl;

    auto t=a&b;
    std::cout << t << std::endl;

    return 0;
}