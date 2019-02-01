#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;
int liczba;


int main()
{
    cout << "Witaj w losowaniu, za trzy sekundy nastapi zwolnienie blokady" << endl;
    Sleep(3000);
    cout<<endl;
    srand(time(NULL));

    for (int i=1; i<=6; i++)
    {

        liczba = rand()%49+1;
        Sleep(1000);
        cout<<liczba<<"\a"<<endl;  // jesli dasz "\n" to masz koniec lini zamiast endline
    }
    system("pause"); //mo¿e byc getchar(); getchar();   ale uprzednio dodaæ biblioteke       #include <stdio.h>


    return 0;
}
