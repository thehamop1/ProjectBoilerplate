#include "gtest/gtest.h"
#include "BlockingQueue.hpp"

// Lets test if this queue is actually fifo
TEST(BlockingQueue, AddToZeroCache) {
  constexpr std::array<int, 5> SAMPLES{1, 2, 3, 4, 5};
  auto reverseSign = [](const int val){return val * -1;};

  BlockingQueue<int> myFunQueue;

  for(const auto& val: SAMPLES) myFunQueue.Push(val);

  int poppedVal{0};
  for(const auto& val: SAMPLES){
    ASSERT_TRUE(myFunQueue.Pop(poppedVal));
    ASSERT_EQ(poppedVal, reverseSign(val));
  }
};
