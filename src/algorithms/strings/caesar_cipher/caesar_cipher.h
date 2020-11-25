#ifndef CAESAR_CIPHER_H
#define CAESAR_CIPHER_H

#include <string>

namespace hackerrank {
namespace bmgandre {
namespace algorithms {
namespace strings {

class caesar_cipher
{
public:
	static std::string solve(std::string input, unsigned char rotate_key);
};

} // namespace algorithms
} // namespace strings
} // namespace bmgandre
} // namespace hackerrank

#endif // CAESAR_CIPHER_H
