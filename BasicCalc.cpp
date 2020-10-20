#include <iostream>

using namespace std;

main()
{
    float number1, number2;
    char a;
    a = '+','*','-','/';

    while(true)
     {


        cin >> number1;


        cin >> a;
        switch (a)
        {
            case '+':
                cin >> number2;
                cout << number1+number2<< endl;
                break;
            case '-':
                cin >> number2;
                cout << number1 - number2 << endl;
                break;
            case '/':
                cin >> number2;
                cout << number1 / number2 << endl;
                break;
            case '*':
                cin >> number2;
                cout << number1 * number2 << endl;

            if (number1 / (number2 == 0))
            {
                cin >> number2;
                cout << "No";
            }


        }
            /*
            if (a=='+') {

                cin >> number2;
                cout << number1 + number2 << endl;
                }
            else if (a=='-')
            {

                cin >> number2;
                cout << number1 - number2 << endl;
              }
            else if (a=='/')
            {

                cin >> number2;
                cout << number1 / number2 << endl;
            }
            else if (a=='*')
            {

                cin >> number2;
                cout << number1 * number2 << endl;
            }

    */
     }
}
