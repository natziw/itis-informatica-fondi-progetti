// Autore: natziw - 4a ITIS Fondi - 2026
// Progetto 3 - Calcolo media scolastica e universitaria
// (media ponderata CFU)

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Quanti voti hai? ";
    cin >> n;

    double somma = 0;
    double sommaPesi = 0;
    
    for(int i = 1; i <= n; i++) {
        double voto, peso;
        cout << "\nVoto " << i << ": ";
        cin >> voto;
        cout << "Peso (1 se non hai pesi, altrimenti CFU/crediti): ";
        cin >> peso;
        
        somma += voto * peso;
        sommaPesi += peso;
    }

    double media = somma / sommaPesi;
    
    cout << "\n-----------------------\n";
    cout << "Media: " << media << endl;

    if(media >= 6) {
        cout << "Sei sopra la sufficienza! :)" << endl;
    } else {
        double mancante = 6 * sommaPesi - somma;
        cout << "Ti mancano " << mancante << " punti ponderati per arrivare a 6" << endl;
    }
    
    if(media >= 9) cout << "Ottimo lavoro!" << endl;
    
    return 0;
}