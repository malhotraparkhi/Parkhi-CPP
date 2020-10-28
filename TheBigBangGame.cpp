/*Rock, Paper, Scissors, Lizard, Spock

You may have played Rock, Paper, Scissors, but have you played Rock, Paper, Scissors, Lizard, Spock? This is the infamous game brought to popularity with the TV show The Big Bang Theory.

Write a rock_paper_scissors.cpp program that:

Prompts the user to select either Rock, Paper, Scissors, Lizard, or Spock.
Instructs the computer to randomly select either Rock, Paper, Scissors, Lizard, or Spock.
Compares the user’s choice and the computer’s choice and determine the winner.
Informs the user who the winner is. */

#include <iostream>
#include <cstdlib>
int main() 
{
  std::cout<<"The Big Bang\n";
  std::cout<<"Sam Kass invented this game (with Karen Bryla) because it seems like when you know someone well enough, 75-80% of any Rock Paper Scissors games you play with that person end up in a tie. Well, here is a slight variation that reduces that probability. This version is also nice because it satisfies the Law of Fives./n";
  srand(time(NULL));
  int computer = std::rand() % 5 + 1;
  int user = 0;
std::cout<<"=================================\n";
std::cout<<"Rock Paper Scissors Lizard Spock!\n";
std::cout<<"=================================\n";

  std::cout << "1) Rock\n";
  std::cout << "2) Paper\n";
  std::cout << "3) Scissors\n";
  std::cout << "4) Lizard\n";
  std::cout << "5) Spock\n\n";

  std::cout << "Shoot==> ";
  
  int rock = 1;
  int paper = 2;
  int scissors = 3;
  int lizard = 4;
  int spock = 5;

  std::cin >> user;
  
  /* 
  rock > scissors
  scissors > paper
  paper > rock
  lizard > spock
  spock > scissors
  scissors > lizard
  lizard > paper
  paper > spock
  spock > rock
  rock > lizard
  */ 
std::cout << "computer: " << computer << "\n\n";
if (user == rock && computer == scissors)
{
std::cout << "You Win!\n";
} 
else if (user == scissors && computer == paper) 
{
std::cout << "You Win!\n";
} 
else if (user == paper && computer == rock) 
{
std::cout << "You Win!\n";
} 
else if (user == lizard && computer == spock) 
{
std::cout << "You Win!\n";
} 
else if (user == spock && computer == scissors) 
{
std::cout << "You Win!\n";
} 
else if (user == scissors && computer == lizard) {
std::cout << "You Win!\n";
} 
else if (user == lizard && computer == paper) 
{
std::cout << "You Win!\n";
} 
else if (user == paper && computer == spock) 
{    
std::cout << "You Win!\n";
}
else if (user == spock && computer == rock) 
{
std::cout << "You Win!\n";
} 
else if (user == rock && computer == lizard) 
{
std::cout << "You Win!\n";  
} 
else if (user == computer) 
{
std::cout << "Tie!\n";
} 
else 
{
std::cout << "You Lose!\n";
}}