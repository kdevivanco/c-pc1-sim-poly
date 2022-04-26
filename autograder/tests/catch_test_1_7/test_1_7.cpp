//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "polynomial.h"
using namespace std;

static void test_7() {
    polynomial<double, 0, 1, 1, 1, 0, 1> p1 = {1.0, 2.0, 6.0, 8.0};
    cout << p1 << endl;
    p1.clear();
    p1 += 11.0;
    cout << p1 << endl;
}

TEST_CASE("Question #7") {
    execute_test("test_1_7.in", test_7);
}