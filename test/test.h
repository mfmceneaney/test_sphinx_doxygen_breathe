#include <iostream>
#include <memory>
#include <string>

#pragma once

/**
   A test structure
*/
struct Test {
  /**
     This is a structure method.
  */
  int get_score(std::string name);
};

/**
   A dolphin class
*/
class Dolphin {
 public:
  /**
     Number of flippers
  */
  int nflippers;
  /**
     Default constructor
  */
  Dolphin() {}
  /**
     Next level constructor
     @param _nflippers
  */
  Dolphin(int _nflippers) {
    nflippers = _nflippers;
  }
  /**
     Set number of flippers.
     @param _nflippers
  */
  void set_nflippers(int _nflippers) {
    nflippers = _nflippers;
  }
  /**
     Get number of flippers.
     @return nflippers
  */
  int get_nflippers() {
    return nflippers;
  }
  /**
     Catch a fish
  */
  void fish() {
    std::cout<<"Here fishy fishy fishy! <>< <>< <><"<<std::endl;
  }
 private:
  /**
     Pod member names
  */
  std::vector<std::string> pod_members;
  /**
     Set pod member names
     @param _pod_members
  */
  void set_pod_members(std::vector<std::string> _pod_members) {
    pod_members = _pod_members;
  }
  /**
     Get pod member names
     @return pod_members
  */
  std::vector<std::string> get_pod_members() {
    return pod_members;
  }
  
};
