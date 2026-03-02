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

void move_pool(BigMemoryPool&& pool) {
  std::cout << "call move_pool" << std::endl;
  // BigMemoryPool my_pool(pool);
  // BigMemoryPool my_pool(static_cast<BigMemoryPool&&>(pool));
  BigMemoryPool my_pool(std::move(pool));
}

int main() {
  move_pool(make_pool());
  return 0;
}