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

int main() {
  int i = 0;

  // int&& k = i; // error
  int&& k = static_cast<int&&>(i);

  BigMemoryPool my_pool1;
  BigMemoryPool my_pool2 = my_pool1;
  BigMemoryPool my_pool3 = static_cast<BigMemoryPool&&>(my_pool1);

  return 0;
}