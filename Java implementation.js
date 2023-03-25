Java implementation:

public class BetaBlock {
  public static void main(String[] args) {
    int block_number = 1;
    int block_reward = 1000000;
    int current_reward = block_reward;
    int fibonacci_index = 1;
    int fibonacci_number = 1;

    while (block_number <= 23000000) {
      System.out.println("Block number: " + block_number + ", Reward: " + current_reward);
      block_number++;
      if (block_number % 10 == 0) {
        fibonacci_index++;
        fibonacci_number = (fibonacci_index <= 2) ? 1 :
          (fibonacci_number - fibonacci_number / 2);
        current_reward = block_reward / fibonacci_number;
      }
    }
  }
}
