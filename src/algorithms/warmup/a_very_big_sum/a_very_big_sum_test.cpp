#include <hackerrank_gtest.h>
#include "a_very_big_sum.h"

namespace hackerrank {
namespace bmgandre {
namespace algorithms {
namespace warmup {

using a_very_big_sum_test = hackerrank::bmgandre::tests::hackerrank_gtest;

TEST_F(a_very_big_sum_test, test_case_1) {
	input_stream << "5" << std::endl;
	input_stream << "1000000001 1000000002 1000000003 1000000004 1000000005" << std::endl;

	a_very_big_sum::run();

	std::string output = output_stream.str();
	ASSERT_EQ(output, "5000000015\n");
}


} // namespace algorithms
} // namespace warmup
} // namespace bmgandre
} // namespace hackerrank

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
