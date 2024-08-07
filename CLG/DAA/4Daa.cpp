// #include <iostream>

// using namespace std;

// // Node structure for Singly Linked List
// struct Node
// {
//     int data;
//     Node *next;

//     Node(int val) : data(val), next(nullptr) {}
// };

// // Insert a new node at the beginning of the list
// void insertAtBeginning(Node *&head, int newData)
// {
//     Node *newNode = new Node(newData);
//     newNode->next = head;
//     head = newNode;
// }

// // Insert a new node at the end of the list
// void insertAtEnd(Node *&head, int newData)
// {
//     Node *newNode = new Node(newData);
//     if (head == nullptr)
//     {
//         head = newNode;
//         return;
//     }
//     Node *temp = head;
//     while (temp->next != nullptr)
//     {
//         temp = temp->next;
//     }
//     temp->next = newNode;
// }

// // Delete the node at the beginning of the list
// void deleteFromBeginning(Node *&head)
// {
//     if (head == nullptr)
//         return;
//     Node *temp = head;
//     head = head->next;
//     delete temp;
// }

// // Delete the node at the end of the list
// void deleteFromEnd(Node *&head)
// {
//     if (head == nullptr)
//         return;
//     if (head->next == nullptr)
//     {
//         delete head;
//         head = nullptr;
//         return;
//     }
//     Node *temp = head;
//     while (temp->next->next != nullptr)
//     {
//         temp = temp->next;
//     }
//     delete temp->next;
//     temp->next = nullptr;
// }

// // Print the linked list
// void printList(Node *head)
// {
//     Node *temp = head;
//     while (temp != nullptr)
//     {
//         cout << temp->data << " -> ";
//         temp = temp->next;
//     }
//     cout << "NULL" << endl;
// }

// int main()
// {
//     Node *head = nullptr;

//     // Insert elements at the beginning
//     insertAtBeginning(head, 3);
//     insertAtBeginning(head, 2);
//     insertAtBeginning(head, 1);
//     cout << "After inserting at the beginning: ";
//     printList(head);

//     // Insert elements at the end
//     insertAtEnd(head, 4);
//     insertAtEnd(head, 5);
//     cout << "After inserting at the end: ";
//     printList(head);

//     // Delete elements from the beginning
//     deleteFromBeginning(head);
//     cout << "After deleting from the beginning: ";
//     printList(head);

//     // Delete elements from the end
//     deleteFromEnd(head);
//     cout << "After deleting from the end: ";
//     printList(head);

//     return 0;
// }

// #include <iostream>

// using namespace std;

// // Node structure for Doubly Linked List
// struct DoublyNode
// {
//     int data;
//     DoublyNode *next;
//     DoublyNode *prev;

//     DoublyNode(int val) : data(val), next(nullptr), prev(nullptr) {}
// };

// // Node structure for Circular Linked List
// struct CircularNode
// {
//     int data;
//     CircularNode *next;

//     CircularNode(int val) : data(val), next(this) {}
// };

// // Doubly Linked List Operations

// void insertAtBeginning(DoublyNode *&head, int newData)
// {
//     DoublyNode *newNode = new DoublyNode(newData);
//     newNode->next = head;
//     if (head != nullptr)
//     {
//         head->prev = newNode;
//     }
//     head = newNode;
// }

// void insertAtEnd(DoublyNode *&head, int newData)
// {
//     DoublyNode *newNode = new DoublyNode(newData);
//     if (head == nullptr)
//     {
//         head = newNode;
//         return;
//     }
//     DoublyNode *temp = head;
//     while (temp->next != nullptr)
//     {
//         temp = temp->next;
//     }
//     temp->next = newNode;
//     newNode->prev = temp;
// }

// void deleteFromBeginning(DoublyNode *&head)
// {
//     if (head == nullptr)
//         return;
//     DoublyNode *temp = head;
//     head = head->next;
//     if (head != nullptr)
//     {
//         head->prev = nullptr;
//     }
//     delete temp;
// }

// void deleteFromEnd(DoublyNode *&head)
// {
//     if (head == nullptr)
//         return;
//     if (head->next == nullptr)
//     {
//         delete head;
//         head = nullptr;
//         return;
//     }
//     DoublyNode *temp = head;
//     while (temp->next != nullptr)
//     {
//         temp = temp->next;
//     }
//     temp->prev->next = nullptr;
//     delete temp;
// }

// void printDoublyList(DoublyNode *head)
// {
//     DoublyNode *temp = head;
//     while (temp != nullptr)
//     {
//         cout << temp->data << " <-> ";
//         temp = temp->next;
//     }
//     cout << "NULL" << endl;
// }

// // Circular Linked List Operations

// void insertAtBeginning(CircularNode *&head, int newData)
// {
//     CircularNode *newNode = new CircularNode(newData);
//     if (head == nullptr)
//     {
//         head = newNode;
//         return;
//     }
//     CircularNode *temp = head;
//     while (temp->next != head)
//     {
//         temp = temp->next;
//     }
//     temp->next = newNode;
//     newNode->next = head;
//     head = newNode;
// }

// void insertAtEnd(CircularNode *&head, int newData)
// {
//     CircularNode *newNode = new CircularNode(newData);
//     if (head == nullptr)
//     {
//         head = newNode;
//         return;
//     }
//     CircularNode *temp = head;
//     while (temp->next != head)
//     {
//         temp = temp->next;
//     }
//     temp->next = newNode;
//     newNode->next = head;
// }

// void deleteFromBeginning(CircularNode *&head)
// {
//     if (head == nullptr)
//         return;
//     if (head->next == head)
//     {
//         delete head;
//         head = nullptr;
//         return;
//     }
//     CircularNode *temp = head;
//     CircularNode *last = head;
//     while (last->next != head)
//     {
//         last = last->next;
//     }
//     head = head->next;
//     last->next = head;
//     delete temp;
// }

// void deleteFromEnd(CircularNode *&head)
// {
//     if (head == nullptr)
//         return;
//     if (head->next == head)
//     {
//         delete head;
//         head = nullptr;
//         return;
//     }
//     CircularNode *temp = head;
//     while (temp->next->next != head)
//     {
//         temp = temp->next;
//     }
//     delete temp->next;
//     temp->next = head;
// }

// void printCircularList(CircularNode *head)
// {
//     if (head == nullptr)
//         return;
//     CircularNode *temp = head;
//     do
//     {
//         cout << temp->data << " -> ";
//         temp = temp->next;
//     } while (temp != head);
//     cout << "(head)" << endl;
// }

// // Main Function
// int main()
// {
//     // Doubly Linked List
//     DoublyNode *doublyHead = nullptr;
//     cout << "Doubly Linked List Operations:\n";
//     insertAtBeginning(doublyHead, 10);
//     insertAtBeginning(doublyHead, 20);
//     insertAtEnd(doublyHead, 30);
//     insertAtEnd(doublyHead, 40);
//     printDoublyList(doublyHead);
//     deleteFromBeginning(doublyHead);
//     deleteFromEnd(doublyHead);
//     printDoublyList(doublyHead);

//     // Circular Linked List
//     CircularNode *circularHead = nullptr;
//     cout << "\nCircular Linked List Operations:\n";
//     insertAtBeginning(circularHead, 100);
//     insertAtBeginning(circularHead, 200);
//     insertAtEnd(circularHead, 300);
//     insertAtEnd(circularHead, 400);
//     printCircularList(circularHead);
//     deleteFromBeginning(circularHead);
//     deleteFromEnd(circularHead);
//     printCircularList(circularHead);

//     return 0;
// }



// doubly with circular
#include <iostream>

using namespace std;

// Node structure for Doubly Circular Linked List
struct DoublyCircularNode {
    int data;
    DoublyCircularNode* next;
    DoublyCircularNode* prev;

    DoublyCircularNode(int val) : data(val), next(nullptr), prev(nullptr) {}
};

// Insert a new node at the beginning of the list
void insertAtBeginning(DoublyCircularNode*& head, int newData) {
    DoublyCircularNode* newNode = new DoublyCircularNode(newData);
    if (head == nullptr) {
        newNode->next = newNode;
        newNode->prev = newNode;
        head = newNode;
        return;
    }
    DoublyCircularNode* last = head->prev;

    newNode->next = head;
    newNode->prev = last;
    last->next = newNode;
    head->prev = newNode;
    head = newNode;
}

// Insert a new node at the end of the list
void insertAtEnd(DoublyCircularNode*& head, int newData) {
    DoublyCircularNode* newNode = new DoublyCircularNode(newData);
    if (head == nullptr) {
        newNode->next = newNode;
        newNode->prev = newNode;
        head = newNode;
        return;
    }
    DoublyCircularNode* last = head->prev;

    newNode->next = head;
    newNode->prev = last;
    last->next = newNode;
    head->prev = newNode;
}

// Delete the node at the beginning of the list
void deleteFromBeginning(DoublyCircularNode*& head) {
    if (head == nullptr) return;

    DoublyCircularNode* last = head->prev;

    if (head == head->next) {  // Only one node in the list
        delete head;
        head = nullptr;
        return;
    }

    DoublyCircularNode* temp = head;
    head = head->next;
    head->prev = last;
    last->next = head;

    delete temp;
}

// Delete the node at the end of the list
void deleteFromEnd(DoublyCircularNode*& head) {
    if (head == nullptr) return;

    DoublyCircularNode* last = head->prev;

    if (head == head->next) {  // Only one node in the list
        delete head;
        head = nullptr;
        return;
    }

    DoublyCircularNode* temp = last->prev;
    temp->next = head;
    head->prev = temp;

    delete last;
}

// Print the Doubly Circular Linked List
void printDoublyCircularList(DoublyCircularNode* head) {
    if (head == nullptr) return;

    DoublyCircularNode* temp = head;
    do {
        cout << temp->data << " <-> ";
        temp = temp->next;
    } while (temp != head);
    cout << "(head)" << endl;
}

// Main function to demonstrate the operations
int main() {
    DoublyCircularNode* head = nullptr;

    // Insert elements at the beginning
    insertAtBeginning(head, 10);
    insertAtBeginning(head, 20);
    insertAtBeginning(head, 30);
    cout << "After inserting at the beginning: ";
    printDoublyCircularList(head);

    // Insert elements at the end
    insertAtEnd(head, 40);
    insertAtEnd(head, 50);
    cout << "After inserting at the end: ";
    printDoublyCircularList(head);

    // Delete elements from the beginning
    deleteFromBeginning(head);
    cout << "After deleting from the beginning: ";
    printDoublyCircularList(head);

    // Delete elements from the end
    deleteFromEnd(head);
    cout << "After deleting from the end: ";
    printDoublyCircularList(head);

    return 0;
}
