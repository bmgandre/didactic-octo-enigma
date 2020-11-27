#include <hackerrank_gtest.h>
#include "grading_students.h"

namespace hackerrank {
namespace bmgandre {
namespace algorithms {
namespace implementation {

using grading_students_test = hackerrank::bmgandre::tests::hackerrank_gtest;

TEST_F(grading_students_test, test_case_1) {
	input_stream << R"raw(
4
73
67
38
33
)raw";

	grading_students::run();

	std::string output = output_stream.str();

	auto expected_output = R"raw(75
67
40
33
)raw";

	ASSERT_EQ(output, expected_output);
}

TEST_F(grading_students_test, test_case_2) {
	input_stream << R"raw(
4
99
67
38
33
)raw";

	grading_students::run();

	std::string output = output_stream.str();

	auto expected_output = R"raw(100
67
40
33
)raw";

	ASSERT_EQ(output, expected_output);
}

} // namespace algorithms
} // namespace implementation
} // namespace bmgandre
} // namespace hackerrank

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
