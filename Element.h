#ifndef ELEMENT_H
#define ELEMENT_H
#include <string>
#include <iostream>
using namespace std;

struct Element{
  Element(){}
  Element(string key, string value){
    this->key = key;
    this->value = value;
  }
  bool operator<(const Element&);
  bool operator>(const Element&);
  string key ;
  string value;
};

bool Element::operator<(const Element& e2)
{
  if((this->key).length() < e2.key.length())
    return true;
    
  try{
  if(stod(this->key) < stod(e2.key))
    {
    return true;
  }else
    {
        return false;
    }
  }catch(exception)
     {
       cerr << "Invalid input" << endl;
     }
  return 0;
  
}

bool Element::operator>(const Element& e2)
{
  if((this->key).length() > e2.key.length())
    return true;
    
  try{
  if(stod(this->key) > stod(e2.key))
    {
    return true;
  }else
    {
      //     cout << "returned false" << endl;
        return false;
    }
  }catch(exception)
     {
       cerr << "Invalid input" << endl;
     }
  return 0;
  
}

#endif /*ELEMENT_H*/ 
