#include <iostream>

using namespace std;

/*  Vergleichsoperatoren:
 *  ==
 *  <
 *  >
 *  <=
 *  >=
 *  !=
 */

int main()
{


    int a;
    cin >> a;

    if (a<=5){
        cout << "Ist kleiner als 5!" << endl;
    }else if (a>=10){
        cout << "Ist groesser als 10!" << endl;
    }else{
        cout << "Pech gehabt!" <<endl;
    }



    return 0;
}
