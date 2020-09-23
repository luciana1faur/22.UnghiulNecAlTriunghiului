#include <iostream>
using namespace std;

int main() {
  int a, b, c; 
  cout << "Introduceti primul unghi: ";
  cin >> a;
  cout << "Introduceti al doilea unghi: ";
  cin >> b;

  c = 180 - (a + b);

  cout << "Unghiul al treilea este: " << c << endl;

  return 0;  
}