#ifndef _PARAMETERS
#define _PARAMETERS

#include <iostream>

using namespace std;

void CheckForCommandLineParameters(int intArgumentAmmount, char *charArguments[])
{
    if (intArgumentAmmount >= 2)
    {

        if (charArguments[0] == "-help")
        {
            cout << "The app will display a prompt to request which function you would like to use." << endl;
            cout << "Please make a selection and then follow the prompts." << endl;
            cout << "For other commands please use the \"-command\" command." << endl;
        }

        else if (charArguments[0] == "-command")
        {
            cout << "-help: Dislpays information on how to use the core app." << endl;
            cout << "-command: Displays a list of all commands that are accepted." << endl;
            cout << "-authors: Displays a list of authors." << endl;
        }

        else if (charArguments[0] == "-authors")
        {
            cout << "David Schreur" << endl;
            cout << "Travis Holzgen" << endl;
            cout << "Cody Rockwell" << endl;
        }

        else
        {
            cout << "Not a valid parameter. For more information please use the \"-command\" command." << endl;
        }
    }
}

#endif