#include "MyVector.h"

int main(){
    MyVector<std::string> vec1;
    MyVector<std::string> vec2(3);
    std::cout << vec1.size() << "\n";
    std::cout << vec2.capacity() << "\n";
    std::cout << vec2.empty() << "\n";

    vec2.push_back("I AM HULA");
    vec2.push_back("DIDIDA");
    vec2.push_back("KAMI SAMA");
    vec2.push_back("SENPAI");
    std::cout << vec2.size() << "\n";
    std::cout << vec2.print() << "\n";
    vec2.pop_back();
    std::cout << vec2.print() << "\n";

    return 0;
}