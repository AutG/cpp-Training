#include <iostream>

using namespace std;

int main()
{
    int var1 = 20;
    int var2 = 3;

    float fvar1 = 10.5F;
    float fvar2 = 20.5F;


    int erg1 = var1*var2;
    float ferg1 = fvar1*fvar2;
    int nerg1 = var2 * fvar2;
    int mErg1 = var1 % var2;
    var1+=var1;
    var2-=var2;
    cout << erg1 <<endl;
    cout << ferg1 <<endl;
    cout << nerg1 <<endl << "Keine Kommazahl weil: nerg1 ist ein INT und kein FLOAT bzw sonstige Gleitkommazahl" << endl;
    cout << mErg1 <<endl;

    cout << var1 << endl;
    cout << var2 << endl;

    return 0;
}
