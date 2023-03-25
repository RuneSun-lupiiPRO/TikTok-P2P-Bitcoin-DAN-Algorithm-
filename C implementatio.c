C implementation:

#include <stdio.h>
#include <stdlib.h>

int main() {
  int block_number = 1;
  int block_reward = 1000000;
  int current_reward = block_reward;
  int fibonacci_index = 1;
  int fibonacci_number = 1;

  while (block_number <= 23000000) {
    printf("Block number: %d, Reward: %d\n", block_number, current_reward);
    block_number++;
    if (block_number % 10 == 0) {
      fibonacci_index++;
      fibonacci_number = (fibonacci_index <= 2) ? 1 :
        (fibonacci_number - fibonacci_number / 2);
      current_reward = block_reward / fibonacci_number;
    }
  }

  return 0;
}

Python implementation:

makefile

block_number = 1
block_reward = 1000000
current_reward = block_reward
fibonacci_index = 1
fibonacci_number = 1

while block_number <= 23000000:
  print(f"Block number: {block_number}, Reward: {current_reward}")
  block_number += 1
  if block_number % 10 == 0:
    fibonacci_index += 1
    fibonacci_number = 1 if fibonacci_index <= 2 else (
      fibonacci_number - fibonacci_number // 2)
    current_reward = block_reward // fibonacci_number
