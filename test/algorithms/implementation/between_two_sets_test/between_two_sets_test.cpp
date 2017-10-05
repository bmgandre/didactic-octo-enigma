#include <hackerrank_gtest.h>
#include <between_two_sets.h>

namespace hackerrank {
namespace bmgandre {
namespace algorithms {
namespace implementation {

using between_two_sets_test = hackerrank::bmgandre::tests::hackerrank_gtest;

TEST_F(between_two_sets_test, test_case_1) {
	input_stream << R"raw(
	  2 3
	  2 4
	  16 32 96
	)raw";
	between_two_sets::run();

	std::string output = output_stream.str();
	ASSERT_EQ(output, "3\n");
}


} // namespace algorithms
} // namespace implementation
} // namespace bmgandre
} // namespace hackerrank

