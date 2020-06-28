#include "std_lib_facilities.h"
using namespace std;



int main()
{
    int numer;
    bool x=1;
    cout << "Witajcie programisci!\nZaczymamy!";
    cout <<"Wybierz numer!\n";

    while (x)
    {


        cout << "1.Jak dojsc do sklepu?\n";
        cout << "2.Gdzie jest bankomat?\n";
        cout << "3.Ktoredy do kosciola?\n";
        cout << "4.Jak dojechac do myjni?\n";
        cout << "5.Jak dojsc do przystanku autobusowego?\n";
        cout << "Wcisnij 0, by zakonczyc.\n";
        cin >> numer;
        if(numer==0)
        {
            x=0;
            cout <<"Dziekujemy, Zapraszamy ponownie.\n";
        }
        else if (numer == 1)
        {
            cout << "Wyjdz z domu na ulice.Nastepnie skrec w lewo.\n";
            cout << "Po 300 metrach na skrzyzowaniu , skrec w lewo.\n";
            cout << "Po 200 metrach skrec w prawo na parking.\n";
            cout << "Gratulacje, dotarles do sklepu.\n";
        }
        else if (numer == 2)
        {
            cout << "Wyjdz z domu na ulice.Nastepnie skrec w lewo.\n";
            cout << "Kieruj sie 2 kilometry proston\n";
            cout << "Gratulacje, bankomat znajduje sie po prawej stronie\n";
        }
        else if (numer == 3)
        {
            cout << "Wyjdz z domu na ulice.Nastepnie skrec w lewo.\n";
            cout << "Kieruj sie 300 metrow do skrzyzowania i skrec w prawo.\n";
            cout << " Po 150 metrach skrec w lewo w waska uliczke.\n";
            cout << " Gratulacje, dotarles na miejsce!!!\n";
        }
        else if (numer == 4)
        {
            cout << "Wyjdz z domu na ulice.Nastepnie skrec w lewo.\n";
            cout << "Po przebyciu 300 metrow, na skrzyzowaniu kieruj sie prosto.\n";
            cout << "Jedz 200 metrow, myjnia znajduje sie po lewej stronie.\n";
            cout << " Gratulacje!!! Dotarles do Celu!!!!\n";
        }
        else if (numer == 5)
        {
            cout << "Wyjdz z domu na ulice.Nastepnie skrec w prawo.\n";
            cout << "Po 50 metrach dotrzesz do miejsca docelowego.\n";
            cout << "Gratulacje!!!Jestes na miejscu.\n";
        }
        else
        {
            cout << " Prosze, wybierz poprawny numer pytania (1-5)\n";
        }
    }
    return 0;
}
