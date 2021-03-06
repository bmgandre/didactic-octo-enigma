#include <hackerrank_gtest.h>
#include "compare_the_triplets.h"

namespace hackerrank {
namespace bmgandre {
namespace algorithms {
namespace warmup {

using compare_the_triplets_test = hackerrank::bmgandre::tests::hackerrank_gtest;

TEST_F(compare_the_triplets_test, test_case_1) {
	input_stream << "5 6 7\n3 6 10";
	input_stream << std::endl;
	
	compare_the_triplets::solve();
	
	std::string output = output_stream.str();
	
	ASSERT_EQ(output, "1 1");
}

} // namespace warmup
} // namespace algorithms
} // namespace bmgandre
} // namespace hackerrank

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
