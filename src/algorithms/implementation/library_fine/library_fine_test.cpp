#include <hackerrank_gtest.h>
#include "library_fine.h"

namespace hackerrank {
namespace bmgandre {
namespace algorithms {
namespace implementation {

using library_fine_test = hackerrank::bmgandre::tests::hackerrank_gtest;

TEST_F(library_fine_test, test_late_3_days) {
	auto fine = library_fine::solve({9, 6, 2015}, {6, 6, 2015});
	ASSERT_EQ(fine, 45);
}

TEST_F(library_fine_test, test_late_2_year) {
	auto fine = library_fine::solve({9, 6, 2017}, {6, 6, 2015});
	ASSERT_EQ(fine, 10'000);
}

TEST_F(library_fine_test, test_late_2_month) {
	auto fine = library_fine::solve({9, 8, 2015}, {6, 6, 2015});
	ASSERT_EQ(fine, 500 * 2);
}

TEST_F(library_fine_test, test_not_late_1_year) {
	auto fine = library_fine::solve({9, 12, 2014}, {6, 6, 2015});
	ASSERT_EQ(fine, 0);
}

TEST_F(library_fine_test, test_not_late_1_month) {
	auto fine = library_fine::solve({6, 5, 2015}, {6, 6, 2015});
	ASSERT_EQ(fine, 0);
}

TEST_F(library_fine_test, test_not_late_same_day) {
	auto fine = library_fine::solve({6, 6, 2015}, {6, 6, 2015});
	ASSERT_EQ(fine, 0);
}

TEST_F(library_fine_test, test_not_late_previous_day) {
	auto fine = library_fine::solve({1, 6, 2015}, {6, 6, 2015});
	ASSERT_EQ(fine, 0);
}

TEST_F(library_fine_test, test_not_late_previous_month) {
	auto fine = library_fine::solve({7, 3, 2015}, {6, 6, 2015});
	ASSERT_EQ(fine, 0);
}

TEST_F(library_fine_test, test_case_4) {
	auto fine = library_fine::solve({2, 7, 1014}, {1, 1, 1014});
	ASSERT_EQ(fine, 3000);
}

} // namespace implementation
} // namespace algorithms
} // namespace bmgandre
} // namespace hackerrank

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
