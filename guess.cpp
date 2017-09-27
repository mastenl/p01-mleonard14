#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
  //initialize random seed. Do this only once at the beginning of the main-function
  srand ( time(NULL) );
  int randomNumber; // this variable will hold the random number
  /* generate secret number: between 1 and 10. Change the 10 to a different value to
  generate random numbers up to that maximum value */
  randomNumber = rand() % 10 + 1;
int Guess;// user's guess at random number

cout << "Guess the computer's number." << endl;
cin >> Guess;

  if (Guess==randomNumber) // checks if you won.
  {
    cout << "You, guessed correctly! You win!" << endl;
    return 0;
  }
  else
  {
    int offNumber = (randomNumber - Guess); /* makes variable that gives how much off the
    users guess was to the randomNumber.*/

    cout << "You were off by" << abs(offNumber) <<  ". Sorry, you lose." << endl;
  }
return 0;
}
