#include <iostream>
using namespace std;
void capit (char& letter1, char& letter2){
    
    letter1 = char(letter1 - 32);
    letter2 = char(letter2 - 32);
    
}
int main(){
    
    char letter1,letter2;
    cout << "Enter two lowercase character : ";
    cin >> letter1 >> letter2;
    
    cout << "The upper case of " << letter1 << " and " << letter2 << " are ";
    capit(letter1,letter2);
    cout << letter1 << " " << letter2 << endl;
return 0;
}