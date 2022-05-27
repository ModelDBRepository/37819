: $Id: pointer.inc,v 1.2 2003/02/12 22:29:39 billl Exp $
TITLE provide pointer to an object

COMMENT
use with strobj.obj(PP.ptr) to get object access
ENDCOMMENT

NEURON {
  RANGE p
}

ASSIGNED {
  p
}

VERBATIM
#ifndef NRN_VERSION_GTEQ_8_2_0
extern Object** hoc_objgetarg(int);
#endif
ENDVERBATIM

PROCEDURE setptr() {
  VERBATIM  
  {
    p =     (double)(unsigned long)*hoc_objgetarg(1);
  }  
  ENDVERBATIM  
}
