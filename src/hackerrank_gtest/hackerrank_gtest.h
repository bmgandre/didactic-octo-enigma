#include <sstream>
#include <iostream>
#include <gtest/gtest.h>

namespace hackerrank {
namespace bmgandre {
namespace tests {

class hackerrank_gtest : public ::testing::Test {
protected:
    virtual void SetUp();
    virtual void TearDown();

    std::stringstream output_stream;
    std::streambuf* cout_streambuf;

    std::stringstream input_stream;
    std::streambuf* cin_streambuf;
};

} // namespace tests
} // namespace bmgandre
} // namespace hackerrank
