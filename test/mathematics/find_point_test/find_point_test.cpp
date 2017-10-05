#include <hackerrank_gtest.h>
#include <find_point.h>

namespace hackerrank {
namespace bmgandre {
namespace mathematics {
namespace find_point {
	
using find_point_test = hackerrank::bmgandre::tests::hackerrank_gtest;

TEST_F(find_point_test, test_case_1) {
	
	input_stream << "1 0 0 1 1";
	find_symmetric_point();
	
	std::string output = output_stream.str();
	
	ASSERT_EQ(output, "2 2\n");
}

} // namespace find_point
} // namespace mathematics
} // namespace bmgandre
} // namespace hackerrank
