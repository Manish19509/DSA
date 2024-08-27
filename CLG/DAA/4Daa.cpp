// #include <iostream>

// using namespace std;

// // Node for doubly linked list
// struct DoublyNode
// {
//     int data;
//     DoublyNode *prev;
//     DoublyNode *next;
// };

// // Node for circular linked list
// struct CircularNode
// {
//     int data;
//     CircularNode *next;
// };

// // Doubly linked list class
// class DoublyLinkedList
// {
// private:
//     DoublyNode *head;

// public:
//     DoublyLinkedList() : head(nullptr) {}

//     void insertAtBeginning(int value)
//     {
//         DoublyNode *newNode = new DoublyNode();
//         newNode->data = value;
//         newNode->prev = nullptr;
//         newNode->next = head;

//         if (head != nullptr)
//         {
//             head->prev = newNode;
//         }
//         head = newNode;
//     }

//     void insertAtEnd(int value)
//     {
//         DoublyNode *newNode = new DoublyNode();
//         newNode->data = value;
//         newNode->next = nullptr;

//         if (head == nullptr)
//         {
//             newNode->prev = nullptr;
//             head = newNode;
//             return;
//         }

//         DoublyNode *temp = head;
//         while (temp->next != nullptr)
//         {
//             temp = temp->next;
//         }

//         temp->next = newNode;
//         newNode->prev = temp;
//     }

//     void deleteFromBeginning()
//     {
//         if (head == nullptr)
//         {
//             cout << "List is empty!" << endl;
//             return;
//         }

//         DoublyNode *temp = head;
//         head = head->next;

//         if (head != nullptr)
//         {
//             head->prev = nullptr;
//         }

//         delete temp;
//     }

//     void deleteFromEnd()
//     {
//         if (head == nullptr)
//         {
//             cout << "List is empty!" << endl;
//             return;
//         }

//         if (head->next == nullptr)
//         {
//             delete head;
//             head = nullptr;
//             return;
//         }

//         DoublyNode *temp = head;
//         while (temp->next != nullptr)
//         {
//             temp = temp->next;
//         }

//         temp->prev->next = nullptr;
//         delete temp;
//     }

//     void display()
//     {
//         DoublyNode *temp = head;
//         while (temp != nullptr)
//         {
//             cout << temp->data << " ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }
// };

// // Circular linked list class
// class CircularLinkedList
// {
// private:
//     CircularNode *head;

// public:
//     CircularLinkedList() : head(nullptr) {}

//     void insertAtBeginning(int value)
//     {
//         CircularNode *newNode = new CircularNode();
//         newNode->data = value;

//         if (head == nullptr)
//         {
//             newNode->next = newNode;
//             head = newNode;
//             return;
//         }

//         CircularNode *temp = head;
//         while (temp->next != head)
//         {
//             temp = temp->next;
//         }

//         newNode->next = head;
//         temp->next = newNode;
//         head = newNode;
//     }

//     void insertAtEnd(int value)
//     {
//         CircularNode *newNode = new CircularNode();
//         newNode->data = value;

//         if (head == nullptr)
//         {
//             newNode->next = newNode;
//             head = newNode;
//             return;
//         }

//         CircularNode *temp = head;
//         while (temp->next != head)
//         {
//             temp = temp->next;
//         }

//         temp->next = newNode;
//         newNode->next = head;
//     }

//     void deleteFromBeginning()
//     {
//         if (head == nullptr)
//         {
//             cout << "List is empty!" << endl;
//             return;
//         }

//         if (head->next == head)
//         {
//             delete head;
//             head = nullptr;
//             return;
//         }

//         CircularNode *temp = head;
//         while (temp->next != head)
//         {
//             temp = temp->next;
//         }

//         CircularNode *toDelete = head;
//         head = head->next;
//         temp->next = head;
//         delete toDelete;
//     }

//     void deleteFromEnd()
//     {
//         if (head == nullptr)
//         {
//             cout << "List is empty!" << endl;
//             return;
//         }

//         if (head->next == head)
//         {
//             delete head;
//             head = nullptr;
//             return;
//         }

//         CircularNode *temp = head;
//         CircularNode *prev = nullptr;

//         while (temp->next != head)
//         {
//             prev = temp;
//             temp = temp->next;
//         }

//         prev->next = head;
//         delete temp;
//     }

//     void display()
//     {
//         if (head == nullptr)
//         {
//             cout << "List is empty!" << endl;
//             return;
//         }

//         CircularNode *temp = head;
//         do
//         {
//             cout << temp->data << " ";
//             temp = temp->next;
//         } while (temp != head);
//         cout << endl;
//     }
// };

// int main()
// {
//     DoublyLinkedList dll;
//     CircularLinkedList cll;

//     int choice, value, listType, operation;

//     do
//     {
//         cout << "\n1. Doubly Linked List\n2. Circular Linked List\n3. Exit\nEnter the type of list: ";
//         cin >> listType;

//         if (listType == 3)
//             break;

//         cout << "1. Insert at Beginning\n2. Insert at End\n3. Delete from Beginning\n4. Delete from End\n5. Display\n6. Exit\nEnter your choice: ";
//         cin >> operation;

//         switch (operation)
//         {
//         case 1:
//             cout << "Enter the value to insert: ";
//             cin >> value;
//             if (listType == 1)
//                 dll.insertAtBeginning(value);
//             else
//                 cll.insertAtBeginning(value);
//             break;
//         case 2:
//             cout << "Enter the value to insert: ";
//             cin >> value;
//             if (listType == 1)
//                 dll.insertAtEnd(value);
//             else
//                 cll.insertAtEnd(value);
//             break;
//         case 3:
//             if (listType == 1)
//                 dll.deleteFromBeginning();
//             else
//                 cll.deleteFromBeginning();
//             break;
//         case 4:
//             if (listType == 1)
//                 dll.deleteFromEnd();
//             else
//                 cll.deleteFromEnd();
//             break;
//         case 5:
//             if (listType == 1)
//                 dll.display();
//             else
//                 cll.display();
//             break;
//         case 6:
//             break;
//         default:
//             cout << "Invalid choice!" << endl;
//         }
//     } while (operation != 6);

//     return 0;
// }

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

class CircularLinkedList
{
private:
    Node *tail;

public:
    CircularLinkedList() : tail(nullptr) {}

    void insertAtBeginning(int value)
    {
        Node *newNode = new Node();
        newNode->data = value;

        if (tail == nullptr)
        {
            tail = newNode;
            tail->next = tail;
        }
        else
        {
            newNode->next = tail->next;
            tail->next = newNode;
        }
    }

    void insertAtEnd(int value)
    {
        Node *newNode = new Node();
        newNode->data = value;

        if (tail == nullptr)
        {
            tail = newNode;
            tail->next = tail;
        }
        else
        {
            newNode->next = tail->next;
            tail->next = newNode;
            tail = newNode;
        }
    }

    void deleteFromBeginning()
    {
        if (tail == nullptr)
        {
            cout << "List is empty" << endl;
            return;
        }

        Node *temp = tail->next;
        if (tail == tail->next)
        {
            tail = nullptr;
        }
        else
        {
            tail->next = temp->next;
        }
        delete temp;
    }

    void deleteFromEnd()
    {
        if (tail == nullptr)
        {
            cout << "List is empty" << endl;
            return;
        }

        Node *temp = tail->next;
        if (tail == tail->next)
        {
            delete tail;
            tail = nullptr;
        }
        else
        {
            while (temp->next != tail)
            {
                temp = temp->next;
            }
            temp->next = tail->next;
            delete tail;
            tail = temp;
        }
    }

    void display()
    {
        if (tail == nullptr)
        {
            cout << "List is empty" << endl;
            return;
        }

        Node *temp = tail->next;
        do
        {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != tail->next);
        cout << endl;
    }
};

int main()
{
    CircularLinkedList cll;
    int choice, value;

    while (true)
    {
        cout << "Circular Linked List:" << endl;
        cout << "1. Insert at Beginning" << endl;
        cout << "2. Insert at End" << endl;
        cout << "3. Delete from Beginning" << endl;
        cout << "4. Delete from End" << endl;
        cout << "5. Display" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value to insert at beginning: ";
            cin >> value;
            cll.insertAtBeginning(value);
            break;
        case 2:
            cout << "Enter value to insert at end: ";
            cin >> value;
            cll.insertAtEnd(value);
            break;
        case 3:
            cll.deleteFromBeginning();
            break;
        case 4:
            cll.deleteFromEnd();
            break;
        case 5:
            cll.display();
            break;
        case 6:
            exit(0);
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
