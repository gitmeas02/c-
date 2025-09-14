#include <iostream>
using namespace std;

struct EmptyList {
    int data;
    EmptyList* next;
    EmptyList(int data) {
        this->data = data;
        next = NULL;
    }
};

void insert(EmptyList** root, int item) {
    EmptyList* temp = new EmptyList(item);
    temp->next = *root;
    *root = temp;
}

void printReverse(EmptyList* node) {
    if (node == NULL) {
        cout << "NULL";
        return;
    }
    printReverse(node->next);
    cout << " <- " << node->data;
}

int main() {
    EmptyList* root = NULL;

    insert(&root, 12);
    insert(&root, 13);
    insert(&root, 14);

    printReverse(root);
    cout << endl;

    return 0;
}