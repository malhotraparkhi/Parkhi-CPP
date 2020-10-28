/*The Magic 8-Ball is a super popular toy used for fortune-telling or seeking advice, developed in the 1950s!

Write a magic8.cpp program that will output a random fortune each time it executes.*/

/*The answers inside a standard Magic 8-Ball are:

It is certain.
It is decidedly so.
Without a doubt.
Yes - definitely.
You may rely on it.
As I see it, yes.
Most likely.
Outlook good.
Yes.
Signs point to yes.
Reply hazy, try again.
Ask again later.
Better not tell you now.
Cannot predict now.
Concentrate and ask again.
Don't count on it.
My reply is no.
My sources say no.
Outlook not so good.
Very doubtful.*/

#include<iostream>
#include<cstdlib>
int main()
{
int answer;
std::cout<<"MAGIC 8-BALL: ";
/*For our program to work, we need to get a different random number for each execution.
srand(time(NULL));  
This sets the “seed” of the random number generator.*/
srand(time(NULL));
answer = std::rand() % 20;
/*C++ has a std::rand() function from cstdlib that generates a random number.*/
switch (answer)
{
  case 0 : std::cout<<"It is certain.\n";
  break;
  case 1 : std::cout<<"It is decidedly so.\n";
  break;
  case 2 : std::cout<<"Without a doubt.\n";
  break;
  case 3 : std::cout<<"Yes - definitely.\n";
  break;
  case 4 : std::cout<<"You may rely on it.\n";
  break;
  case 5 : std::cout<<"As I see it, yes.\n";
  break;
  case 6 : std::cout<<"Most likely.\n";
  break;
  case 7 : std::cout<<"Outlook good.\n";
  break;
  case 8 : std::cout<<"Yes.\n";
  break;
  case 9 : std::cout<<"Signs point to yes.\n";
  break;
  case 10: std::cout<<"Reply hazy, try again.\n";
  break;
  case 11: std::cout<<"Ask again later.\n";
  break;
  case 12: std::cout<<"Better not tell you now.\n"; break;
  case 13: std::cout<<"Cannot predict now.\n";
  break;
  case 14: std::cout<<"Concentrate and ask again.\n"; break;
  case 15: std::cout<<"Don't count on it.\n";
  break;
  case 16: std::cout<<"My reply is no.\n";
  break;
  case 17: std::cout<<"My sources say no.\n";
  break;
  case 18: std::cout<<"Outlook not so good.\n";
  break;
  case 19: std::cout<<"Very doubtful.\n";
  break;
  default: std::cout<<"Invalid!!!!!\n";
  break;
}}