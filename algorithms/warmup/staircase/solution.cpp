#include <iostream>
#include <string>

using namespace std;

int main(){
  //Errors
  const int COULD_NOT_PARSE_N = 1;
  const int N_NOT_IN_BOUNDS = 2;
  //Constants
  const int N_MIN = 1;
  const int N_MAX = 100;

  //Variables
  int N = 0;  //Holds the height of the staircase

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
    for (int j=0; j<N-i-1; ++j){
      cout << " ";
    }

    for (int j=N-i-1; j<N; ++j){
      cout << "#";
    }

    cout << endl;
  }

  return 0;
}