// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


 struct Address{
       string city;
       string country;
   };
  struct PERSON{
      string NAME;
      int AGE;
      Address address;
  };

int main() {
  
      PERSON pk={"ali",12,{"isb","pk"}};
    //   pk.NAME="ali";
   cout<<"city = "<<pk.address.country<<endl;

   

    return 0;
}
