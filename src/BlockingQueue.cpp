#include "BlockingQueue.hpp"

/**
 * @brief This inserts a single int onto the queue but flips its sign
 * @param val The data to push onto the queue
 */
template<>
void BlockingQueue<int>::Push(int& val){
    std::scoped_lock lock{m_lock};
    m_queue.push(val*-1);
};

template<>
void BlockingQueue<int>::Push(const int& val){
    std::scoped_lock lock{m_lock};
    m_queue.push(val*-1);
};

template<>
void BlockingQueue<int>::Push(int&& val){
    std::scoped_lock lock{m_lock};
    m_queue.push(val*-1);
};

template<>
void BlockingQueue<int>::Push(const int&& val){
    std::scoped_lock lock{m_lock};
    m_queue.push(val*-1);
};