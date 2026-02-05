#include <iostream>
using namespace std;

class ForwardRec
{
public:
  void printNumbers(int current, int n)
  {

    if (current > n)
      return;
    cout << current << " ";
    printNumbers(current + 1, n);
  }
};

class BackTracking
{
public:
  void printNumbers(int current, int n)
  {
    if (current > n)
      return;
    printNumbers(current + 1, n);
    cout << current << " ";
  }
};

int main()
{
  ForwardRec frec;
  BackTracking bTrack;
  int n = 10;
  cout << "Forward Recursion: " << endl;
  frec.printNumbers(1, n);
  cout << "\n";
  cout << "Backwards Tracking: " << endl;
  bTrack.printNumbers(1, n);
  cout << "\n";

  return 0;
}