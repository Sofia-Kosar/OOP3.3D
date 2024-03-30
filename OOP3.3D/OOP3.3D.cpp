#include <iostream>
#include <string>
#include <sstream>
#include <windows.h>
#include "DateOpen.h"
#include "DateClosed.h"

using namespace std;

int main()
{
    DateOpen do_1, do_2;

    cout << "Enter DateOpen 1:" << endl;
    cin >> do_1;
    cout << "DateOpen 1: " << do_1 << endl;

    cout << "Enter DateOpen 2:" << endl;
    cin >> do_2;
    cout << "DateOpen 2: " << do_2 << endl;

    cout << "DO_1 > DO_2: ";
    if (do_1 > do_2)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    cout << "DO_1 < DO_2: ";
    if (do_1 < do_2)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    cout << "DO_1 >= DO_2: ";
    if (do_1 >= do_2)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    cout << "DO_1 <= DO_2: ";
    if (do_1 <= do_2)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    cout << "DO_1 == DO_2: ";
    if (do_1 == do_2)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    cout << "DO_1 != DO_2: ";
    if (do_1 != do_2)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    DateClosed dc_1, dc_2;

    cout << "Enter DateClosed 1:" << endl;
    cin >> dc_1;
    cout << "DateClosed 1: " << dc_1 << endl;

    cout << "Enter DateClosed 2:" << endl;
    cin >> dc_2;
    cout << "DateClosed 2: " << dc_2 << endl;

    cout << "DC_1 > DC_2: ";
    if (dc_1 > dc_2)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    cout << "DC_1 < DC_2: ";
    if (dc_1 < dc_2)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    cout << "DC_1 >= DC_2: ";
    if (dc_1 >= dc_2)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    cout << "DC_1 <= DC_2: ";
    if (dc_1 <= dc_2)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    cout << "DC_1 == DC_2: ";
    if (dc_1 == dc_2)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    cout << "DC_1 != DC_2: ";
    if (dc_1 != dc_2)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;


    return 0;
}
