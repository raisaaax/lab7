#include <iostream>
using namespace std;

int main(){
  double num = 2.4;
  double* numPointer = &num;

  cout << "Variable value: "<<num<<"; address: "<<&num<<endl;
  cout << "Pointer value: "<<numPointer<<"; address: "
       <<&numPointer<<"; dereference: "<<*numPointer<<endl;
}
