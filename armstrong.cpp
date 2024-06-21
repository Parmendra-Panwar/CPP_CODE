<<<<<<< HEAD
#include <iostream>
#include <cmath>
using namespace std;

// Function to check if a number is an Armstrong number
bool isArmstrong(int num)
{
  int originalNum, remainder, result = 0, n = 0;

  // Store the number of digits of num in n
  originalNum = num;
  while (originalNum != 0)
  {
    originalNum /= 10;
    ++n;
  }

  // Calculate result
  originalNum = num;
  while (originalNum != 0)
  {
    remainder = originalNum % 10;
    result += pow(remainder, n);
    originalNum /= 10;
  }

  // Check if num is an Armstrong number
  if (result == num)
    return true;
  else
    return false;
}

int main()
{
  int num;
  cin >> num; // The number to check
  if (isArmstrong(num))
    cout << num << " is an Armstrong number." << endl;
  else
    cout << num << " is not an Armstrong number." << endl;

  return 0;
}
=======
#include <iostream>
#include <cmath>
using namespace std;

// Function to check if a number is an Armstrong number
bool isArmstrong(int num)
{
  int originalNum, remainder, result = 0, n = 0;

  // Store the number of digits of num in n
  originalNum = num;
  while (originalNum != 0)
  {
    originalNum /= 10;
    ++n;
  }

  // Calculate result
  originalNum = num;
  while (originalNum != 0)
  {
    remainder = originalNum % 10;
    result += pow(remainder, n);
    originalNum /= 10;
  }

  // Check if num is an Armstrong number
  if (result == num)
    return true;
  else
    return false;
}

int main()
{
  int num;
  cin >> num; // The number to check
  if (isArmstrong(num))
    cout << num << " is an Armstrong number." << endl;
  else
    cout << num << " is not an Armstrong number." << endl;

  return 0;
}
>>>>>>> 5ae85b68d0f1ff0c9f4d7fa65a2129faa18e729d
