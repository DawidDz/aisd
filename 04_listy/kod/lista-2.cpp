/*
 * lista-2.cpp
 *
 * Funkcje operujące na liście: next(), hasNext(), gotoHead() i addToHead()
 *
 * Repozytorium: https://github.com/ioResources/aisd
 */

#include <iostream>

using namespace std;

//struktura węzła listy
typedef struct Node {
    int data;
    Node* next;

    //konstruktory
    Node() {
        this->next = NULL;
    }

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
} Node;

//wskaźnik na początek listy
Node* head = NULL;
//wskaźnik na bieżący węzeł
Node* current = NULL;

//funkcja przeskakuje węzeł i zwraca zapisaną w nim wartość
int next() {
    int data = current->data;
    current = current->next;
    return data;
}

//funkcja sprawdza, czy można przeskoczyć węzeł
bool hasNext() {
    return current != NULL;
}

//funkcja przechodzi na początek listy
void gotoHead() {
    current = head;
}

//funkcja wyświetla całą listę
void printList() {
    Node* current = head;
    while (current != NULL) {
        cout << current->data << endl;
        current = current->next;
    }
}

//funkcja wstawia przekazany element na początek listy
void addToHead(Node* node) {
    node->next = head;
    head = node;
    current = node;
}


int main() {

    addToHead( new Node(5) );
    addToHead( new Node(10) );
    addToHead( new Node(15) );
    printList();

    gotoHead(); //przechodzimy na początek listy
    if (hasNext())  //jeśli możemy...
        cout << next() << endl; //przeskakujemy element i wyświetlamy jego wartość

    return 0;
}
