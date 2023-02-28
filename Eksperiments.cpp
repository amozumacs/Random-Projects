// Eksperiments.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <time.h>
using namespace std;
class elem {
public:
    int num;
    elem* next; // jauns datu tips
};

void add_back(elem*& first, int num) {
    elem* t = new elem{};
    t->num = num;
    t->next = 0; // jo elements būs "pēc"
    if (first == 0) first = t;
    else {
        elem* last = 0; // jauns mainīgais
        last = first;
        while (last->next != 0) last = last->next;
        // vienkārši while (last) nestrādā
        last->next = t;
    }
}   // liek jaunus elementus saraksta beigās

void print_list(elem* first) {
    elem* t = first;
    while (t) {
        cout << t->num << "  ";
        t = t->next;
    }
    cout << "saraksta beigas" << endl;
};
void add_front(elem*& first, int num) {
    elem* t = new elem{};
    t->num = num;
    t->next = first;
    first = t;
}   // liek jaunus elementus saraksta sākumā

// uzrakstīt metodi, kas, ja divi skaitļi pēc kārtas
// ir vienādi, palielina par 10 otru skaitli
void izmaina(elem* first) {
    for (elem* t = first; t->next != 0; t = t->next)
        if (t->num == t->next->num) t->next->num += 10;
};
int main()
{
    srand(time(NULL));
    elem* first = 0;
    cout << "\n Izdrukaaju 1. sarakst \n";
    for (int i = 0; i < 100000; i++) add_front(first, rand() % 26 + 65);

    srand(time(NULL));
    elem* second = 0;
    cout << "\n Izdrukaaju 1. sarakst \n";
    for (int i = 0; i < 100000; i++) add_back(second, rand() % 26 + 65);

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
