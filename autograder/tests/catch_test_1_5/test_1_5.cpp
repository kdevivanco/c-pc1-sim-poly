//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "polynomial.h"
using namespace std;

static void test_5() {
    polynomial<double, 0, 1, 1, 1, 0, 1> p1 = {1.0, 2.0, 6.0, 8.0};
    cout << p1 << endl;
    polynomial<double, 0, 1, 1, 1, 0, 1> p2 = p1;
    p2 += 3.5;
    cout << p2 << endl;
    cout << p1 << endl;
}

TEST_CASE("Question #5") {
    execute_test("test_1_5.in", test_5);
}