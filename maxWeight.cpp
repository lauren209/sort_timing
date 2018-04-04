
#include <vector>
#include <iostream>

int main(){


  std::vector<int> weight;
  std::vector<int> val;
  std::vector<int> bag;
  int maxVal;

  weight.push_back(15);
  weight.push_back(25);
  weight.push_back(45);
  weight.push_back(30);
  weight.push_back(23);
  weight.push_back(37);

  val.push_back(100);
  val.push_back(350);
  val.push_back(225);
  val.push_back(67);
  val.push_back(275);
  val.push_back(168);

  for(int i = 0; i < 50; i++){
    bag.push_back(0);
  }




  int bagWeight = 50;
  int bagVal = 0;

  for(int i = 0; i < 6; i++){
    int tempWeight = weight[i];
    for(int w = tempWeight; w < bagWeight; w++){
      if(val[i] > bag[w]){
        bag[w] = val[i];
      }
      else if(weight[i]+bagVal <= bagWeight){
        bag[w] = bag[w]+val[i];

      }
    }
  }









}
