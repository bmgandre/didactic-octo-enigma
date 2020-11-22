#include <hackerrank_gtest.h>
#include "divisible_sum_pairs.h"

namespace hackerrank {
namespace bmgandre {
namespace algorithms {
namespace implementation {
	
using divisible_sum_pairs_test = hackerrank::bmgandre::tests::hackerrank_gtest;

TEST_F(divisible_sum_pairs_test, test_case_1) {
    input_stream << "6 3\n1 3 2 6 1 2";
    divisible_sum_pairs::run();

    std::string output = output_stream.str();
    ASSERT_EQ(output, "5\n");
}

} // namespace algorithms
} // namespace implementation
} // namespace bmgandre
} // namespace hackerrank
