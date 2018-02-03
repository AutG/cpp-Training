#include <iostream>

using namespace std;

int main()
{
    int Tag;
    int Monat;
    int Jahr;

    cout << "Gebe den Tag an\n";
    cin >> Tag;
    cout << "Gebe den Monat an\n";
    cin >> Monat;
    cout << "Gebe das Jahr an\n";
    cin >> Jahr;

    cout << "Folgendes wurde eingegeben:\n" << Tag << "." << Monat << "." << Jahr << endl;
    return 0;
}
