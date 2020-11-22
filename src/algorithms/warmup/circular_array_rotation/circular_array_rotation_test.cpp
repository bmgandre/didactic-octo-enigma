#include <hackerrank_gtest.h>
#include "circular_array_rotation.h"

namespace hackerrank {
namespace bmgandre {
namespace algorithms {
namespace warmup {

using circular_array_rotation_test = hackerrank::bmgandre::tests::hackerrank_gtest;

TEST_F(circular_array_rotation_test, test_case_1) {
	input_stream << "3 2 3\n1 2 3\n0\n1\n2";
	circular_array_rotation::run();
	
	std::string output = output_stream.str();
	ASSERT_EQ(output, "2\n3\n1\n");
}

} // namespace algorithms
} // namespace warmup
} // namespace bmgandre
} // namespace hackerrank
