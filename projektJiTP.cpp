// Odleglosc Levenshteina
//#include "stdafx.h"
#include "levenshteindistance.h"
#include <Windows.h>

int main()
{
	string s1, s2;
	int len1, len2, **odl;
	bool isNotOk = true;
	while(isNotOk)
    {   cout << "Program wyznacza odleglosc edycyjna \n(odleglosc Levenshteina) dla podanych ciagow.\n";
        cout << "\nWyswietlona zostanie ilosc krokow \noraz operacje jakie nalezy wykonac,\n";
        cout << "aby przeksztalcic pierwszy ciag znakow w drugi.\n\n";
        cout << "Wpisz pierwszy ciag: "; getline(cin, s1);
        len1 = s1.length();
        cout << "Wpisz drugi ciag: "; getline(cin, s2);
        len2 = s2.length();
        if (!len1 || !len2)
        {   system("CLS");
            cout<<"Musisz wprowadzic obydwa ciagi.";
            cout<<"\nWprowadz jeszcze raz:\n\n";
            Sleep(2000);
        }else
        {   isNotOk = false;
            odl = new int *[len1+1];
            for (int i = 0; i < len1+1; i++)
                odl[i] = new int[len2+1];

            /* -- PROGRAM -- */
            levenshtein(odl, len1, len2, s1, s2);
            show_matrix(odl, len1, len2, s1, s2);
            edits(odl, len1, len2, s1, s2);
            /* -- KONIEC -- */

            for (int i = 0; i < len1 + 1; i++) delete[] odl[i];
            delete[] odl;
            odl = NULL;
        }
    }
	std::cout << endl << endl;
	std::system("PAUSE");
    return 0;
}
