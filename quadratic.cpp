/*In algebra, a quadratic equation is an equation having the form:

ax^2 + bx + c = 0
The corresponding x values are the x-intercepts of the graph, while a, b, and c are constants.
AIM : Write a C++ program called quadratic.cpp that solves the quadratic equation for the x‘s */

#include <iostream>
#include <cmath>

int main() {
float a, b, c, root1, root2; 
std::cout<<"Enter a, b, c respectively: ";
std::cin>>a>>b>>c;

root1 = (-b + std::sqrt(b*b - 4*a*c)) / (2*a);
root2 = (-b - std::sqrt(b*b - 4*a*c)) / (2*a);

std::cout<<"The root 1 of the quadratic equation is: "<< root1<<"\n";
std::cout<<"The root 2 of the quadratic equation is: "<< root2 <<"\n";




  
  
}