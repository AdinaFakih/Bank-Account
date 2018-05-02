#include <iostream>
#include "acc.h"
using namespace std;
int main()
{
  bankacc myacc;
  myacc.display();
  bankacc myfriend("atiya",591,345468);
  myfriend.display();
  bankacc myfather(myacc);
  myfather.display();

  system("pause");
}
