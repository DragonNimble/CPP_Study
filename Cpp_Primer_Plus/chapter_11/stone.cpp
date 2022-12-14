#include <iostream>
using std::cout;
#include "stonewt.h"
void display(const Stonewt& st, int n);

int main()
{
    Stonewt incongnito = 275;
    Stonewt wolfe(285.7);
    Stonewt taft(21, 8);

    cout << "The celebrity weighed ";
    incongnito.show_stn();
    cout << "The detecteve weighed ";
    wolfe.show_stn();
    cout << "The president weighed ";
    taft.show_lbs();

    incongnito = 276.8;
    taft = 325;
    cout << "After dinner, the celebrity weighed ";
    incongnito.show_stn();
    cout << "After dinner, the President weighed ";
    taft.show_stn();
    display(taft, 2);
    cout << "The wrestler weighed even more.\n";
    display(422, 2);
    cout << "No stone left unearned\n";
    return 0;
}

void display(const Stonewt& st, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Wow! ";
        st.show_stn();
    }
}