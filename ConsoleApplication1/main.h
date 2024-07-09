#pragma once
#include <iostream>
#include <ostream>

class Main
{
public:
    int y;
    int z;

    Main(int x) : y(x), z(x * 2) {}
    Main(int x, int i);

    void printValues() {
        std::cout << "y: " << y << ", z: " << z << std::endl;
    }

    friend std::ostream& operator<<(std::ostream& os, const Main& main) {
        os << "y: " << main.y << ", z: " << main.z;
        return os;
    }
    Main operator+(const Main& other) const {
        return Main(y + other.y, z + other.z);
    }
};


Main::Main(int x, int i) : y(x), z(x * i) {}


int main()
{
    Main main1(5);
    main1.printValues();

    Main main2(10, 3);
    main2.printValues();

    Main main3 = main1 + main2;
    std::cout << main3 << std::endl;

    return 0;
}
