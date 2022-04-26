//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include <vector>
#include <fstream>
#include <iterator>
#include "polynomial.h"
using namespace std;

static void test_1_1() {
    vector<double> vec;
    copy (istream_iterator<double>(cin), istream_iterator<double>(), back_inserter(vec));
    for (const auto& item: vec)
        cout << generate_polynomial<1, 2, 0, 1>(item) << " ";
    cout << endl;
}

static void test_1_2() {
    cout << generate_polynomial<10, 0, 7, 2, 0, 0, 11>(5) << endl;
}

static void test_1_3() {
    cout << generate_polynomial<1, 0, 2, 3>(4.0) << endl;
}

static void test_1_4() {
    cout << generate_polynomial<1, 2, 3>(10.0f) << endl;
}

TEST_CASE("Question #1_1") {
    execute_test("test_1_1_1.in", test_1_1);
}

TEST_CASE("Question #1_2") {
    execute_test("test_1_1_2.in", test_1_2);
}

TEST_CASE("Question #1_3") {
    execute_test("test_1_1_3.in", test_1_3);
}


TEST_CASE("Question #1_4") {
    execute_test("test_1_1_4.in", test_1_4);
}