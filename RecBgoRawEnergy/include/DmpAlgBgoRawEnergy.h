#ifndef DmpAlgBgoRawEnergy_H
#define DmpAlgBgoRawEnergy_H

#include "DmpVAlg.h"

//#include "DmpEvtBgoHits.h"
class DmpEvtBgoHits;
class TH1F;
class DmpAlgBgoRawEnergy : public DmpVAlg{
/*
 *  DmpAlgBgoRawEnergy
 *
 */
public:
  DmpAlgBgoRawEnergy();
  ~DmpAlgBgoRawEnergy();

  //void Set(const std::string &type,const std::string &value);
  // if you need to set some options for your algorithm at run time. Overload Set()
  bool Initialize();
  bool ProcessThisEvent();    // only for algorithm
  bool Finalize();
private:
  DmpEvtBgoHits *fBgoHits;
  TH1F *fEnergy;
  TH1F *fEnergy_S0;
  TH1F *fEnergy_S1;

};

#endif
