#include <iostream>  
#include <iomanip>  
#include <random>  
#include <ctime> 
#include <vector> 
#include <conio.h> 
#include <math.h> 
#include <string>
#include <cctype>

using namespace std;

int main()
{
    
    srand(time(NULL));
    vector <string> manufacturer;
    vector <string> model;
    vector <string> capacity;
    vector <int> crew;
    vector <double> maxspeed;

    string manufactur;
    string _model;
    string _capacity;
    int _crew = 0;
    double _maxspeed = 0;

    bool is_valid = false;
    do
    {
        cout << "Enter the name your ship \n";
        getline(cin, manufactur);
        is_valid = true;
        for (char c : manufactur) {
            if (!isalpha(c)) {
                cout << "Error, use only words" << endl;
                is_valid = false;
                break;
            }
        }
    } while (!is_valid);
    manufacturer.push_back(manufactur);



    cout << "Enter type your ship  \n";
    cin >> _model;
    model.push_back(_model);





    bool onlyDigits = false;
    do
    {
        cout << "Enter speed your ship(in lightyear): ";
        cin >> _maxspeed;

        onlyDigits = true;

        if (cin.fail()) {

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Error, use only numbers." << endl;
            onlyDigits = true;
        }
        else {
            onlyDigits = false;
        }
    } while (onlyDigits);
    maxspeed.push_back(_maxspeed);



    do
    {
        cout << "Enter amount fuel: ";
        cin >> _crew;

        onlyDigits = true;

        if (cin.fail()) {

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Error, use only numbers." << endl;
            onlyDigits = true;
        }
        else {
            onlyDigits = false;
        }
    } while (onlyDigits);
    crew.push_back(_crew);

    do
    {
        cout << "Enter number of crew ";
        cin >> _capacity;

        onlyDigits = true;

        if (cin.fail()) {

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Error, use numbers." << endl;
            onlyDigits = true;
        }
        else {
            onlyDigits = false;
        }
    } while (onlyDigits);
    capacity.push_back(_capacity);




    int switch1 = 0;
    int deleteConfig = 0;
    int configurashion = 0;

    bool case_1 = true;
    while (case_1)


    {




        cout << "1. show stat \n";
        cout << "2. add stat\n";
        cout << "3. delete stat\n";
        cout << "4. exit \n";
        cin >> switch1;


        switch (switch1) {
        case 1:
            cout << "which one stat show?\n";
            cin >> configurashion;
            if (configurashion - 1 <= manufacturer.size())
            {
                cout << manufacturer[configurashion - 1] << endl;

            }
            else
            {
                cout << "Error, absent value";
            }
            if (configurashion - 1 <= model.size())
            {
                cout << model[configurashion - 1] << endl;
            }
            else
            {
                cout << "Error, absent value";
            }
            if (configurashion - 1 <= capacity.size())
            {
                cout << capacity[configurashion - 1] << endl;
            }
            else
            {
                cout << "Error, absent value";
            }
            if (configurashion - 1 <= crew.size())
            {
                cout << crew[configurashion - 1] << endl;
            }
            else
            {
                cout << "Error, absent value";
            }
            if (configurashion - 1 <= maxspeed.size())
            {
                cout << maxspeed[configurashion - 1] << endl;
            }
            else
            {
                cout << "Error, absent value";
            }
            break;
        case 2:

            do
            {
                cout << "Enter name ship \n";
                cin >> manufactur;
                is_valid = true;
                for (char c : manufactur) {
                    if (!isalpha(c)) {
                        cout << "Error, use words." << endl;
                        is_valid = false;
                        break;
                    }
                }
            } while (!is_valid);
            manufacturer.push_back(manufactur);
            cout << "Enter type ship\n";
            cin >> _model;
            model.push_back(_model);

            do
            {
                cout << "enter the speed of ship(in lightyers) ";
                cin >> _maxspeed;

                onlyDigits = true;

                if (cin.fail()) {

                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Error, use numbers." << endl;
                    onlyDigits = true;
                }
                else {
                    onlyDigits = false;
                }
            } while (onlyDigits);
            maxspeed.push_back(_maxspeed);



            do
            {
                cout << "enter number of fuel: ";
                cin >> _crew;

                onlyDigits = true;

                if (cin.fail()) {

                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Error, use numbers." << endl;
                    onlyDigits = true;
                }
                else {
                    onlyDigits = false;
                }
            } while (onlyDigits);
            crew.push_back(_crew);

            do
            {
                cout << "enter number of crew: ";
                cin >> _capacity;

                onlyDigits = true;

                if (cin.fail()) {

                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Error, use numbers." << endl;
                    onlyDigits = true;
                }
                else {
                    onlyDigits = false;
                }
            } while (onlyDigits);
            capacity.push_back(_capacity);



            break;
        case 3:

            cout << "which one delete? ";
            cin >> deleteConfig;

            manufacturer.erase(manufacturer.begin() + deleteConfig - 1);
            model.erase(model.begin() + deleteConfig - 1);
            capacity.erase(capacity.begin() + deleteConfig - 1);
            crew.erase(crew.begin() + deleteConfig - 1);
            maxspeed.erase(maxspeed.begin() + deleteConfig - 1);

            break;
        case 0:
            cout << "exit";
            case_1 = false;
            break;
        default:
            cout << "Error, use correct numbers";
            break;
        }


    }





}