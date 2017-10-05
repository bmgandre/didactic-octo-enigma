#include <hackerrank_gtest.h>
#include <bon_appetit.h>

namespace hackerrank {
namespace bmgandre {
namespace algorithms {
namespace implementation {

using bon_appetit_test = hackerrank::bmgandre::tests::hackerrank_gtest;

TEST_F(bon_appetit_test, test_case_0) {
    input_stream << "4 1" << std::endl
                 << "3 10 2 9" << std::endl
                 << "12" << std::endl;
	bon_appetit::run();

	std::string output = output_stream.str();
    ASSERT_EQ(output, "5\n");
}

TEST_F(bon_appetit_test, test_case_1) {
    input_stream << "4 1" << std::endl
                 << "3 10 2 9" << std::endl
                 << "7" << std::endl;
    bon_appetit::run();

    std::string output = output_stream.str();
    ASSERT_EQ(output, "Bon Appetit\n");
}


} // namespace algorithms
} // namespace implementation
} // namespace bmgandre
} // namespace hackerrank
