#include <hackerrank_gtest.h>
#include "valid_pan_format.h"

namespace hackerrank {
namespace bmgandre {
namespace regex {
namespace applications {

using valid_pan_format_test = hackerrank::bmgandre::tests::hackerrank_gtest;

TEST_F(valid_pan_format_test, test_case_1) {
	input_stream << "3 ABCDS1234Y ABAB12345Y avCDS1234Y";
	input_stream << std::endl;
	
	valid_pan_format::solve();
	
	std::string output = output_stream.str();
	
	ASSERT_EQ(output, "YES\nNO\nNO\n");
}

} // namespace applications
} // namespace regex
} // namespace bmgandre
} // namespace hackerrank

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
