#pragma once
#include <mutex>
#include <queue>

template<typename T>
class BlockingQueue{
    public:
    BlockingQueue()=default;
    ~BlockingQueue()=default;

    /**
     * @brief This inserts a single element into the queue
     * @param val The data to push onto the queue
     */
    void Push(T& val){
        static_assert(!std::is_same_v<int, T>);
        std::scoped_lock lock{m_lock};
        m_queue.push(val);
    };

    void Push(const T& val){
        static_assert(!std::is_same_v<int, T>);
        std::scoped_lock lock{m_lock};
        m_queue.push(val);
    };

    void Push(T&& val){
        static_assert(!std::is_same_v<int, T>);
        std::scoped_lock lock{m_lock};
        m_queue.push(val);
    };

    void Push(const T&& val){
        static_assert(!std::is_same_v<int, T>);
        std::scoped_lock lock{m_lock};
        m_queue.push(val);
    };

    /**
     * @brief This will return the oldest value
     * @param val The data to push onto the queue
     * @return Whether or not the operation was successful
     */
    bool Pop(T& val){
        std::scoped_lock lock{m_lock};
        if(m_queue.empty()) return false;

        val = m_queue.front();
        m_queue.pop();
        return true;
    };

    /**
     * @brief This will return the oldest value. Small function so using implicit inlining.
     * @return True if the queue is empty
     */
    bool IsEmpty(){
        std::scoped_lock lock{m_lock};
        return m_queue.empty();
    };

    private:
        std::mutex m_lock;
        std::queue<T> m_queue;
};

//forward declare explicit specialization so the exe's can see them
template<>
void BlockingQueue<int>::Push(int& val);
template<>
void BlockingQueue<int>::Push(const int& val);
template<>
void BlockingQueue<int>::Push(int&& val);
template<>
void BlockingQueue<int>::Push(const int&& val);
