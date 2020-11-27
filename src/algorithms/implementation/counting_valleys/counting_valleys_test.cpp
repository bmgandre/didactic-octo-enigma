#include <hackerrank_gtest.h>
#include "counting_valleys.h"

namespace hackerrank {
namespace bmgandre {
namespace algorithms {
namespace implementation {

using counting_valleys_test = hackerrank::bmgandre::tests::hackerrank_gtest;

TEST_F(counting_valleys_test, test_case_1) {
	int valleys = counting_valleys::solve(8, "UDDDUDUU");
	ASSERT_EQ(1, valleys);
}

TEST_F(counting_valleys_test, test_case_2) {
	int valleys = counting_valleys::solve(12, "DDUUDDUDUUUD");
	ASSERT_EQ(2, valleys);
}

} // namespace algorithms
} // namespace implementation
} // namespace bmgandre
} // namespace hackerrank

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
