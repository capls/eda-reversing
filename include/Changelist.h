// Changelist.h -- Apr 13, 2009
//    by geohot
//  released under GPLv3, see http://gplv3.fsf.org/

#ifndef EDA_CHANGELIST_H_
#define EDA_CHANGELIST_H_

#include "RegisterFile.h"

#include "macros.h"
#include "StatelessChangelist.h"

namespace eda {

class Memory;
class Location;

class Changelist {
public:
  Changelist(int changelistNumber);
  void commit(RegisterFile *r, Memory *m);
  void addChange(Location target, Data source);
private:
  int mChangelistNumber;
  std::vector<std::pair<Location, Data> > mInternalChangelist;
};

}

#endif /* EDA_CHANGELIST_H_ */
