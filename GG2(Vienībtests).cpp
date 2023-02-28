/*
* Izveidot divas programmas valodā C++, kas strādā ar vērtību virkni divos dažādos veidos:
  1) to realizējot kā vienvirziena saistīto sarakstu, izmantojot dinamiskas datu struktūras,
  2) izmantojot STL::list konteineru.
Abās realizācijās ir jāizveido prasītā specifiskā vērtību virknes apstrādes funkcija un jānodemonstrē tā darbībā,
cita starpā parādot gan sākotnējās, gan rezultējošās vērtības.
Abās programmās:
  a) jābūt iespējai ievadīt saraksta elementus (izveidot patvaļīgu sarakstu),
  b) jāpielieto uzrakstītā funkcija sarakstam,
  c) jāizdrukā saraksts pēc funkcijas darbības.
  d) beigās jāiznīcina saraksts - korekti jāatbrīvo izdalītā atmiņa(lietojot delete vai clear).
Sīkākas prasības sk. Laboratorijas darbu noteikumos.

G2. Uzrakstīt funkciju, kas salīdzina, vai divi saraksti ir vienādi.


GG – STL list un saistītais saraksts ar izņēmumsituāciju apstrādi un vienībtestēšanu**.

* atrisināt uzdevumu G divos veidos:
  a) izmantojot dinamiskas datu struktūras (saistīto sarakstu vtml.),
  b) izmantojot STL::list konteineru.

** tas pats uzdevums, kas G, bet tā risinājums (a) jāpapildina ar divām lietām:
  1) vismaz viena no datu pārbaudēm jārealizē, izmantojot izņēmumsituāciju apstrādes (exception handling) mehānismu,
  2) vismaz viena funkcija (vēlams, galvenā) ir jānotestē, izmantojot vienībtestēšanu, kur attiecīgā funkcija būtu jāpārbauda uz vismaz trīs dažādiem nosacījumiem;
     šim nolūkam, kā minimums, ir nepieciešams:
          (1) šo funkciju iznest ārā citā failā (nekā funkcija main),
          (2) izveidot otru projektu speciāli šīs funkcijās testēšanai (tātad, kopā būs divi projekti, parastais, kas izmantos funkciju, otrais, kas testēs).

Papildus norāde: šādam vienībtestēšanas projektam daļēji atbilst iepriekšējā semestra pēdējais laboratorijas darbs (ar klasēm) ar cieti iekodētu main funkciju

Izveidoja Aigars Mozumačs,am21183
Programma tika izveidota 29.05.2022
*/


// Tiek testēta funkcija insert
#include <algorithm>
#include <list>
#include <iostream>
#include <time.h>
#include "Header.h"
using namespace std;

void print(list<int> const& list)
{
    for (auto const& i : list) { // iterators iet cauri elementiem
        cout << i;
        cout << endl;
    }
}
void check(list<int> list1, list<int> list2) { // pārbauda vai vienādi saraksti
    if (list1 == list2) {
        cout << "Lists are the same" << endl;;
    }
    else {
        cout << "Lists are not the same" << endl;
    }
}

// Count == 1
bool test1() {
    list<int> list;
    insert(list);
    int size = list.size();
    auto it = list.begin();
    return list.size() == 1 and *it == 666;
}
// Count == 2
bool test2() {
    list<int> list;
    insert(list);
    int size = list.size();
    auto it = list.begin();
    return list.size() == 2 and *it == 111 and *(++it) == 555;
}
//  Count == 3
bool test3() {
    list<int> list;
    insert(list);
    int size = list.size();
    auto it = list.begin();
    return list.size() == 3 && *it == 333 && *(++it) == 222 && *(++it) == 999;
}

int main()
{
    char answer = 'Y';
    while (answer == 'Y' or answer == 'y') {
  
        cout << "Tests 1 :" << (test1() ? "Izdevas" : "Neizdevas") << endl;
       cout << "Tests 2 :" << (test2() ? "Izdevas" : "Neizdevas") << endl;
       cout << "Tests 3 :" << (test3() ? "Izdevas" : "Neizdevas") << endl;

        cout << "Vai just velaties turpinat?(Y/N)" << endl;
        do {
            cin >> answer;
        } while (answer != 'n' and answer != 'N' and answer != 'y' and answer != 'Y');
        if (answer == 'N' or answer == 'n') {
            cout << "Paldies par darbinasanu!" << endl;
        }
    }

}
