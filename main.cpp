#include <iostream>
#include <cmath>
using namespace std;

void staircase(int n)
{
    char sharp = '*';
    char light = '+';
    char space = ' ';

    for(int i = 1; i <= n; i++)
    {
        if (i != n)
        {
            int calc = abs(i - n);

            for(int k = 0; k < calc; k++)
            {
                cout << space;
            }

            for(int x = 1; x <= i * 2; x++)
            {

                if(i % 2 == 0)
                {
                    if(x % 2 == 0)
                    {
                    cout << sharp ;
                    }

                    else
                    {
                    cout << light ;
                    }
                }

                else
                {
                    if(x % 2 == 0)
                {
                    cout << light ;
                }

                    else
                    {
                        cout << sharp ;
                    }
                }


            }

             cout << "" <<endl;


        }

        else if(i == n)
        {

            for(int x = 1; x <= i * 2; x++)
            {
                cout << sharp;
            }
        }

    }

    cout << endl;
}

void drawStar(int n)
{
    string star[3] = {" /\\ ", "<  > ", " \\/ " };

    for(int y = 0; y <= 2; y ++)
    {


    for(int i = 1; i < n - 1; i++)
    {
        cout << ' ';
    }


    cout << star[y] << endl;
    }


}

void drawTrunk(int n)
{
    for(int i  = 1; i < n - 2; i++)
    {
        cout << ' ';
    }

    cout << "|  |";
}


int main()
{

    int n;
    cout << "Write an integer: ";
    cin >> n;
    drawStar(n);
    staircase(n);
    drawTrunk(n);

    return 0;
}

