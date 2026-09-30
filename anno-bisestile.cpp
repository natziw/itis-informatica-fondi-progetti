#include <iostream>
using namespace std;
int main() {
    int anno;
    cout << "Inserisci un anno (es. 2024, 1900, 2000): ";
    cin >> anno;

    cout << "\n--- Risultato ---" << endl;
    if ( (anno % 4 == 0 && anno % 100 != 0) || (anno % 400 == 0) ) {
        cout << anno << " e' BISESTILE - ha 366 giorni" << endl;
    }
    else {
        cout << anno << " non e' bisestile - ha 365 giorni" << endl;
    }
    return 0;
}