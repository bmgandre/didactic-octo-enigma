#include <hackerrank_gtest.h>
#include <plus_minus.h>

namespace hackerrank {
namespace bmgandre {
namespace algorithms {
namespace warmup {

using plus_minus_test = hackerrank::bmgandre::tests::hackerrank_gtest;

TEST_F(plus_minus_test, test_case_1) {
    input_stream << "6" << std::endl
                 << "-4 3 -9 0 4 1" << std::endl;

    output_stream << std::fixed;
	plus_minus::run();

	std::string output = output_stream.str();
    ASSERT_EQ(output, "0.500000\n0.333333\n0.166667\n");
}


} // namespace algorithms
} // namespace warmup
} // namespace bmgandre
} // namespace hackerrank

