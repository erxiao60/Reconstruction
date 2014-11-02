#ifndef DmpAlgBgoRawTrack_H
#define DmpAlgBgoRawTrack_H

#include "DmpVAlg.h"

class DmpAlgBgoRawTrack : public DmpVAlg{
/*
 *  DmpAlgBgoRawTrack
 *
 */
public:
  DmpAlgBgoRawTrack();
  ~DmpAlgBgoRawTrack();

  //void Set(const std::string &type,const std::string &value);
  // if you need to set some options for your algorithm at run time. Overload Set()
  bool Initialize();
  //bool ProcessThisEvent();    // only for algorithm
  bool Finalize();

};

#endif
