
#include<iostream>
  
using namespace std;
  
 /* start of Enclosing class declaration */  
class Enclosing {      
        
   int x;
     
   /* start of Nested class declaration */  
   class Nested {
      int y;   
   }; // declaration Nested class ends here
  
   void EnclosingFun(Nested *n) {
        // cout<<n->y;  // Compiler Error: y is private in Nested
   }      
}; // declaration Enclosing class ends here
  
int main()
{ 
     
}