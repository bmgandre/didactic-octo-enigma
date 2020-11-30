#include <hackerrank_gtest.h>
#include "bon_appetit.h"

namespace hackerrank {
namespace bmgandre {
namespace algorithms {
namespace implementation {

using bon_appetit_test = hackerrank::bmgandre::tests::hackerrank_gtest;

TEST_F(bon_appetit_test, test_case_0) {
	input_stream << "4 1" << std::endl
				 << "3 10 2 9" << std::endl
				 << "12" << std::endl;
	bon_appetit::solve();

	std::string output = output_stream.str();
	ASSERT_EQ(output, "5\n");
}

TEST_F(bon_appetit_test, test_case_1) {
	input_stream << "4 1" << std::endl
				 << "3 10 2 9" << std::endl
				 << "7" << std::endl;
	bon_appetit::solve();

	std::string output = output_stream.str();
	ASSERT_EQ(output, "Bon Appetit\n");
}

} // namespace implementation
} // namespace algorithms
} // namespace bmgandre
} // namespace hackerrank

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
