#include <hackerrank_gtest.h>
#include "day_of_the_programmer.h"

namespace hackerrank {
namespace bmgandre {
namespace algorithms {
namespace implementation {

using day_of_the_programmer_test = hackerrank::bmgandre::tests::hackerrank_gtest;

TEST_F(day_of_the_programmer_test, test_case_0) {
	input_stream << "2017" << std::endl;
	day_of_the_programmer::run();

	std::string output = output_stream.str();
	ASSERT_EQ(output, "13.09.2017\n");
}

TEST_F(day_of_the_programmer_test, test_case_1) {
	input_stream << "2016" << std::endl;
	day_of_the_programmer::run();

	std::string output = output_stream.str();
	ASSERT_EQ(output, "12.09.2016\n");
}

} // namespace algorithms
} // namespace implementation
} // namespace bmgandre
} // namespace hackerrank

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
