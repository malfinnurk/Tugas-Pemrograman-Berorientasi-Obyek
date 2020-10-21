#include <iostream>

using namespace std;

int main ()
{
    int deret, n, a, z;
    cout << "=================\n";
    cout << "  Program Deret\n";
    cout << "=================\n";
    cout << "\n\nMasukkan jumlah kemunculan deret : ";
    cin >>deret; z=7;

    for(a=1; a<=deret; a++)
    {
        cout <<z<< " "; z=z+7;
    };

return(0);
}
