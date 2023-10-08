#include "BlockingQueue.hpp"
#include <iostream>

int main()
{
  std::cout << "Hello World" << std::endl;

  //heres an instance of my queue
  BlockingQueue<int> myFunQueue;

  myFunQueue.Push(5);

  int superFunInt{0};

  myFunQueue.Pop(superFunInt);

  std::cout << "Heres the element I pushed " << superFunInt << std::endl;

  BlockingQueue<std::string> myFunStringQueue;
  myFunStringQueue.Push("This is a string??");

  std::string wowSoFun;
  myFunStringQueue.Pop(wowSoFun);
  std::cout << "My String is: " << wowSoFun << std::endl;

  return 0;
}