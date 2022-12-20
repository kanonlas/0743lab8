#include <iostream>
using namespace std;

char before(char x){
char l;



  if(x >= 'A' and x <= 'Z'){
       l = x - 1;
  if( x == 'A') {
    l = 'Z';
    
  }

  }else{
    
    l = '0';
    
  } 

  return l;
  }




int main(){

cout << before('A');
cout << before('B');
cout << before('P');
cout << before('T');
cout << before('Z');
cout << before('a');
cout << before('0');
cout << before('c');
}
