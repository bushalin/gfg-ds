#include "class_example.h"

ClassExampleUser::ClassExampleUser()
    : id_(1001), name_("Hasib"), age_(29), post_code_("062-0006"), address_("Sapporo") {}

ClassExampleUser::~ClassExampleUser() {}

User ClassExampleUser::GetUser(){
  User u;
  u.id = id_;
  u.age = age_;
  u.name = name_;
  u.post_code = post_code_;
  u.address = address_;
  return u;
}
