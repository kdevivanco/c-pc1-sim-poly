//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "polynomial.h"
using namespace std;

static void test_4() {
    vector<int> vec;
    copy (istream_iterator<int>(cin), istream_iterator<int>(), back_inserter(vec));
    polynomial<int, 1, 0, 3, 4> p1;
    for (const auto& item: vec)
        p1 += item;
    cout << p1 << endl;
}

TEST_CASE("Question #4") {
    execute_test("test_1_4.in", test_4);
}