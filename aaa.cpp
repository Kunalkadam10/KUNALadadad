#include <iostream>
using namespace std;

class Node 
{
public:
    int data;
    Node *next;

    Node(int value){
        data = value;
        next = NULL;
    }
    void display(){
        cout << "Data: " << data << ", Next: " << next << endl;
    }
};

int main()
{
    Node *Head = NULL; // Initialize Head as NULL

    // Array of values to insert
    int arr[] = {2, 3, 4, 6, 8, 10};

    // Insert nodes at the beginning of the linked list
    for (int i = 0; i < 6; i++) 
    { 
        if (Head == NULL) {
            Head = new Node(arr[i]);
        } else {
            Node *temp = new Node(arr[i]);
            temp->next = Head;
            Head = temp;
        }
    }

    // Traverse and display the linked list
    Node *temp = Head;
    while (temp != NULL) {
        temp->display();   // Display the current node
        temp = temp->next; // Move to the next node
    }

    return 0;
}
