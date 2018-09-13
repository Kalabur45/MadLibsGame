//Authors: Jerm_Deeezy.exe
#include <iostream>
#include <string>
using namespace std;
string name;
string car;
string business;
int miles;
int money;
string hug;

int main()
{
 cout<<"Enter a name: ";
 cin>>name;

 cout<<"\nEnter a car type: ";
 cin>>car;

 cout<<"\nEnter the name of a business: ";
 cin>>business;

 cout<<"\nEnter a whole number: ";
 cin>>miles;

 cout<<"\nEnter a whole number: ";
 cin>>money;

 cout<<"\nEnter an adverb (A word that describes an action): ";
 cin>>hug;
      
 cout<<"Dear "<< name << ", ";
 cout<<"we are sorry to inform you that your "<< car << " was found in the parking lot of a/an ";
 cout<< business;
 cout<<"- and will towed "<< miles << " miles away. ";
 cout<<"If you want your vehicle back, you will be required to bust down with "<<money<<" thousand dollars. ";
 


  return 0;
}
