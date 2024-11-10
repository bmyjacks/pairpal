#include <iostream>
#include "util.hpp"

int test_add() {
    Util util;
    int failed_tests = 0;

    if (util.add(1, 1) != 2) {
        std::cerr << "Test failed: add(1, 1) != 2\n";
        failed_tests++;
    }
    if (util.add(-1, 1) != 0) {
        std::cerr << "Test failed: add(-1, 1) != 0\n";
        failed_tests++;
    }
    if (util.add(-1, -1) != -2) {
        std::cerr << "Test failed: add(-1, -1) != -2\n";
        failed_tests++;
    }
    if (util.add(0, 0) != 0) {
        std::cerr << "Test failed: add(0, 0) != 0\n";
        failed_tests++;
    }
    if (util.add(123, 456) != 579) {
        std::cerr << "Test failed: add(123, 456) != 579\n";
        failed_tests++;
    }

    return failed_tests;
}

int main() {
    int failed_tests = test_add();
    if (failed_tests == 0) {
        std::cout << "All tests passed.\n";
    } else {
        std::cout << failed_tests << " test(s) failed.\n";
    }
    return failed_tests;
}