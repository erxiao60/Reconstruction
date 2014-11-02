#ifndef DmpAlgBgoClusters_H
#define DmpAlgBgoClusters_H

#include "DmpVAlg.h"

class DmpAlgBgoClusters : public DmpVAlg{
/*
 *  DmpAlgBgoClusters
 *
 */
public:
  DmpAlgBgoClusters();
  ~DmpAlgBgoClusters();

  //void Set(const std::string &type,const std::string &value);
  // if you need to set some options for your algorithm at run time. Overload Set()
  bool Initialize();
  //bool ProcessThisEvent();    // only for algorithm
  bool Finalize();

};

#endif
