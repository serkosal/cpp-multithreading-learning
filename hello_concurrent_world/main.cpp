#include <thread>
#include <iostream>
#include <print> // from c++20 standard

void helloConcurentWorld() {
    std::println("{}", "Hello, concurrent World!");
}

int main() {
    std::thread t(helloConcurentWorld);
    std::println("{}", "Hello, from main thread!");

    t.join();

    return 0;
}