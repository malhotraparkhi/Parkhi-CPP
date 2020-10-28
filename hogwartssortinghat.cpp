/*Harry Potter Sorting Hat Quiz

“A thousand years or more ago,
When I was newly sewn,
There lived four wizards of renown,
Whose names are still well known.” */

#include<iostream>
int main()
{
  /* Every time the quiz taker answers a question, they should receive points to one or more Houses.*/
int g=0,h=0,r=0,s=0;
int ans1, ans2, ans3, ans4;

std::cout<<"---------------------------------\n";
std::cout<<"------THE SORTING HAT QUIZ!------\n";
std::cout<<"---------------------------------\n";std::cout<<"The Hogwarts School of Witchcraft and Wizardry welcomes you! First-year students must go through the annual Sorting Ceremony.\n";
std::cout<<"The Sorting Hat is a talking hat at Hogwarts that magically determines which of the four school Houses each new student belongs most to: \n";
  std::cout<<"Gryffindor\n";
  std::cout<<"Hufflepuff\n";
  std::cout<<"Ravenclaw\n";
  std::cout<<"Slytherin\n";

std::cout<<"------------Question 1------------\n";
std::cout<<"When I'm dead, I want people to remember me as: \n";
std::cout<<"1. The Good \n";
std::cout<<"2. The Great \n";
std::cout<<"3. The Wise \n";
std::cout<<"4. The Bold \n";
std::cout<<"Enter your answer (1-4)\n";
std::cin>>ans1;

switch(ans1)
{
  case 1: h++; break;
  case 2: s++; break;
  case 3: r++; break;
  case 4: g++; break;
  default: std::cout<<"Invalid Output!\n"; break;
}

std::cout<<"Your answer for this question has been recorded!\n\n";

std::cout<<"------------Question 2-----------\n";
std::cout<<"What do you prefer?\n";
std::cout<<"1. Dawn\n";
std::cout<<"2. Dusk\n";
std::cout<<"Enter your answer(1-2)\n";
std::cin>>ans2;

switch(ans2)
{
  case 1: g++; r++; break;
  case 2: h++; s++; break;
  default: std::cout<<"Invalid Input\n"; break;
}
std::cout<<"Your answer for this question has been recorded!\n\n";

std::cout<<"------------Question 3-----------\n";
std::cout<<"Which kind of instrument most pleases your ears?\n";
std::cout<<"1. The Violin\n";
std::cout<<"2. The Trumpet\n";
std::cout<<"3. The Piano\n";
std::cout<<"4. The Drum\n";
std::cout<<"Enter your answer(1-4)\n";
std::cin>>ans3;

switch(ans3)
{
  case 1: s++; break;
  case 2: h++; break;
  case 3: r++; break;
  case 4: g++; break;
  default: std::cout<<"Invalid Input!\n"; break;
}
std::cout<<"Your answer for this question has been recorded!\n\n";

std::cout<<"-----------Question 4------------\n";
std::cout<<"Which road tempts you the most?\n";
std::cout<<"1. The wide, sunny grassy lane.\n";
std::cout<<"2. The narrow, dark, lantern-lit alley\n";
std::cout<<"3. The twisting, leaf-strewn path through woods\n";
std::cout<<"4. The cobbled streat lined (ancient buildings)\n";
std::cout<<"Enter your answer\n";
std::cin>>ans4;

switch(ans4)
{
  case 1: h++; break;
  case 2: s++; break;
  case 3: g++; break;
  case 4: r++; break;
  default: std::cout<<"Invalid Input!\n"; break;
}
std::cout<<"Your answer for this question has been recorded\n\n";
//SORTING INTO HOUSE
int max=0;
std::string house;
if(g>max)
{
  max=g;
  house="Gryffindor";
}
if(h>max)
{
  max=h;
  house="Hufflepuff";
}
if(r>max)
{
  max=r;
  house="Ravenclaw";
}
if(s>max)
{
  max=s;
  house="Slytherin";
}
std::cout<<"CONGRATULATIONS!!!!! You have been sorted into house "<< house <<"\n";
return 0;
}

