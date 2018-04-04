
#include <string>
#include <iostream>
#include <vector>
#include "celebrity.h"
#include "sorts.h"


int main(int argc, char** argv){

  /** vector for holding celebrites **/
  std::vector<Celebrity> celebrities;
  /** int i counter for while loop **/
  int i = 0;
  /** catching the user input **/
  int type_of;
  /** string s to make a random name **/
  std::string s;
  /** alphabet array to get letters from **/
  static const char alpha[] =
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";

  type_of = std::stoi(argv[2]);

/******************************************************************
* while loop to create a random celebrity and add to vector
*******************************************************************/
  while(i < std::stoi(argv[1])){
    Celebrity c;
    std::string str;

    for (int i = 0; i < 8; i++) {
        s = alpha[rand() % (sizeof(alpha) - 1)];
        str.append(s);
    }
    c.setName(str);
    c.setRating(rand()%10);
    c.setMet(rand()%2);

    celebrities.push_back(c);

    // std::cout << rand()%2 << std::endl;
    i++;
  }

/******************************************************************
* ifs to determine which sort is being used
*******************************************************************/
  if(type_of == 1){
    std::cout << "bubble" << std::endl;
    bubble_sort(celebrities);

  }
  if(type_of == 2){
    std::cout << "insertion" << std::endl;
    insertion_sort(celebrities);

  }
  if(type_of == 3){
    std::cout << "selection" << std::endl;
    selection_sort(celebrities);

  }
  if(type_of == 4){
    std::cout << "merge" << std::endl;
    mergeSort(celebrities);

  }
  if(type_of == 5){
    std::cout << "quick" << std::endl;
    quicksort(celebrities);

  }














}
