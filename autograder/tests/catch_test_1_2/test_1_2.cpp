//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "polynomial.h"
#include <iterator>
using namespace std;

static void test_2() {
    vector<int> vec;
    copy (istream_iterator<int>(cin), istream_iterator<int>(), back_inserter(vec));
    polynomial<int, 1, 0, 3, 4> p1 = vec;
    cout << p1 << endl;
}

TEST_CASE("Question #2") {
    execute_test("test_1_2.in", test_2);
}