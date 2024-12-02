#include <iostream>

using namespace std;

int reflected_gray(int n, int k) {
  // Base case for 1 bit
  if (n == 1) {
    return k % 2;
  }

  // Calculate the position in the lower n-1 bits
  int lower_k = k % (1 << (n - 1));

  // Use recursion to get the reflected gray code for lower bits
  int lower_code = reflected_gray(n - 1, lower_k);

  // Calculate the MSB based on position
  int msb = (k >> (n - 1)) ^ 1;  // XOR with 1 to flip for upper half

  // Combine MSB and lower code for the reflected gray code
  return (msb << (n - 1)) | lower_code;
}

int main() {
  int N;
  cin >> N;

  for (int i = 0; i < N; i++) {
    int n, k;
    cin >> n >> k;
    cout << reflected_gray(n, k) << endl;
  }

  return 0;
}
