
#ifndef __H_CELEBRITY__
#define __H_CELEBRITY__

#include <string>
#include <iostream>

class Celebrity{

public:
/******************************************************************
* main constructor for a celebrity
*******************************************************************/
  Celebrity();

/******************************************************************
* setter method to set the name
@param string
*******************************************************************/
  void setName(std::string n);

/******************************************************************
* setter method to set the rating
@param int
*******************************************************************/
  void setRating(int r);
/******************************************************************
* setter method to set the area
@param string
*******************************************************************/
  void setArea(std::string a);

/******************************************************************
* setter method to set the meeting
@param int
*******************************************************************/
  void setMet(int m);

/******************************************************************
* getter method for name
@return string
*******************************************************************/
  std::string getName();
/******************************************************************
* getter method for rating
@return int
*******************************************************************/
  int getRating();

/******************************************************************
* getter method for area
@return string
*******************************************************************/
  std::string getArea();

/******************************************************************
* getter method for meeting
@return int
*******************************************************************/
  int getMet();


/******************************************************************
* boolean operator to override the <=
* takes in 2 celebrities to compare
*******************************************************************/

  friend bool operator<=(const Celebrity& c1, const Celebrity& c2){
    return !(c1>c2);

  }

/******************************************************************
* boolean operator to override the > operator
* takes in 2 celebrities to compare
*******************************************************************/
  friend bool operator>(const Celebrity& c1, const Celebrity& c2){
    return c2<c1;

  }

/******************************************************************
* boolean operator to override the < operator
* takes in 2 celebrities to compare
* compares rating, met, and name to figure out how to sort
*******************************************************************/
  friend bool operator<(const Celebrity& c1, const Celebrity& c2){
    if (c1.rating <= c2.rating){
      if(c1.rating == c2.rating){
        if(c1.met <= c1.met){
          if(c1.met == c2.met){
            if(c1.name <= c2.name){
              if(c1.name == c2.name){
                return false;
              }
              return true;
            }
            return false;
          }
          return true;
        }
        return false;
      }
      return true;
    }
    else{
      return false;
    }
  }



private:

/** string name **/
  std::string name;
/** int rating **/
  int rating;
/** string area **/
  std::string area;
/** int met **/
  int met;

};





#endif
