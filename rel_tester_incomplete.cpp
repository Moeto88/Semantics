/*************************************************************/
/* if copy this file to rel_tester_complete.cpp              */
/* can compile with make rel_tester_complete                 */
/* or                                                        */
/* g++ rel_tester_incomplete.cpp Relation.o util.o -o myprog */
/*************************************************************/

#include "Relation.h"
#include <iostream>
#include <algorithm>
using namespace std;

int main() {

  Rel p(1);
  Rel q(1);

  Tuple t;

  /*****************************************************************/
  /* using Rel::  add_tuple(..) show(..) has(..)                    */
  /*****************************************************************/
  cout << "testing add_tuple: make p contain (1-tuples) for a and b\n";
  // HERE
  
  cout << "show p (should be a b)\n";
  // HERE
  
  cout << "-------------------\n";

  cout << "testing 'has': check  whether p has a (should be yes)\n";
  // HERE
  
  cout << "-------------------\n";

  cout << "make q like p, then make q contain also c \n";
  // HERE
  
  cout << "show q (should be a b c)\n";
  // HERE  

  cout << "-------------------\n";
  
  /**************************************************/
  /* testing 'every', 'some' functions with p and q */
  /**************************************************/

  cout << "test every(p,q)\n";

  cout << "-------------------\n";
  
  cout << "test some(p,q)\n";

  cout << "-------------------\n";

  cout << "test every(q,p)\n";

  cout << "-------------------\n";

  cout << "test some(q,p)\n";
  
  cout << "-------------------\n";

  /******************************************/
  /* testing reductions on admired relation */
  /******************************************/
  cout << "testing reductions on admired relation\n";
  Rel admired(2,"admired_rel");

  // test: reduce(admired,1,"Galileo")

  cout << "----------\n";

  // test: reduce(admired,1,"Newton")

  cout << "----------\n";
  
  // test: reduce(admired,0,"Vasari")

  cout << "----------\n";
  

  // test: reduce(admired,1,"Vasari")
  
  cout << "----------\n";

  


}
