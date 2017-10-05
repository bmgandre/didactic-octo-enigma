#include "linkedlists.h"
#include <cstddef>
#include <iostream>

using namespace hackerrank::bmgandre::datastructures;

void linkedlists::Print(Node *head)
{
    Node* current = head;
    while (current) {
        std::cout << current->data << std::endl;
        current = current->next;
    }
    // This is a "method-only" submission.
    // You only need to complete this method.
}

linkedlists::Node* linkedlists::Insert(Node *head, int data)
{
    Node* node = new Node;
    node->data = data;
    node->next = NULL;

    if (head == NULL)
        return node;

    Node* current = head;
    while (current->next != NULL)
        current = current->next;

    current->next = node;

    return head;
}

linkedlists::Node* linkedlists::InsertNth(Node *head, int data, int position)
{
    Node* node = new Node;
    node->data = data;
    node->next = NULL;

    if (head == NULL)
        return node;

    if (position == 0) {
        node->next = head;
        return node;
    }

    Node* current = head;
    while (current->next != NULL && position > 1) {
        current = current->next;
        position--;
    }

    node->next = current->next;
    current->next = node;

    return head;
}
