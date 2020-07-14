#include<iostream>

using namespace std;

int main()

{

float r;

cout<< " Enter the Radius"<<endl;

cin>> r;

float pr = 2;

for (int i = -r; i <= r; i++) 

{

for (int j = -r; j <= r; j++) 

{

float d = ((i*pr)/r)*((i*pr)/r) + (j/r)*(j/r);
if (d >0.95 && d<1.08) 

{

cout << "*";

}

else

{

cout << " ";

}

}

cout << endl;

}

return 0;

}
