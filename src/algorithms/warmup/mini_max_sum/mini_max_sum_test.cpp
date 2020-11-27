#include <hackerrank_gtest.h>
#include "mini_max_sum.h"

namespace hackerrank {
namespace bmgandre {
namespace algorithms {
namespace warmup {

using mini_max_sum_test = hackerrank::bmgandre::tests::hackerrank_gtest;

TEST_F(mini_max_sum_test, test_case_1) {
	input_stream << "1 2 3 4 5";
	mini_max_sum::run();

	std::string output = output_stream.str();
	ASSERT_EQ(output, "10 14\n");
}

} // namespace algorithms
} // namespace warmup
} // namespace bmgandre
} // namespace hackerrank

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
