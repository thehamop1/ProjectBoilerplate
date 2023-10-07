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

  return 0;
}