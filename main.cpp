#include <iostream>
using namespace std;

int main(){

string q1, q2, q3, q4, q5, q6, q7, q8, q9 ,q10, end;
int m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, total;


// QUESTION NUMBER 1

cout<<"Q1. Which datatype will be used to print 'Hello WOrld'?"<<endl;
cout<<"ANSWER : ";

cin>>q1;

if(q1 == "string")
{
    m1=10;
    cout<<endl<<endl<<endl;
}

else
{
    m1=0;
    cout<<endl<<endl<<endl;
}



// QUESTION NUMBER 3

cout<<"Q2. Which datatype will be used to print '20'?"<<endl;
cout<<"ANSWER : ";

cin>>q2;

if(q2 == "integer")
{
    m2=10;
    cout<<endl<<endl<<endl;
}

else
{
    m2=0;
    cout<<endl<<endl<<endl;
}


// QUESTION NUMBER 4

cout<<"Q3. Which datatype will be used to print '34.12'?"<<endl;
cout<<"ANSWER : ";

cin>>q3;

if(q3 == "float")
{
    m3=10;
    cout<<endl<<endl<<endl;
}

else
{
    m3=0;
    cout<<endl<<endl<<endl;
}


// QUESTION NUMBER 5

cout<<"Q4. Which datatype will be used to print 'A'?"<<endl;
cout<<"ANSWER : ";

cin>>q4;

if(q4 == "charactor")
{
    m4=10;
    cout<<endl<<endl<<endl;
}

else
{
    m4=0;
    cout<<endl<<endl<<endl;
}


// QUESTION NUMBER 5

cout<<"Q5. Which of the following is the correct syntax to add the header file in the C++ program?"<<endl;
cout<<"a. #include<userdefined>"<<endl;
cout<<"b. #include userdefined.h"<<endl;
cout<<"c. <include> userdefined.h"<<endl;
cout<<"d. Both A and B"<<endl<<endl;
cout<<"ANSWER : ";

cin>>q5;

if(q5 == "d")
{
    m5=10;
    cout<<endl<<endl<<endl;
}

else
{
    m5=0;
    cout<<endl<<endl<<endl;
}


// QUESTION NUMBER 6

cout<<"Q6. The C++ language is ______ object-oriented language."<<endl;
cout<<"a. Pure Object oriented"<<endl;
cout<<"b. Not Object oriented"<<endl;
cout<<"c. Semi Object-oriented or Partial Object-oriented"<<endl;
cout<<"d. None of the above"<<endl<<endl;
cout<<"ANSWER : ";

cin>>q6;

if(q6 == "c")
{
    m6=10;
    cout<<endl<<endl<<endl;
}

else
{
    m6=0;
    cout<<endl<<endl<<endl;
}


// QUESTION NUMBER 7

cout<<"Q7. Which of the following is the correct identifier?"<<endl;
cout<<"a. $var_name"<<endl;
cout<<"b. VAR_123"<<endl;
cout<<"c. varname@"<<endl;
cout<<"d. None of the above"<<endl<<endl;
cout<<"ANSWER : ";

cin>>q7;

if(q7 == "b")
{
    m7=10;
    cout<<endl<<endl<<endl;
}

else
{
    m7=0;
    cout<<endl<<endl<<endl;
}


// QUESTION NUMBER 8

cout<<"Q8. Which of the following is the address operator?"<<endl;
cout<<"a. @"<<endl;
cout<<"b. #"<<endl;
cout<<"c. &"<<endl;
cout<<"d. %"<<endl<<endl;
cout<<"ANSWER : ";

cin>>q8;

if(q8 == "c")
{
    m8=10;
    cout<<endl<<endl<<endl;
}

else
{
    m8=0;
    cout<<endl<<endl<<endl;
}



// QUESTION NUMBER 9

cout<<"Q9. Which of the following features must be supported by any programming language to become a pure object-oriented programming language?"<<endl;
cout<<"a. Encapsulation"<<endl;
cout<<"b. Inheritance"<<endl;
cout<<"c. Polymorphism"<<endl;
cout<<"d. All of the above"<<endl<<endl;
cout<<"ANSWER : ";

cin>>q9;

if(q9 == "d")
{
    m9=10;
    cout<<endl<<endl<<endl;
}

else
{
    m9=0;
    cout<<endl<<endl<<endl;
}



// QUESTION NUMBER 10

cout<<"Q10. Which of the following is the original creator of the C++ language?"<<endl;
cout<<"a. Dennis Ritchie"<<endl;
cout<<"b. Ken Thompson"<<endl;
cout<<"c. Bjarne Stroustrup"<<endl;
cout<<"d. Brian Kernighan"<<endl<<endl;
cout<<"ANSWER : ";

cin>>q10;

if(q10 == "c")
{
    m10=10;
    cout<<endl<<endl<<endl;
}

else
{
    m10=0;
    cout<<endl<<endl<<endl;
}



cout<<"\t\t\t\t !!! FINAL RESULT !!!"<<endl;

cout<<"Question Number 1 : "<<m1<<endl;
cout<<"Question Number 2 : "<<m2<<endl;
cout<<"Question Number 3 : "<<m3<<endl;
cout<<"Question Number 4 : "<<m4<<endl;
cout<<"Question Number 5 : "<<m5<<endl;
cout<<"Question Number 6 : "<<m6<<endl;
cout<<"Question Number 7 : "<<m7<<endl;
cout<<"Question Number 8 : "<<m8<<endl;
cout<<"Question Number 9 : "<<m9<<endl;
cout<<"Question Number 10 : "<<m10<<endl;


total = m1+m2+m3+m4+m5+m6+m7+m8+m9+m10;

cout<<"\t\t\t\t YOU HAVE SCORED "<<total<<" OUT OF 100"<<endl;

cout<<"PESS 'E' TO EXIT : ";
cin>>end;


return 0;
}