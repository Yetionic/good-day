#include <iostream>
#include <string>
using namespace std;

string nme;

void H ()
{
    cout << "Hello and welcome to my program" << endl;
    cout << "What is your name: ";
    cin >> nme;
    cout << "Hello " << nme << " how is your day going: ";
    string dy;
    cin >> dy;

    if (dy != "good")
    {
        cout << "why has something happened: ";
        string hpp;
        cin >> hpp;

        if (hpp != "yes")
        {
            cout << "I get it if you don't want to talk" << endl;
        }
        else 
            cout << "thank you for telling the truth" << endl;
    }
    else 
        cout << "It is cool that you are having a good day" << endl;
}
int main()
{
    H();

    return 0;
}
