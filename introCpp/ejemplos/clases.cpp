#include <iostream>
using namespace std;

class CRectangle {
    int width, height;
  public:
    void set_values(int,int);
    int area() {return width*height;}
};

void CRectangle::set_values (int x, int y) {
  width = x;
  height = y;
}

int main () {
  CRectangle rect;
  rect.set_values(3,4);
  cout << "area rect: " << rect.area() << endl;
  
  CRectangle* cuad = new CRectangle();
  cuad->set_values(2,2);
  cout << "area cuad: " << cuad->area() << endl;
  
  return 0;
}
