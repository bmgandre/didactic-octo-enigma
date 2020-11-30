#include <hackerrank_gtest.h>
#include "sherlock_and_array.h"

namespace hackerrank {
namespace bmgandre {
namespace algorithms {
namespace search {
	
using sherlock_and_array_test = hackerrank::bmgandre::tests::hackerrank_gtest;

TEST_F(sherlock_and_array_test, test_case_1) {
	input_stream << "2 3 1 2 3 4 1 2 3 3";
	input_stream << std::endl;
	
	sherlock_and_array::solve();
	
	std::string output = output_stream.str();
	
	ASSERT_EQ(output, "NO\nYES\n");
}

TEST_F(sherlock_and_array_test, test_case_6) {
	input_stream << "10 1 1 1 2 1 3 2 1 2 3 1 4 1 3 1 5 1 1 234 1 20000 3 6 23 6 1 1";
	input_stream << std::endl;
	
	sherlock_and_array::solve();
	
	std::string output = output_stream.str();
	
	ASSERT_EQ(output, "YES\nYES\nYES\nNO\nYES\nYES\nYES\nYES\nYES\nYES\n");
}

} // namespace search
} // namespace algorithms
} // namespace bmgandre
} // namespace hackerrank

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
