#include <hackerrank_gtest.h>
#include "linkedlists.h"

namespace hackerrank {
namespace bmgandre {
namespace datastructures {
namespace linkedlists {

using linkedlists_test = hackerrank::bmgandre::tests::hackerrank_gtest;

TEST_F(linkedlists_test, test_case_insertnth) {
	struct Node* head;
	head = InsertNth(NULL, 3, 0);
	head = InsertNth(head, 5, 1);
	head = InsertNth(head, 4, 2);
	head = InsertNth(head, 2, 4);
	head = InsertNth(head, 10 ,1);
	
	struct Node* current = head;
	std::stringstream output;
	while (current != NULL) {
		output << current->data;
		current = current->next;
	}
	std::cout << output.str() << std::endl;
	
	ASSERT_EQ(output.str(), "310542");
}

TEST_F(linkedlists_test, test_case_insert) {
	struct Node* head;
	head = Insert(NULL, 2);
	head = Insert(head, 3);
	
	struct Node* current = head;
	std::stringstream output;
	while (current != NULL) {
		output << current->data;
		current = current->next;
	}
	std::cout << output.str() << std::endl;
	
	ASSERT_EQ(output.str(), "23");
}

TEST_F(linkedlists_test, test_case_print) {
	struct Node* head;
	head = InsertNth(NULL, 3, 0);
	head = InsertNth(head, 2, 0);
	head = InsertNth(head, 1, 0);
	
	Print(head);
	
	std::string output = output_stream.str();
	
	std::cout << output;
	
	ASSERT_EQ(output, "1\n2\n3\n");
}

} // namespace linkedlists
} // namespace datastructures
} // namespace bmgandre
} // namespace hackerrank

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
