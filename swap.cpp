/*
 * swap.cpp

 *
 *  Created on: 27 Apr 2020
 *      Author: Gaurav
 *
 */

#include <iostream>
using namespace std;

int main()
{
int a= 10;
int b= 20;
int temp;

cout<<"before swaping."<<endl;
cout<<"a= "<<a<<",b"<<b<<endl;

temp= a;
a = b;
b= temp;

cout<<"after swaping."<<endl;
cout<<"a= "<<a<<",b"<<b<<endl;


return 0;

}
