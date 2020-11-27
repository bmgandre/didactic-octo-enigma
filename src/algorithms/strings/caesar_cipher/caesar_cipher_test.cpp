#include <hackerrank_gtest.h>
#include "caesar_cipher.h"
#include <string>

namespace hackerrank {
namespace bmgandre {
namespace algorithms {
namespace strings {

using caesar_cipher_test = hackerrank::bmgandre::tests::hackerrank_gtest;

TEST_F(caesar_cipher_test, test_case_alphabet) {
	auto encripted_string = caesar_cipher::solve("abcdefghijklmnopqrstuvwxyz", 2);

	ASSERT_EQ(encripted_string, "cdefghijklmnopqrstuvwxyzab");
}

TEST_F(caesar_cipher_test, test_case_symbols) {
	using namespace std::string_literals;
	auto input = "1234567890-_=+'`'[]{}~^/;?.><,\\|\""s;
	
	auto encripted_string = caesar_cipher::solve(input, 2);

	ASSERT_EQ(encripted_string, input);
}

TEST_F(caesar_cipher_test, test_case_2) {
	auto encripted_string = caesar_cipher::solve("www.abc.xy", 87);

	ASSERT_EQ(encripted_string, "fff.jkl.gh");
}

TEST_F(caesar_cipher_test, test_case_5) {
	auto encripted_string = caesar_cipher::solve("middle-Outz", 2);

	ASSERT_EQ(encripted_string, "okffng-Qwvb");
}

TEST_F(caesar_cipher_test, test_case_11) {
	auto encripted_string = caesar_cipher::solve("Always-Look-on-the-Bright-Side-of-Life", 5);

	ASSERT_EQ(encripted_string, "Fqbfdx-Qttp-ts-ymj-Gwnlmy-Xnij-tk-Qnkj");
}

} // namespace algorithms
} // namespace strings
} // namespace bmgandre
} // namespace hackerrank

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
