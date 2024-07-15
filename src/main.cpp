#include "class_example.h"
#include "example.h"

int main() {
  std::cout << "Hello World! from " << GetAuthor() << std::endl;

  ClassExampleUser ceu;
  auto example_user = ceu.GetUser();
  std::cout << "NAME:\t\t" << example_user.name << "\nAGE:\t\t" << example_user.age << "\nADDRESS:\t"
            << example_user.post_code << " " << example_user.address << std::endl;

  return 0;
}
