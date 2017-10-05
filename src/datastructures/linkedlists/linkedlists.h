namespace hackerrank {
namespace bmgandre {
namespace datastructures {
namespace linkedlists {

struct Node {
    int data;
    struct Node *next;
};

Node* InsertNth(Node *head, int data, int position);
void Print(Node *head);
Node* Insert(Node *head, int data);

} // namespace linkedlists
} // namespace datastructures
} // namespace bmgandre
} // namespace hackerrank
