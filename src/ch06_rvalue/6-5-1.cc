#include <cstring>
#include <iostream>

class BigMemoryPool {
 public:
  static const int PoolSize = 4096;

  BigMemoryPool() : pool_(new char[PoolSize]) {
    std::cout << "construct big memory pool" << std::endl;
  }

  BigMemoryPool(const BigMemoryPool& other) : pool_(new char[PoolSize]) {
    std::cout << "copy big memory pool." << std::endl;
    memcpy(pool_, other.pool_, PoolSize);
  }

  BigMemoryPool(BigMemoryPool&& other) {
    std::cout << "move big memory pool" << std::endl;
    pool_ = other.pool_;
    other.pool_ = nullptr;
  }

  BigMemoryPool& operator=(BigMemoryPool&& other) {
    std::cout << "move(operator=) big memory pool" << std::endl;
    if (pool_ != nullptr) {
      delete[] pool_;
    }
    pool_ = other.pool_;
    other.pool_ = nullptr;
    return *this;
  }

  ~BigMemoryPool() {
    if (pool_ != nullptr) {
      delete[] pool_;
    }
  }

 private:
  char* pool_;
};

BigMemoryPool get_pool(const BigMemoryPool& pool) { return pool; }

BigMemoryPool make_pool() {
  BigMemoryPool pool;
  return get_pool(pool);
}

int main() {
  BigMemoryPool my_pool1 = make_pool();
  std::cout << "-----------" << std::endl;

  BigMemoryPool my_pool2;
  my_pool2 = make_pool();
  return 0;
}