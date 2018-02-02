#include <iostream>

using namespace std;

/*Datentypen:
 * int
 * short
 * long
 * float
 * double
 *
 * char
 * (string)
 * bool
 */



int main()
{
    //Type one: [type name = value]
    int var_int1 = 10;
    short var_short =20;
    long var_long1=2568;
    float var_float1=2658.4F;
    double var_double=1.6;
    char var_char1 = 'T';
    string var_string1 = "Tom & Jerry";
    bool var_bool1 = true;

    //Type two [type name(value)]
    int var_int2(20);
    short var_short2(30);
    long var_long2(125783);
    float var_float2(14384.9F);
    double var_double2(466.5);
    char var_char2('A');
    string var_string2("Alex&Timmi");
    bool var_bool2(false);



    cout<<var_int1<<endl;
    cout<<var_short<<endl;
    cout<<var_long1<<endl;
    cout<<var_float1<<endl;
    cout<<var_double<<endl;
    cout<<var_char1<<endl;
    cout<<var_string1<<endl;
    cout<<var_bool1<<endl;
    cout<<"-------------"<<endl;
    cout<<var_int2<<endl;
    cout<<var_short2<<endl;
    cout<<var_long2<<endl;
    cout<<var_float2<<endl;
    cout<<var_double2<<endl;
    cout<<var_char2<<endl;
    cout<<var_string2<<endl;
    cout<<var_bool2<<endl;

    return 0;
}
