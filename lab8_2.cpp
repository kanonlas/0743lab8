//Dialog of the first example is given below.
#include<iostream>
using namespace std;

int main(){
 string name;
 string day;
 string talk;
  double ID;



 cout << "Fahsai: Sawadee ka...Can you tell me your name?" << endl;
 cout << "?????: " ;
 getline(cin, name);

 cout << "Fahsai: Wow!!!" << " " << name << " " << "is a really cool name."  << endl;
 cout << "Fahsai: I think you are an Engineering student. What is your student ID?" << endl;
 cout << name << ": " ;
 cin >> ID;
  int calgear = (ID/10000000)- 12;
 cout << "Fahsai: I think you may be" <<" " << "GEAR" << " " << calgear << ". I have a free movie ticket for you." << endl;


 cout << "Fahsai: Let's go to the cinema together!!!" << endl;
 cout << "Fahsai: What movie do you want to watch?" << endl;
 cout << name << ": ";
 string movie;
 cin.ignore();
 getline(cin, movie);


 cout << "Fahsai: So....which day are you free to go with me?" << endl;
cout << name << ": " ;
getline(cin,day);

cout << "Fahsai: " << day << "....that is OK!!! I'm looking forward to watching" <<" " << movie <<  " with you." << endl;
cout << name << ": " ;
getline(cin,talk);
cout << "Fahsai: 555+ see you " << day << ". Bye Bye " << "\\(^ ^)/ "<< endl;



}
