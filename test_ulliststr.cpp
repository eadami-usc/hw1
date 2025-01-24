#include <string>
#include <vector>
#include <iostream>
#include <sstream>

#include "ulliststr.h"

//Use this file to test your ulliststr implementation before running the test suite

using namespace std;

int main(int argc, char* argv[])
{
   ULListStr list;
   
   cout << list.size() << endl;
   
   list.push_back("a");

   cout << list.front() << endl;
   cout << list.back() << endl;
   cout << list.size() << endl;
   
   list.push_back("b");
   list.push_back("c");

   cout << list.get(0) << endl;
   cout << list.get(1) << endl;
   cout << list.get(2) << endl;
   
   list.push_front("z");
   list.push_front("y");

   cout << list.front() << endl;
   cout << list.get(1) << endl;
   cout << list.back() << endl;
   cout << list.size() << endl;
   
   list.pop_back();
   list.pop_back();

   cout << list.size() << endl;
   cout << list.back() << endl;
   
   list.pop_front();

   cout << list.front() << endl;
   cout << list.size() << endl;
   
   list.pop_front();
   list.pop_front();

   cout << list.size() << endl;
   
   list.push_front("new front");
   list.push_back("new back");

   cout << list.front() << endl;
   cout << list.back() << endl;
   cout << list.size() << endl;
   
   for(int i = 0; i < 12; i++) {
       list.push_back("hello");
   }
   
   cout << list.size() << endl;
   cout << list.front() << endl;
   cout << list.back() << endl;
}
