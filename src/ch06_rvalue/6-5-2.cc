#include <chrono>
#include <cstring>
#include <iostream>

class BigMemoryPool {
 public:
  static const int PoolSize = 4096;

  BigMemoryPool() : pool_(new char[PoolSize]) {}

  // BigMemoryPool(BigMemoryPool&& other) {
  //   pool_ = other.pool_;
  //   other.pool_ = nullptr;
  // }

  BigMemoryPool(const BigMemoryPool& other) : pool_(new char[PoolSize]) {
    memcpy(pool_, other.pool_, PoolSize);
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
  auto start = std::chrono::high_resolution_clock::now();
  for (int i = 0; i < 1000000; i++) {
    BigMemoryPool my_pool = make_pool();
  }
  auto end = std::chrono::high_resolution_clock::now();
  std::chrono::duration<double> diff = end - start;

  // 0.139849 s vs 0.332531 s
  std::cout << "Time to call make_pool: " << diff.count() << " s" << std::endl;
  return 0;
}