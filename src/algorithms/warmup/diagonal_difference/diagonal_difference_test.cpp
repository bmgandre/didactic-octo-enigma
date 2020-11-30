#include <hackerrank_gtest.h>
#include "diagonal_difference.h"

namespace hackerrank {
namespace bmgandre {
namespace algorithms {
namespace warmup {

using diagonal_difference_test = hackerrank::bmgandre::tests::hackerrank_gtest;

TEST_F(diagonal_difference_test, test_case_1) {
	input_stream << "3" << std::endl;
	input_stream << "11 2   4" << std::endl;
	input_stream << " 4 5   6" << std::endl;
	input_stream << "10 8 -12" << std::endl;
	diagonal_difference::solve();

	std::string output = output_stream.str();
	ASSERT_EQ(output, "15\n");
}

} // namespace warmup
} // namespace algorithms
} // namespace bmgandre
} // namespace hackerrank

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
