#include <iostream>
#include <string>
using namespace std;

class Bank {
  int acc;
  struct customer {
    string id, name, address;
    int pnum, cash;
  } customer[100];

  // public:
  //   void bank() {
  //     acc = 0;
  //     return 0;
  //   }

  // public:
  //   void option();
  //   void newaccount();
  //   void display();
  //   void search();
  //   void money();
  //   void logout();
};

int main() {
  int x;
  system("echo hello");
  cout << "Print 2 to exit." << endl;
  cin >> x;
  if (x == 2) {
    cout << "PRINTED." << endl;
    system("pause");
  }
  return 0;
}