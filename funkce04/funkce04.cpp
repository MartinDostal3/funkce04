// funkce04.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>
using namespace std;

double vypocetDiskriminantu(double a, double b, double c)
{
    double diskriminant = b * b - 4 * a * c;
    return diskriminant;
}
void koreny(double a, double b, double diskriminant, double& x1, double& x2)
{

    if (diskriminant > 0)
    {
        x1 = (-b + sqrt(diskriminant)) / (2 * a);
        x2 = (-b - sqrt(diskriminant)) / (2 * a);
    }
    else if (diskriminant == 0)
    {
        x1 = (-b - sqrt(diskriminant)) / (2 * a);

    }
}



int main()
{
    cout << "Zadavejte parametry kvadraticke rovnice: ";
    double a, b, c, diskriminant, x1{ 0 }, x2{ 0 }, dvojnasobnyKoren{ 0 };
    cout << "\nZadejte a: ";
    cin >> a;
    cout << "Zadejte b: ";
    cin >> b;
    cout << "Zadejte c: ";
    cin >> c;
    diskriminant = vypocetDiskriminantu(a, b, c);
   
    if (diskriminant > 0)
    {
        koreny(a, b, diskriminant, x1, x2);
        cout << "\nKoren x1 je: " << x1;
        cout << "\nKoren x2 je: " << x2;
    }
    else if (diskriminant == 0) {
        cout << "\nRovnice ma jedno reseni: x= " << x1;
    }
    getchar();
    getchar();
    return 0;

}


