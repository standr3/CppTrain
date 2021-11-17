#include <iostream>

using namespace std;

int main()
{

    /*
    // >>definirea datelor
    i <- 0
    (n <- 0)

    // >>colectam date
    // cati elevi avem?
    // n
    citeste n;
    // ce varste au?
    // ii verificam pe fiecare
    pentru fiecare elev
        aflam(retinem) o varsta


    // ce ma intereseaza
    // cel mai mare elev ca varsta
    // >> prelucrare
    maxim_varsta <- maximul din varste_elevi;
    */

    /*
    int n;

    cout << "Salutare" << endl;
    cin >> n; // citire de la tastatura
    cout << n; // afisare valoarea variabilei intregi n
    */

    //Declaram variabile
    int n;
    int a;
    int maxim;
    int i;
    //Citire date
    cout << "Introduceti numarul de intregi: n = ";
    cin >> n;                   // citeste n;
    cout << "Introduceti primul numar: a = ";
    cin >> a;                   // citeste a;

    maxim = a;                  // max <- a;
    for (i = 2; i <= n; i++) {  // pentru i<-2,n executa
        cout << "Introduceti al " << i << "-lea numar: a = ";
        cin >> a;               //      citeste a;
        if (a > maxim) {        //      daca a > max
            maxim = a;          //          atunci max <- a;
        }                       //      sfarsit_daca;
    }                           // sfarsit_pentru;
    //Afisare rezultat
    //cout << "Maximul rezultat este: ";
    cout << "Maximul rezultat este: " << maxim << endl;      // scrie max;

    return 0;
}


