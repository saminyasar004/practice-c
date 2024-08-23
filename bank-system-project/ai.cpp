// #include <conio.h>
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

class bank {
  int acc;
  struct customer {
    string name, id, address;
    int pnum, cash;
  } customer[100];

public:
  bank() { acc = 0; }

public:
  void option();
  void newaccount();
  void display();
  void search();
  void money();
  void logout();
};

int main() {
  string name, name1;
  int pin, pin1, num;
  cout << "\n\t\t\t **Welcome to ABC Bank** \n\n" << endl;
  cout << "Please sign up." << endl;
  cout << "---------------\n" << endl;
  cout << "Enter your full name :" << endl;
  cin >> name;
  cout << "Enter your phone number :" << endl;
  cin >> num;
  cout << "Enter your pin :" << endl;
  cin >> pin;
  cout << "Your account is created\n" << endl;
  system("CLS");
previouslogin:
  cout << "Log in your account : \n" << endl;
  cout << "Enter your name : " << endl;
  cin >> name1;
  cout << "Enter your pin : " << endl;
  cin >> pin1;
  if (name == name1 && pin == pin1) {
    bank object;
    object.option();
  } else if (name != name1) {
    cout << "Incorrect name.\n" << endl;
    goto previouslogin;
  } else if (pin != pin1) {
    cout << "Incorrect pin.\n" << endl;
    goto previouslogin;
  }

  return 0;
}
void bank ::option() {
  system("CLS");
  char num;
  while (1) {
    cout << "Press (1) for creating new account" << endl;
    cout << "Press (2) for displaying the customer information." << endl;
    cout << "Press (3) Searching the Specific Customer." << endl;
    cout << "Press (4) for Deposit or Withdraw" << endl;
    cout << "Press (5) for Log out" << endl;
    // num = getch();
    scanf("%c", &num);
    switch (num) {
    case '1':
      system("CLS");
      bank ::newaccount();
      break;
    case '2':
      system("CLS");
      bank ::display();
      break;
    case '3':
      system("CLS");
      bank ::search();
      break;
    case '4':
      system("CLS");
      bank ::money();
      break;
    case '5':
      system("CLS");
      bank ::logout();
      break;
    default:
      cout << "Invalid.Try again please." << endl;
    }
  }
}
void bank ::newaccount() {
  cout << "Entering " << acc + 1 << " customer information." << endl;
  cout << "\nThese information needed for creating new account....." << endl;
  cout << "Enter full your name : ";
  cin >> customer[acc].name;
  cout << "Enter your Id : ";
  cin >> customer[acc].id;
  cout << "Enter your address : ";
  cin >> customer[acc].address;
  cout << "Enter your phone number : ";
  cin >> customer[acc].pnum;
  cout << "Enter your cash : ";
  cin >> customer[acc].cash;
  acc++;
  cout << "\n" << endl;
}
void bank ::display() {
  cout << "Displaying data of " << acc << " accounts." << endl;
  for (int i = 0; i < acc; i++) {
    cout << "\nCustomer full name : " << customer[i].name << endl;
    cout << "Customer Id number : " << customer[i].id << endl;
    cout << "Customer address : " << customer[i].address << endl;
    cout << "Customer phone number : " << customer[i].pnum << endl;
    cout << "Customer cash amount : " << customer[i].cash << endl;
    cout << "\n" << endl;
  }
}
void bank ::search() {
  int num;
  cout << "Enter phone number for searching customer details :";
  cin >> num;
  for (int i = 0; i < acc; i++) {
    if (num == customer[i].pnum) {
      cout << "\n\t\tThis account exists." << endl;
      cout << "\nCustomer full name : " << customer[i].name << endl;
      cout << "Customer Id number : " << customer[i].id << endl;
      cout << "Customer address : " << customer[i].address << endl;
      cout << "Customer phone number : " << customer[i].pnum << endl;
      cout << "Customer cash amount : " << customer[i].cash << endl;
      cout << "\n" << endl;
    } else if (i == acc - 1) {
      cout << "CUSTOMER ACCOUNT NOT FOUND !\n" << endl;
    }
  }
}
void bank ::money() {
  int num, cash1;
  char select;
  cout << "Enter phone number of customer for transaction :";
  cin >> num;
  for (int i = 0; i < acc; i++) {
    if (num == customer[i].pnum) {
      cout << "\nCustomer full name : " << customer[i].name << endl;
      cout << "Customer Id number : " << customer[i].id << endl;
      cout << "Customer phone number : " << customer[i].pnum << endl;
      cout << "Customer cash amount : " << customer[i].cash << endl;
      cout << "\nFor deposit press (d) " << endl;
      cout << "For withdraw press (w) " << endl;

      //   select = getch();
      scanf("%c", &select);
      switch (select) {
      case 'd':
        cout << "\nEnter the amount : ";
        cin >> cash1;
        customer[i].cash += cash1;
        cout << "Transaction completed...." << endl;
        cout << "\nYour cash amount is : " << customer[i].cash << endl;
        break;
      case 'w':
        cout << "\nEnter the amount : ";
        cin >> cash1;
        if (cash1 < customer[i].cash) {
          customer[i].cash -= cash1;
          cout << "Transaction completed...." << endl;
          cout << "\nYour cash amount is : " << customer[i].cash << endl;
          cout << "\n" << endl;
        } else {
          cout << "You don't have sufficient amount.\n" << endl;
          break;
        }
      }
      else if (i == acc - 1) {
        cout << "ACCOUNT NOT FOUND !" << endl;
      }
    }
  }
}
void bank::logout() { exit(0); }
