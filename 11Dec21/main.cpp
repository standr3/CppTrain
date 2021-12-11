#include <iostream>

using namespace std;

int main()
{

    /*
    int a = 3;
    int b = 23 - a;

    //y += x;	y = y + x;
    //++a; a++;  a+=1; a = a + 1;
    a = 0;
    b = a; a = a+1;
    cout << "a: " << a << "b: " << b << endl;

    a = 0;
    a = a+1; b = a;
    cout << "a: " << a << "b: " << b << endl;
    */

    //se citesc 3 nr naturale , se cere : suma dintre primul si al doilea si suma celor 3 numere;
    /*
    int a,b,c;
    int suma12, suma123;

    cin >> a >> b >> c;
    suma12 = a+b;
    suma123 = suma12+c;
    cout << suma12 << endl;
    cout << suma123 << endl;
    */
    //n numar natural din 3 cifre, se cer cifrele sale incepand cu cifra unitatilor;
    /*
    int n;
    cin >> n; // 435

    if (n >= 100 && n <= 999)
    {
        cout << n % 10 <<',';
        cout << n % 100 / 10 <<','; // n / 10 % 10
        cout << n / 100;
        ----SAU---
        cout << n % 10;  ->5
        n = n / 10;      ->n=43
        cout << n % 10;  ->3
        n = n / 10;      ->n=4
        cout << n;       ->4

    }
    */
    //exercitiul 15
    /*
    int x, sum = 0;
    cin >> x;
    //cout << x%10 + x%100 + x%1000;
    //2347
    x = x%1000;
    sum = sum + x;
    x = x%100;
    sum = sum + x;
    x = x%10;
    sum = sum + x;

    cout << sum;
    */
    
    /*
    int a,b,c;
    cin >> a >> b;
    c = b;
    b = a;
    a = c;
    cout << a << " " << b << endl;
    */
    // DETERMINARE PRIM
    int a;
    cin >> a;
    int prim = 1;
    for(int i = 2; i <= a/2; i++)
    {
        if (a%i == 0)
            prim = 0;
    }
    if (prim == 1)
        cout << "prim" << endl;
    
    return 0;
}


