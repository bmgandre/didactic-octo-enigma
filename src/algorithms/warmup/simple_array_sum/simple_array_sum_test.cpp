#include <hackerrank_gtest.h>
#include "simple_array_sum.h"

namespace hackerrank {
namespace bmgandre {
namespace algorithms {
namespace warmup {

using simple_array_sum_test = hackerrank::bmgandre::tests::hackerrank_gtest;

TEST_F(simple_array_sum_test, test_case_1) {
	input_stream << "6 1 2 3 4 10 11";
	simple_array_sum::solve();
	
	std::string output = output_stream.str();
	ASSERT_EQ(output, "31");
}

} // namespace warmup
} // namespace algorithms
} // namespace bmgandre
} // namespace hackerrank

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
