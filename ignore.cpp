#include <iostream>
#include <string>

using namespace std;

int main() {
  int choice;
  cout << "Enter choice: ";
  cin >> choice;

  string text;
  cout << "Enter text: ";
  // Try the program first without cin.ignore(). Then uncomment
  // the line below and compile and run the program again.
  // cin.ignore();
  getline(cin, text);

  cout << "Choice: " << choice << endl;
  cout << "Text: " << text << endl;

  return 0;
}
