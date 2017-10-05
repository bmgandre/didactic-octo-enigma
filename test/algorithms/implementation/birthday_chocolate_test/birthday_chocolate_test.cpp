#include <hackerrank_gtest.h>
#include <birthday_chocolate.h>

namespace hackerrank {
namespace bmgandre {
namespace algorithms {
namespace implementation {

using birthday_chocolate_test = hackerrank::bmgandre::tests::hackerrank_gtest;

TEST_F(birthday_chocolate_test, test_case_1) {
	input_stream << "5" << std::endl
	             << "1 2 1 3 2" << std::endl
	             << "3 2" << std::endl;
				 
	birthday_chocolate::run();

	std::string output = output_stream.str();
	
	ASSERT_EQ(output, "2\n");
}

TEST_F(birthday_chocolate_test, test_case_2) {
	input_stream << "6" << std::endl
	             << "1 1 1 1 1 1" << std::endl
	             << "3 2" << std::endl;
				 
	birthday_chocolate::run();

	std::string output = output_stream.str();
	
	ASSERT_EQ(output, "0\n");
}

TEST_F(birthday_chocolate_test, test_case_3) {
	input_stream << "1" << std::endl
	             << "4" << std::endl
	             << "4 1" << std::endl;
				 
	birthday_chocolate::run();

	std::string output = output_stream.str();
	
	ASSERT_EQ(output, "1\n");
}

} // namespace algorithms
} // namespace implementation
} // namespace bmgandre
} // namespace hackerrank
