//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "polynomial.h"
using namespace std;

static void test_3() {
    polynomial<int, 0, 1> p1 = {1, 2, 3, 4};
    cout << p1 << endl;
}

TEST_CASE("Question #3") {
    execute_test("test_1_3.in", test_3);
}