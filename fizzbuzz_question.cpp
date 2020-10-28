/*Fizz Buzz is a classic developer interview question that is asked or referred to so often for so long, it is almost a cliché!

Though this challenge will appear very simplistic to those with some coding experience, it is designed to weed out 99.5% programming job candidates who cannot creatively use their coding knowledge to solve simple problems.*/

/*Write a fizzbuzz.cpp program that outputs numbers from 1 to 100.

But for multiples of 3, print Fizz instead of the number and for the multiples of 5, print Buzz. For numbers which are multiples of both 3 and 5 print, FizzBuzz.*/

#include<iostream>
int main()
{
  std::cout<<" The inventor of this challenge, Imran Ghory, states:\n"
std::cout<<"After a fair bit of trial and error I've come to discover that people who struggle to code don’t just struggle on big problems, or even smallish problems (i.e. write an implementation of a linked list). They struggle with tiny problems.\n So I set out to develop questions that can identify this kind of developer and came up with a class of questions I call “FizzBuzz Questions” named after a game children often play (or are made to play) in schools in the UK./n";

for(int i=1; i<=100; i++)
{
  if( i % 3 == 0)
  {
    std::cout<<"Fizz\n";
  }
  else if( i % 5 == 0)
  {
    std::cout<<"Buzz\n";
  }
  else if( i % 15 == 0)
  {
    std::cout<<"FizzBuzz\n";
  }
  else
  {
  std::cout<< i <<"\n";
  }
}
return 0;
}