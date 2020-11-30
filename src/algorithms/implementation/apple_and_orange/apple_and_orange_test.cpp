#include <hackerrank_gtest.h>
#include "apple_and_orange.h"

namespace hackerrank {
namespace bmgandre {
namespace algorithms {
namespace implementation {

using apple_and_orange_test = hackerrank::bmgandre::tests::hackerrank_gtest;

TEST_F(apple_and_orange_test, test_case_1) {
	input_stream << R"raw(7  11
                          5  15
                          3   2
                         -2   2 1
                          5  -6
)raw";

	apple_and_orange::solve();

	std::string output = output_stream.str();
	auto expected_output = "1\n1\n";

	ASSERT_EQ(output, expected_output);
}

} // namespace implementation
} // namespace algorithms
} // namespace bmgandre
} // namespace hackerrank

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
