#include <iostream>
//Konstant machen
#define VAR 10

using namespace std;

int main()
{
    //Konstant machen
    const int VAR2 = 20;

    cout << VAR <<endl;
    cout << VAR2 <<endl;


    //---------------
    cout << "MANNSCHAFT: (Enum)" <<endl;

    enum Mannschaft {a,b,c,d=8,e,f,g,h,i,j,k};

    cout << a << endl;
    cout << d << endl;
    cout << e << endl;




    return 0;
}
