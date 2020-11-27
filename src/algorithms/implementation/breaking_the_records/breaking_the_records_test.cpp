#include <hackerrank_gtest.h>
#include "breaking_the_records.h"

namespace hackerrank {
namespace bmgandre {
namespace algorithms {
namespace implementation {

using breaking_the_records_test = hackerrank::bmgandre::tests::hackerrank_gtest;

TEST_F(breaking_the_records_test, test_case_1) {
	input_stream << "9" << std::endl
				 << "10 5 20 20 4 5 2 25 1" << std::endl;
				 
	breaking_the_records::run();

	std::string output = output_stream.str();
	ASSERT_EQ(output, "2 4\n");
}

TEST_F(breaking_the_records_test, test_case_2) {
	input_stream << "10" << std::endl
				 << "3 4 21 36 10 28 35 5 24 42" << std::endl;
				 
	breaking_the_records::run();

	std::string output = output_stream.str();
	ASSERT_EQ(output, "4 0\n");
}

} // namespace algorithms
} // namespace implementation
} // namespace bmgandre
} // namespace hackerrank

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
