#include <iostream>
using namespace std;

void reverse(char array[], int size){
  char temp;
  int x = (size - 1);
  for(int i = 0; i < x; i++, x--){
    temp = array[i];
    array[i] = array[x];
    array[x] = temp;
  }
}

int main(){
  char ar[] = "Harry" ;
  int sizeAr =sizeof(ar)-1;
  cout << "Original string: "<< ar <<endl;
  reverse(ar, sizeAr);
  cout << "Reversed sttring: "<<ar <<endl;
  return 0;
}
