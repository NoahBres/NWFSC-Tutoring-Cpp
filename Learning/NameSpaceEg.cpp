#include <iostream>
#include <string>
#include <algorithm>

// namespace apple {
    void print(const char* text) {
        std::cout << text << std::endl;
    }
// }

namespace orange {
    void print(const char* text) {
        std::cout << text << std::endl;
    }
}

// 2 print functions with the same signature
// so you can't have a function named print without the namespace

// Brief history
// OpenGL is a C library
// C doesn't have namespaces
// OpenGL had to implement everything by prepending GLFW_functionName to everything
// So they didn't accidentally make functions that you would call
// Ugly. cumbersome.
// Super common with c libraries

// purpose is to avoid naming conflicts

// option 1
// int main() {
//     orange::print("Hello");

//     std::cin.get();
// }

// option 2
// int main() {
//     using namespace apple;

//     print("Hello");

//     std::cin.get();
// }

// option 3
// int main() {
//     using apple::print;

//     print("hello");
//     orange::print("test");
// }

// option 4
int main() {
    namespace a = apple;

    a::print("test");
}