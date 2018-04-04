
// lauren defrancesco
// eric schoenborn

#include <vector>
#include <iostream>

int main(){

  std::vector<float> weight;
  std::vector<float> freq;
  std::vector<float> outs;


  weight.push_back(1);
  weight.push_back(2);
  weight.push_back(3);
  weight.push_back(4);
  weight.push_back(5);
  weight.push_back(6);
  weight.push_back(7);

  freq.push_back(3);
  freq.push_back(4);
  freq.push_back(2);
  freq.push_back(1);
  freq.push_back(6);
  freq.push_back(5);
  freq.push_back(7);

  for(int i = 0; i < 7; i++){
    outs.push_back(weight[i]/freq[i]);
  }

  for(int i = 0; i < 7; i++){
    for(int j = 0; j < 7; j++){
      if(outs[i] < outs[j]){
        std::swap(outs[i], outs[j]);

      }
    }
  }


for(int i = 0; i<7; i++){
  std::cout << outs [i] << std::endl;
}

}
