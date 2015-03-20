/*
 * lista-1.cpp
 *
 * Pierwsze podejście do list.
 * Struktura węzła z konstruktorami, funkcja wyświetlająca elementy listy
 *
 * Repozytorium: https://github.com/ioResources/aisd
 */
 
#include <iostream>

using namespace std;

//struktura węzła listy
typedef struct Node {
    int data;
    Node* next;

    //konstruktor bezparametrowy
    Node() {
        this->next = NULL;
    }

    //konstruktor jednoparametrowy inicjalizujący pole data
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }

} Node;

//głowa listy
Node* head;

//funkcja wyświetlająca wszystkie elementy listy
void printList() {
    Node* current = head;
    while ( current != NULL ) {
        cout << current->data << endl;
        current = current->next;
    }
}

int main() {
    //pierwszy węzeł
    head = new Node();
    head->data = 5;

    //drugi węzeł
    head->next = new Node(10);

    //trzeci węzeł
    head->next->next = new Node(15);

    //wyświetlamy
    printList();

    return 0;
}
