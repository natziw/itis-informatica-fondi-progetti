#include <iostream>
#include <cmath> // ci serve per cos() e sin()
using namespace std;

int main() {
    double angoloGradi;
    cout << "Inserisci l'angolo in gradi (es. 90, 180, 810): ";
    cin >> angoloGradi;

    // 1. I computer ragionano in radianti, non in gradi
    // formula: radianti = gradi * pigreco / 180
    double pi = 3.1415926535;
    double angoloRad = angoloGradi * pi / 180.0;

    // 2. Calcoliamo cos e sin (sono x e y del punto P della prof)
    double xP = cos(angoloRad);
    double yP = sin(angoloRad);

    // Arrotondiamo per togliere gli 0.0000001 sporchi del computer
    if (abs(xP) < 0.0001) xP = 0;
    if (abs(yP) < 0.0001) yP = 0;

    cout << "\n--- Risultato ---" << endl;
    cout << "Angolo: " << angoloGradi << " gradi = " << angoloRad << " radianti" << endl;
    cout << "P(xP, yP) = (" << xP << ", " << yP << ")" << endl;
    cout << "cos(" << angoloGradi << ") = " << xP << "  -> e' la x di P" << endl;
    cout << "sin(" << angoloGradi << ") = " << yP << "  -> e' la y di P" << endl;

    // 3. Troviamo quadrante + punti A,B,C,D
    cout << "\nPosizione: ";
    if (xP == 1 && yP == 0) {
        cout << "PUNTO A (1, 0) - sta sull'asse X positivo - 0 gradi" << endl;
    }
    else if (xP == 0 && yP == 1) {
        cout << "PUNTO B (0, 1) - sta sull'asse Y positivo - 90 gradi" << endl;
    }
    else if (xP == -1 && yP == 0) {
        cout << "PUNTO C (-1, 0) - sta sull'asse X negativo - 180 gradi" << endl;
    }
    else if (xP == 0 && yP == -1) {
        cout << "PUNTO D (0, -1) - sta sull'asse Y negativo - 270 gradi" << endl;
    }
    else if (xP > 0 && yP > 0) {
        cout << "I QUADRANTE" << endl;
       }
       else if (xP < 0 && yP > 0) {
       cout << "II QUADRANTE" << endl;
      }
    else if (xP < 0 && yP < 0) {
    cout << "III QUADRANTE" << endl;
    }
    else if (xP > 0 && yP < 0) {
    cout << "IV QUADRANTE" << endl;
    }
    else {
    cout << "Errore - non dovrebbe succedere" << endl;
}
    return 0;
}        