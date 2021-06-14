// my first program in C++
#include <iostream>
#include <fstream>

using namespace std;

int main() {

  int x;
  cout << "Type a number: ";
  cin >> x;
  cout << "Your number is: " << x << "\n";

  string STRING;
  ifstream hello("hello.txt");
  //hello.open ("hello.txt", ios::trunc); 
  while (getline (hello, STRING)) {
  // Output the text from the file
  cout << STRING << "\n";
}  

hello.close();
}