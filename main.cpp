#include <iostream>
#include <string>

using namespace std;

int main()
{
    string Vardas;
    cout << "Iveskite savo varda: ";
    cin >> Vardas;
    int l = 13;
	if (Vardas.back() == 's')
    {
    	l = 14;
	}

    for (int i = 0; i < 5; i++)
    {
        if (i%2==0)
        {
            if(i == 2)
            {
            	if (Vardas.back() == 's')
            	{
            		cout << "* " << "Sveikas, " << Vardas << "! *" << endl; 
				}else
				{
					cout << "* " << "Sveika, " << Vardas << "! *" << endl; 
				}
            } else
            {
                for (int i = 0; i < Vardas.length()+l; i++)
                {
                    cout << "*";
                }
                cout << endl;
            }
        } else
        {
            cout << "*";
            for (int i = 0; i < Vardas.length()+l-2; i++)
            {
                cout << " ";
            }
            cout << "*" << endl;
        }
    }
    return 0;
}
