#include <list>
#include <iostream>

int main() {
  std::list<int> myList(1, 3);
  std::list<int> myList2;

  std::cout << myList.size() << std::endl;

  myList.push_back(1);
  myList.push_back(2);
  myList.push_back(3);

  myList = myList2;
  myList.emplace_back();
  return 0;
}
