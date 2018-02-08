#include <iostream>
#include <string>

using namespace std;

int main()
{
    string Vardas;
    char z = '*';
    cout << "Iveskite savo varda: ";
    cin >> Vardas;
    std::cout << "The size of str is " << Vardas.length() << " bytes.\n";

    for (int i = 0; i < 5; i++)
    {
        if (i%2==0)
        {
            if(i == 2)
            {
                cout << z << Vardas << z << endl;

            } else
            {
                for (int i = 0; i < Vardas.length()+2; i++)
                {
                    cout << z;
                }
                cout << endl;
            }
        } else
        {
            cout << z;
            for (int i = 0; i < Vardas.length(); i++)
            {
                cout << " ";
            }
            cout << z << endl;
        }

    }

    cout << "Hello world!" << endl;
    cin >> Vardas;
    return 0;
}
