#include <hackerrank_gtest.h>
#include <valid_pan_format.h>

namespace hackerrank {
namespace bmgandre {
namespace algorithms {
namespace regex {

using valid_pan_format_test = hackerrank::bmgandre::tests::hackerrank_gtest;

TEST_F(valid_pan_format_test, test_case_1) {
	input_stream << "3 ABCDS1234Y ABAB12345Y avCDS1234Y";
	input_stream << std::endl;
	
	valid_pan_format::run();
	
	std::string output = output_stream.str();
	
	ASSERT_EQ(output, "YES\nNO\nNO\n");
}

} // namespace regex
} // namespace algorithms
} // namespace bmgandre
} // namespace hackerrank




