#include <list>
#include <time.h>
#include <iostream>
using namespace std;

void insert(list<int>& list) {
    int count;
    int i = 0;
    srand(time(NULL));
    cout << "Input how many numbers you want" << endl;
    do {
        cin >> count;
    } while (count < 1); // nevar izvēlēties ievadīt <=0 skaitļus
    do {
        int num = 111 * (rand() % 9 + 1);
        list.push_back(num); // pievieno beigās jaunu elementu(num, random elementu)
        cout << i + 1 << ". Number Added" << endl;;
        i++;
    } while (count != i); // darbojas līdz i ir vienāds ar lietotāja izvēlētu skaitli
}