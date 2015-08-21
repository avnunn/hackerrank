#include <iostream>

using namespace std;

int main(){
  //Errors
  const int COULD_NOT_PARSE_N = 1;
  const int N_NOT_IN_BOUNDS = 2;
  const int FAILED_TO_PARSE = 3;
  const int NUMBER_PASS_BOUNDARY = 4;
  //Constants
  const int N_MIN = 1;
  const int N_MAX = 10;
  const unsigned long TENTOTEN = 0x2540BE400;

  //Variables
  int N = 0;  //Holds the length of array A // 1≤N≤100
  int sum = 0;

  //get how large the array is
  cin >> N;

  //Could not parse N as number
  if (cin.fail()){
    return COULD_NOT_PARSE_N;
  }

  //N not in bounds
  if (!(N_MIN <= N && N <= N_MAX)){
    return N_NOT_IN_BOUNDS;
  }

  for (int i=0; i<N; ++i){
    unsigned long buffer;
    cin >> buffer;
    //could not extract number
    if (cin.fail()){
      return FAILED_TO_PARSE;
    }
    //Must be smaller than 10^10
    else if (buffer > TENTOTEN){
      return NUMBER_PASS_BOUNDARY;
    }
    sum += buffer;
  }

  cout << sum << endl;  
  return 0;
}