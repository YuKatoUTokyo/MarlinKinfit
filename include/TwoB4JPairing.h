////////////////////////////////////////////////////////////////
// Class TwoB4JPairing
//
// Author: Jenny Boehme, Anca Siebel
// Last update: $Date: 2009-02-26 18:35:17 $
//          by: $Author: beckmann $
// 
// Description: handle permutations of 2b jets and 4 light jets
//               
////////////////////////////////////////////////////////////////

#ifndef __TWOB4JPAIRING_H
#define __TWOB4JPAIRING_H

#include <iostream>
#include "BaseJetPairing.h"
#include "JetFitObject.h"

class TwoB4JPairing : public BaseJetPairing {
  public:
    // constructor
    TwoB4JPairing (JetFitObject *jets_[]);
    
    // destructor
    virtual ~TwoB4JPairing() {};    
        
    // getters
    virtual int getNPerm() const {return NPERM;};
    
    // does the job
    virtual int nextPermutation (JetFitObject *permObjects[]);
    
  protected:
    enum {NPERM = 6};
    enum {NJETS = 6};
    JetFitObject *jets[NJETS]; 
    int permutations [NPERM][NJETS];

};
    
#endif // __TWOB4JPAIRING_H

