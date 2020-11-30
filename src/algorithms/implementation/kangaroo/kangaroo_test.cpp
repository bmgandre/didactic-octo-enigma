#include <hackerrank_gtest.h>
#include "kangaroo.h"

namespace hackerrank {
namespace bmgandre {
namespace algorithms {
namespace implementation {
	
using kangaroo_test = hackerrank::bmgandre::tests::hackerrank_gtest;

TEST_F(kangaroo_test, test_case_1) {
	input_stream << "0 3 4 2";
	kangaroo::solve();

	std::string output = output_stream.str();
	ASSERT_EQ(output, "YES\n");
}

TEST_F(kangaroo_test, test_case_2) {
	input_stream << "14 4 98 2";
	kangaroo::solve();

	std::string output = output_stream.str();
	ASSERT_EQ(output, "YES\n");
}

TEST_F(kangaroo_test, test_case_3) {
	input_stream << "21 6 47 3";
	kangaroo::solve();

	std::string output = output_stream.str();
	ASSERT_EQ(output, "NO\n");
}

} // namespace implementation
} // namespace algorithms
} // namespace bmgandre
} // namespace hackerrank

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
