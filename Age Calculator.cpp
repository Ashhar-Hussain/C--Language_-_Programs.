#include <iostream>
using namespace std;
void AGE(int pd, int pm, int py,int bd, int bm, int by)
{
  int d, m, y;
  int md1[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
  int md2[]  = { 31,29,31,30,31,30,31,31,30,31,30,31 };
  y = by - py;
  if (pm < bm)
  {
    y--;
    m = 12 - (bm - pm);       
  }
  else
  {m = pm - bm;}
  if (pd < bd)
  {
    m--;
     if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0)){
    d = md2[pm - 1] - (bd - pd);}
    else
    { d = md1[pm - 1] - (bd - pd);}
  }
  else
  {d = pd - bd;}
  cout << "your age is : \n";
  cout << y << " years " << m << " months " << d << " days. ";
}
int main()
{
  int pd, pm, py, bd, bm, by;
   cout << " Enter the birth date in the format dd mm yyyy : ";
  cin >> bd >> bm >> by;
  cout << " Enter the present date in the format dd mm yyyy : ";
  cin >> pd >> pm >> py;
  AGE(pd, pm, py, bd, bm, by);
  
  return 0;
}
