#include <thread>
#include <mutex>
#include <iostream>
#include <print>

int counter = 0;

void add(int n) {
    std::println("thread id = {}", std::this_thread::get_id());
    for (int i = 0; i < n; ++i)
        ++counter;
}

int main() {
    std::thread t(add, 1'000'000);
    add(1'000'000);
    t.join();

    std::println("the value of the counter is: {}", counter);

    return 0;
}