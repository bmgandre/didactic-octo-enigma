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

	migratory_birds::run();

	std::string output = output_stream.str();

    ASSERT_EQ(output, "4\n");
}

} // namespace algorithms
} // namespace implementation
} // namespace bmgandre
} // namespace hackerrank
