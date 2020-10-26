/*Write a C++ program called currency.cpp that prompts the user for the amount of three foreign currencies. Your program should then convert the amount entered by the user and display the total amount of USD. */

#include <iostream>
int main() {
int pesos, reais, soles, dollars;
std::cout<<"Enter the number of Coloumbian Pesos:";
std::cin>>pesos;
std::cout<<"Enter the number of Brazilian Reais:";
std::cin>>reais;
std::cout<<"Enter the number if Peruvian Soles:";
std::cin>>soles;
dollars = 0.049 * pesos + 0.1305 * reais + 0.1144 * soles; 
std::cout << "Total USD = $" << dollars << "\n";
}