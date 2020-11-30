#include <hackerrank_gtest.h>
#include "migratory_birds.h"

namespace hackerrank {
namespace bmgandre {
namespace algorithms {
namespace implementation {

using migratory_birds_test = hackerrank::bmgandre::tests::hackerrank_gtest;

TEST_F(migratory_birds_test, test_case_1) {
	input_stream << "6" << std::endl
				 << "1 4 4 4 5 3" << std::endl;

	migratory_birds::solve();

	std::string output = output_stream.str();

	ASSERT_EQ(output, "4\n");
}

} // namespace implementation
} // namespace algorithms
} // namespace bmgandre
} // namespace hackerrank

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
