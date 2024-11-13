#include <iostream> 

using namespace std; 

  

int main() { 

    char kategoria; 

    int godziny; 

    double stawka, zarobki_brutto, zarobki_netto; 

    const double PODATEK1 = 0.15;  

    const double PODATEK2 = 0.20;  

    const double PODATEK3 = 0.25;  

  

    cout << "Podaj kategorie  (A, B, C, D): "; 

    cin >> kategoria; 

    cout << "Ile pracowales w tygodniu: "; 

    cin >> godziny; 

  

    switch (kategoria) { 

        case 'A': 

            stawka = 15.0; 

            break; 

        case 'B': 

            stawka = 25.0; 

            break; 

        case 'C': 

            stawka = 30.0; 

            break; 

        case 'D': 

            stawka = 35.0; 

            break; 

        default: 

            cout << "Invalidoooo!" << endl; 

            return 1; 

    } 

  

    if (godziny > 40) { 

        zarobki_brutto = 40 * stawka + (godziny - 40) * stawka * 2; 

    } else { 

        zarobki_brutto = godziny * stawka; 

    } 

  

    if (zarobki_brutto < 700) { 

        zarobki_netto = zarobki_brutto * (1 - PODATEK1); 

    } else if (zarobki_brutto <= 1200) { 

        zarobki_netto = zarobki_brutto * (1 - PODATEK2); 

    } else { 

        zarobki_netto = zarobki_brutto * (1 - PODATEK3); 

    } 

  

    cout << "Prawie twoje: " << zarobki_brutto << " zl" << endl; 

    cout << "Twoje: " << zarobki_netto << " zl" << endl; 

  

    return 0; 

} 
