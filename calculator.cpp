#include <iostream>
using namespace std;

int main () {
    for(int row = 0; row < 7; row++) {
       for(int col = 0; col < 5; col++) {
          if(row == 0 || row == 6)
              cout << "x";
     else if (col == 0)
         cout << "x";
    else  
        cout << "" ;
}
cout "";

for(int col = 0; col < 5; col++) {
   if(col == 2 || row == 3)
       cout << "x";
  else
       cout << "";
}
cout << " ";

for(int col = 0; col < 5; col++) {
   if(col == 2 || row == 3)
       cout << "x";
else
       cout << "";
}
cout << endl;
}
return 0;
}
 
