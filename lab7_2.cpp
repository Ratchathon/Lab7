#include<iostream>
#include<string>
using namespace std;
#include<cmath>

int main()
{
    string Name ;
    int student,gear;
    string movie,day,sth;
    cout<<"Fahsai: Sawadee ka...Can you tell me your name?\n";
    cout<<"?????: ";
    getline(cin,Name);
    cout<<"Fahsai: Wow!!! "<<Name<<" is a really cool name.\n";
    cout<<"Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cout<<Name<<": ";
    cin>>student;
    cin.ignore();
    gear = student/10000000-12;
    cout<<"Fahsai: I think you may be GEAR "<<gear<<". I have a free movie ticket for you.\n";
    cout<<"Fahsai: Let's go to the cinema together!!!\n";
    cout<<"Fahsai: What movie do you want to watch?\n";
    cout<<Name<<": ";
    getline(cin,movie);
    cout<<"Fahsai: So....which day are you free to go with me?\n";
    cout<<Name<<": ";
    getline(cin,day);
    cout<<"Fahsai: "<<day<<"....that is OK!!! I'm looking forward to watching "<<movie<<" with you.\n";
    cout<<Name<<": ";
    getline(cin,sth);
    cout<<"Fahsai: 555+ see you "<<day<<". Bye Bye \\(^ ^)/\n";

}
