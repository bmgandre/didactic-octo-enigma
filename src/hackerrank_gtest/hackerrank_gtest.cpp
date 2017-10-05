#include <sstream>
#include <iostream>
#include <gtest/gtest.h>
#include <stdio.h>
#include "hackerrank_gtest.h"

using namespace hackerrank::bmgandre::tests;

void hackerrank_gtest::SetUp()
{
    // stdout
    cout_streambuf = std::cout.rdbuf();
    std::cout.rdbuf(output_stream.rdbuf());

    // stdin
    cin_streambuf = std::cin.rdbuf();
    std::cin.rdbuf(input_stream.rdbuf());
}

void hackerrank_gtest::TearDown()
{
    std::cout.rdbuf(cout_streambuf);
}

