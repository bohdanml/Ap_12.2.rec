#include <iostream>
#include <unordered_set>

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

void printList(Node* head) {
    if (!head) {
        std::cout << std::endl;
        return;
    }
    std::cout << head->data << " ";
    printList(head->next);
}

void insert(Node*& head, int val) {
    Node* newNode = new Node(val);
    if (!head) {
        head = newNode;
        return;
    }
    insert(head->next, val);
}

bool areAllElementsInList(Node* L1, Node* L2) {
    if (!L1) {
        return true; // перевірка
    }
    if (!L2) {
        return false; // 
    }
    if (L1->data == L2->data) {
        return areAllElementsInList(L1->next, L2->next); // виклик наступних
    }
    return areAllElementsInList(L1, L2->next); //  наступного елемента L2 з одинаковим  L1
}

int main() {
    Node* L1 = nullptr;
    insert(L1, 4);
    insert(L1, 2);
    insert(L1, 9);

    Node* L2 = nullptr;
    insert(L2, 4);
    insert(L2, 2);
    insert(L2, 9);
    insert(L2, 3);

    std::cout << "List L1: ";
    printList(L1);
    std::cout << "List L2: ";
    printList(L2);

    if (areAllElementsInList(L1, L2)) {
        std::cout << "All elements of L1 are in L2." << std::endl;
    }
    else {
        std::cout << "Not all elements of L1 are in L2." << std::endl;
    }

    return 0;
}
