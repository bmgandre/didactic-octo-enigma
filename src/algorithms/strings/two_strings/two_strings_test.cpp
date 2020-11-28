#include <hackerrank_gtest.h>
#include "two_strings.h"

namespace hackerrank {
namespace bmgandre {
namespace algorithms {
namespace strings {

using two_strings_test = hackerrank::bmgandre::tests::hackerrank_gtest;

TEST_F(two_strings_test, test_case_1) {
	auto output = two_strings::solve("hello", "world");
	ASSERT_EQ(output, "YES");
}

TEST_F(two_strings_test, test_case_2) {
	auto output = two_strings::solve("hi", "world");
	ASSERT_EQ(output, "NO");
}

TEST_F(two_strings_test, test_case_6_0) {
	auto output = two_strings::solve("wouldyoulikefries", "abcabcabcabcabcabc");
	ASSERT_EQ(output, "NO");
}

TEST_F(two_strings_test, test_case_6_1) {
	auto output = two_strings::solve("hackerrankcommunity", "cdecdecdecde");
	ASSERT_EQ(output, "YES");
}

TEST_F(two_strings_test, test_case_6_2) {
	auto output = two_strings::solve("jackandjill", "wentupthehill");
	ASSERT_EQ(output, "YES");
}

TEST_F(two_strings_test, test_case_6_3) {
	auto output = two_strings::solve("writetoyourparents", "fghmqzldbc");
	ASSERT_EQ(output, "NO");
}

TEST_F(two_strings_test, test_case_7_0) {
	auto output = two_strings::solve("aardvark", "apple");
	ASSERT_EQ(output, "YES");
}

TEST_F(two_strings_test, test_case_7_1) {
	auto output = two_strings::solve("beetroot", "sandals");
	ASSERT_EQ(output, "NO");
}

} // namespace algorithms
} // namespace strings
} // namespace bmgandre
} // namespace hackerrank

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
