
#include "celebrity.h"
#include <string>
#include <iostream>

/******************************************************************
* main constructor for a celebrity
*******************************************************************/
Celebrity::Celebrity(){
}

/******************************************************************
* setter method to set the name
@param string
*******************************************************************/
void Celebrity::setName(std::string n){
  name = n;
}

/******************************************************************
* setter method to set the rating
@param int
*******************************************************************/
void Celebrity::setRating(int r){
  rating = r;
}

/******************************************************************
* setter method to set the area
@param string
*******************************************************************/
void Celebrity::setArea(std::string a){
  area = a;
}

/******************************************************************
* setter method to set the meeting
@param int
*******************************************************************/
void Celebrity::setMet(int m){
  met = m;
}

/******************************************************************
* getter method for rating
@return int
*******************************************************************/
std::string Celebrity::getName(){
  return name;
}

/******************************************************************
* getter method for rating
@return int
*******************************************************************/
int Celebrity::getRating(){
  return rating;
}

/******************************************************************
* getter method for area
@return string
*******************************************************************/
std::string Celebrity::getArea(){
  return area;
}

/******************************************************************
* getter method for meeting
@return int
*******************************************************************/
int Celebrity::getMet(){
  return met;
}









