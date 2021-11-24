#include <iostream>

using namespace std;

void program1()
{
	// se citeste n de la tastatura; se cer nr pare, pozitive, distincte, in ordine ai. suma lor nu depaseste n
	int n;
	int s = 2;
	int nr_curent = 2;

	cout << "n= ";
	cin >> n;

	while (s <= n)
	{
		// ce executam intr-un pas al while-ului
		cout << nr_curent << " ";
		nr_curent = nr_curent + 2;

		/*if (s + nr_curent > n)
		{
			cout << endl << "suma este: " << s << endl;
		}*/

		// ce pregatim pentru pasul urmator;
		s = s + nr_curent;
	}
	/*cout << endl;
	cout << "ultimul numar este: " << nr_curent << endl;
	cout << "suma (cu tot cu ultimul nr) este: " << s << endl;
	cout << "suma fara ultimul: " << s - nr_curent << endl;*/
}
void program2()
{
	//Sa se afiseze primii n termeni ai sirului lui Fibonacci
	int nr_1 = 1;
	int nr_2 = 1;
	int nr_3 = 2;
	int n;
	cin >> n;

	if (n <= 0)
		cout << " - " << endl;
	else if (n == 1)
		cout << 1 << endl;
	else if (n == 2)
		cout << 1 << " " << 1 << endl;
	else if (n == 3)
		cout << 1 << " " << 1 << " " << 2 << endl;
	else
	{
		cout << 1 << " " << 1 << " " << 2 << " ";
		//  1  1  2  3
		for (int i = 4; i <= n; i++)
		{
			// >> varianta 1 << 
			//// actualizam nr1 si nr2
			//nr_1 = nr_2; // [1] > 1
			//nr_2 = nr_3; // [2] > 2
			//         
			//// calculam n3
			//nr_3 = nr_1 + nr_2;

			// >> varianta 2 << 
			// calculam n3
			int tmp = nr_3;
			nr_3 = nr_3 + nr_2;
			nr_1 = nr_2;
			nr_2 = tmp;

			// afisam nr3
			cout << nr_3 << " ";
		}
	}
	cout << endl;
}
int main()
{
	
	//program1();
	program2();

	//Se citesc de la tastatura numere naturale (cel putin 3) pana cand antepenultimul + penultimul = ultimul. Sa se afiseze suma numerelor citite.
	//Ex.daca citim 3 5 2 4 6 se va opri citirea dupa citirea lui 6 si se va afisa 20.

	//Se citesc 3 numere intregi. Sa se afiseze cel mai mare dintre ele.

	//Se citesc doua numere intregi a si b.Daca a divide pe b sau b divide pe a atunci sa se afiseze catul impartirii celui mai mare la cel mai mic, iar altfel restul impartirii celui mai mare la cel mai mic.

	//Se citeste un numar intreg a reprezetand un an. Sa se verifice daca a este an bisect.


	return 0;
}
