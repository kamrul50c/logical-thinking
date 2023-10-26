

#include <iostream>

using namespace std;
int main()
{
    
    int number;
    cin>>number;

float guess = 5;

  // Iterate until the difference between the guess and its square is less than a certain threshold
  while (abs(guess * guess - number) > 0.00001) {
  
    float average = (guess + number / guess) / 2;
    
    cout<<"this is average value"<<average<<endl;

    // Update the guess
    guess = average;
  }
    return 0;
}
