#include <iostream>

using namespace std;

int main()
{

    int Punkte = 0;
    float Multi = 1.5F;
    float gesPunkte = 0;
    cout << "Punkte eingeben: ";
    cin >> Punkte;

    gesPunkte = static_cast<int>(Punkte*Multi);

    cout <<"Gesamt: " << gesPunkte <<endl;



    int a = 5;
    int b = 8;
    float x = (float)a/b;

    cout << x <<endl;


    return 0;
}
