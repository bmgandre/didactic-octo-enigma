#include <hackerrank_gtest.h>
#include "circular_array_rotation.h"

namespace hackerrank {
namespace bmgandre {
namespace algorithms {
namespace implementation {

using circular_array_rotation_test = hackerrank::bmgandre::tests::hackerrank_gtest;

TEST_F(circular_array_rotation_test, test_case_1) {
	input_stream << "3 2 3\n1 2 3\n0\n1\n2";
	circular_array_rotation::solve();
	
	std::string output = output_stream.str();
	ASSERT_EQ(output, "2\n3\n1\n");
}

} // namespace implementation
} // namespace algorithms
} // namespace bmgandre
} // namespace hackerrank

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
