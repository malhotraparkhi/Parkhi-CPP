/*Dogs mature at a faster rate than human beings. If you own a dog, you might’ve heard this rule: one year for Snoopy equals seven years for you. Turns out, the math isn’t that simple. Dogs mature more quickly than we do early on.
Here’s how we can convert your dog’s age into human years:

The first two years of a dog’s life count as 21 human years.
Each following year counts as 4 human years.
So a one-year-old dog is 10.5 years old in human years, and a two-year-old dog is 21 years old in human years… hmm this is about to get more complicated.

AIM: Write a C++ program called dog_years.cpp to calculate the age, in human years, of any dog older than 2. */

#include <iostream>
int main() {
int dog_age=10; 
//This the age of a dog in dog years 
int early_years=21, later_years, human_years;
/*The first 2 years of a dog's life count as 21 human years.*/
later_years=(dog_age-2)*4;
//Each following year counts as 4 human years//
human_years=early_years+later_years;
std::cout<<"My dog's name is Poko! She is "<<human_years<<"  years old in human years";


  
  
}