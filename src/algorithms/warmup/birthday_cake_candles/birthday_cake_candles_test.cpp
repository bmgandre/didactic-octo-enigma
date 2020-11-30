#include <hackerrank_gtest.h>
#include "birthday_cake_candles.h"

namespace hackerrank {
namespace bmgandre {
namespace algorithms {
namespace warmup {

using birthday_cake_candles_test = hackerrank::bmgandre::tests::hackerrank_gtest;

TEST_F(birthday_cake_candles_test, test_case_1) {
	input_stream << "4" << std::endl
				 << "3 2 1 3" << std::endl;
	birthday_cake_candles::solve();

	std::string output = output_stream.str();
	ASSERT_EQ(output, "2\n");
}

} // namespace warmup
} // namespace algorithms
} // namespace bmgandre
} // namespace hackerrank

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
