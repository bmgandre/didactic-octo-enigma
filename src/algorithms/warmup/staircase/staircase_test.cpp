#include <hackerrank_gtest.h>
#include "staircase.h"

namespace hackerrank {
namespace bmgandre {
namespace algorithms {
namespace warmup {

using staircase_test = hackerrank::bmgandre::tests::hackerrank_gtest;

TEST_F(staircase_test, test_case_1) {
	input_stream << "6";
	staircase::solve();

	std::string output = output_stream.str();
	ASSERT_EQ(output, R"raw(     #
    ##
   ###
  ####
 #####
######
)raw");
}

} // namespace warmup
} // namespace algorithms
} // namespace bmgandre
} // namespace hackerrank

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
