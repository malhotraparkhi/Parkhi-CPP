/*The body mass index (BMI) is commonly used by health and nutrition professionals to estimate human body fat in populations.

It is computed by taking the individual’s weight in kilograms (kg) and dividing it by the square of their height in meters (m²)*/
​
#include <iostream>
 int main() {
 double height, weight, bmi;
 // Ask user for their height
 std::cout << "Type in your height (m): ";
 std::cin >> height;
 // Now ask the user for their weight and calculate BMI
 std::cout<<" Type in your weight (kg): ";
 std::cin>>weight;
//Calculating BMI
std::cout<<"Calculating the BMI\n";
bmi=(weight/(height*height));
std::cout<<"The calculated BMI is:"<< bmi <<"\n"; 
  
  
  
  
  
  
  
  
  return 0;

}