#include <iostream>
using namespace std;
class bankacc
{
  public:
    bankacc()
    {
      this->accholder="adina";
      this->accno=11;
      this->currentbal=7345.5;
    }
    bankacc(string holder, int no, float bal)
    {
      this->accholder=holder;
      this->accno=no;
      this->currentbal=bal;
    }
    bankacc(bankacc& clone)
    {
      this->accholder=clone.accholder;
      this->accno=clone.accno;
      this->currentbal=clone.currentbal;
    }
    void display()
    {
      cout<<this->accholder<<endl;
      cout<<this->accno<<endl;
      cout<<this->currentbal<<endl<<endl<<endl;
    }
  private:
    string accholder;
    int accno;
    float currentbal;
    
};
