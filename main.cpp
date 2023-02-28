#include <fstream> // darbam ar failiem
#include <iostream>
using namespace std;
int main() {
    fstream f; // "f" ir faila lokālais nosaukums programmas ietvaros
    char c;    // tieši šī rinda arī nosaka veidu, kādā tiks nolasīts fails
    int garums = 0;
    f.open("lab19.txt", ios::in); // būtiski norādīt, vai nolasam, vai ierakstām
    while (f) {
        garums++;  // skaitām simbolus
        f.get(c);  // nolasām simbolu
        cout << c; // drukāju uz ekrāna
    };
    f.close();
    cout << "Simbolu skaits faila : " << garums << endl;
}
