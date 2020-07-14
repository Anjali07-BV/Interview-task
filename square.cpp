#include<iostream>
using namespace std;
main()
{
    int squareHeight, squareWidth;
    cout<< "Enter Height:  ";
    cin>>  squareHeight;
    cout<< "Enter Widht:   ";
    cin>>  squareWidth;
  for(int width=1; width<=squareHeight; width++)
    {
   if(width <= 1)
   for(int width=1; width<=squareWidth; width++)
            {
                cout<< "*";
            }
        else if(width<squareHeight)
        {
            cout<< endl;
for(int width2=1; width2<=squareWidth; width2++)
      {
      if(width2==1 || width2==squareWidth)
                    cout<< "*";
                else
                    cout<< " ";
            } 
        }
        else
        {
            cout<< endl;
for(int width3=1; width3<=squareWidth; width3++)
   {
                cout<<"*";
            }
        }
    }
}
