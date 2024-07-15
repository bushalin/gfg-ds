#ifndef CLASS_EXAMPLE_H
#define CLASS_EXAMPLE_H

#include <iostream>

#include "user.h"

class ClassExampleUser {
 public:
  ClassExampleUser();
  ~ClassExampleUser();
  User GetUser();

 private:
  long id_;
  std::string name_;
  int age_;
  std::string post_code_;
  std::string address_;
};

#endif  // !CLASS_EXAMPLE_H
