#include <iostream>
#include <cstdlib>
#include <ctime>
 
using namespace std;
 
int main() {
srand(time(0));
 
string choices[3] = {"Rock", "Paper", "Scissors"};
int userChoice;
int computerChoice = rand() % 3;
 
cout << "=== Rock Paper Scissors ===" << endl;
cout << "1. Rock" << endl;
cout << "2. Paper" << endl;
cout << "3. Scissors" << endl;
cout << "Enter your choice (1-3): ";
cin >> userChoice;
 
if (userChoice < 1 || userChoice > 3) {
cout << "Invalid choice!" << endl;
return 1;
}
 
cout << "\nYou chose: " << choices[userChoice - 1] << endl;
cout << "Computer chose: " << choices[computerChoice] << endl;
 
if (userChoice - 1 == computerChoice) {
cout << "It's a tie!" << endl;
}
else if (
(userChoice == 1 && computerChoice == 2) ||
(userChoice == 2 && computerChoice == 0) ||
(userChoice == 3 && computerChoice == 1)
) {
cout << "You win!" << endl;
}
else {
cout << "Computer wins!" << endl;
}
 
return 0;
}