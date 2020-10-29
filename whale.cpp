/*Write a whale.cpp program that accomplishes this translation using loops and vectors.*/

#include <iostream>
#include <vector>
#include <string>
int main() 
{
  std::cout<<"Whale Talk\n";
  std::cout<<"Takes a phrase like turpentine and turtles and translate it into its “whale talk” equivalent, uueeieeauuee. \n";
  std::cout<<"There are a few simple rules for translating text to whale language:\n";
  std::cout<<"There are no consonants. Only vowels excluding the letter y.\n The u‘s and e‘s are extra long, so we must double them.\n Once we have converted text to the whale language, the result is sung slowly, as is custom in the ocean.\n";
  std::string input = "Hello World\n";
  std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
  std::vector<char> result;
  for (int i = 0; i < input.size(); i++) 
  {  
    for (int j = 0; j < vowels.size(); j++)
    {
        if (input[i] == vowels[j]) 
        {
          result.push_back(input[i]);
        }
    }
  }
    for (int k = 0; k < whale_talk.size(); k++)
    {
      std::cout << whale_talk[k]; 
    }
  std::cout << "\n";
}




}
