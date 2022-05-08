/****************************************************/
/* can compile with make rel_tester_complete        */
/****************************************************/

#include "Relation.h"
#include <iostream>
#include <algorithm>
using namespace std;

int main() {

  Rel p(1);
  Rel q(1);

  Tuple t;

  /*****************************************************************/
  /* using 'Rel::add_tuple'                                   */
  /*****************************************************************/
    cout << "testing add_tuple: make p contain (1-tuples) for a and b\n";
  // ...
  
  t = {"a"};
  p.add_tuple(t);

  t = {"b"};
  p.add_tuple(t);

  cout << "show p (should be a b)\n";
  p.show();
  
  cout << "-------------------\n";
  
  /***************************/
  /* using Rel::has(..) */
  /***************************/
  
  cout << "testing 'has', whether p has a (should be yes)\n";

  t = {"a"};
  if(p.has(t)) {
    cout << "yes p has " << t[0] << endl;
  }
  else {
    cout << "no p does not have " << t[0] << endl;
  }

  cout << "-------------------\n";
  
  cout << "make q like p, then make q contain also c \n";

  q = p;
  t = {"c"};
  q.add_tuple(t);

  cout << "showing q (should be a b c)\n";
  q.show();

  cout << "-------------------\n";

  /***************************************/
  /* testing 'every', 'some' functions   */
  /* (see recording Apr 14 28:09 where   */
  /* looked at these as mental exercise) */ 
  /***************************************/
  
  cout << "test every(p,q): expect true\n";
  cout << every(p, q) << endl;

  cout << "-------------------\n";
  
  cout << "test some(p,q): expect true\n";
  cout << some(p, q) << endl;

  cout << "-------------------\n";

  cout << "test every(q,p): expect false\n";
  cout << every(q, p) << endl;

  cout << "-------------------\n";

  cout << "test some(q,p): expect true\n";
  cout << some(q, p) << endl;

  cout << "-------------------\n";

  /******************************************/
  /* testing reductions on admired relation */
  /******************************************/
  /* (see recording Apr 11 where         */
  /* looked at these as mental exercise) */ 
  /***************************************/

  cout << "testing reductions on admired relation\n";
  Rel admired(2,"admired_rel");



  p = reduce(admired,1,"Galileo");
  p.show(); // Newton Einstein

  cout << "----------\n";

  p = reduce(admired,1,"Newton");
  p.show(); // Einstein

    cout << "----------\n";

  p = reduce(admired,0,"Vasari");
  p.show(); // Michelangelo daVinci Raphael

  cout << "----------\n";

  p = reduce(admired,1,"Vasari");
  p.show(); // nobody

  cout << "----------\n";
  



}
