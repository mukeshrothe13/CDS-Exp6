//Mukesh Rothe  //23070123089  //EXP6
#include<iostream>
#include<string>
using namespace std;
int main ()
{ string pass;
    do
{
 cout << "Enter a password: ";
 cin >> pass;
 if (pass=="SIT")
 {
    cout << "Success!";
 }
 else
 {
    cout << "Try again";
 }
} 
while (pass != "SIT");
return 0;

}
