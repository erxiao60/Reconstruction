#include "DmpAlgBgoRawTrack.h"
#include "DmpDataBuffer.h"
#include "TH2F.h"
#include "TF1.h"
#include "stdio.h"
#include "TFile.h"
//-------------------------------------------------------------------
DmpAlgBgoRawTrack::DmpAlgBgoRawTrack()
 :DmpVAlg("BgoRawTrack"),
  fBgoHits(0)
{
}

//-------------------------------------------------------------------
DmpAlgBgoRawTrack::~DmpAlgBgoRawTrack(){
}

//-------------------------------------------------------------------
bool DmpAlgBgoRawTrack::Initialize(){
//  if("NOOUT"==gRootIOSvc->GetOutputFileName()){
//    gRootIOSvc->Set("Output/FileName","./"+gRootIOSvc->GetInputFileName()+"_Hits.root");
//  }
  // read input data
  }
  fTrack_xz= new TH2F("fTrack_xz","fTrack_xz;x(Bar:27.5mm);z(layer:)",220,0,22,140,0,14); 
  fTrack_yz= new TH2F("fTrack_yz","fTrack_yz;y(Bar:27.5mm);z(layer:)",220,0,22,140,0,14); 
  return true;
}

//-------------------------------------------------------------------
bool DmpAlgBgoRawTrack::ProcessThisEvent(){
  short nHits=fBgoHits->fGlobalBarID.size();
  float energy[3]={0.,0.,0.};
  for(short i=0;i<nHits;i++){
    energy[0]+=fBgoHits->fHits[i];
    energy[1]+=fBgoHits->fHits_S0[i];
    energy[2]+=fBgoHits->fHits_S1[i];
  }
  fTrack->Fill(energy[0]);
  fTrack_S0->Fill(energy[1]);
  fTrack_S1->Fill(energy[2]);
  return true;
}

//-------------------------------------------------------------------
bool DmpAlgBgoRawTrack::Finalize(){
  TF1 *mygaus=new TF1("mygaus","gaus",0,3000);
  std::string histFileName = gRootIOSvc->GetInputFileName()+"_Hits_Hist.root";
  TFile *histFile = new TFile(histFileName.c_str(),"RECREATE");

  fTrack->Fit(mygaus,"QR");
  fTrack_S0->Fit(mygaus,"QR");
  fTrack_S1->Fit(mygaus,"QR");
  fTrack->Write();
  fTrack_S0->Write();
  fTrack_S1->Write();
  delete fTrack;
  delete fTrack_S0;
  delete fTrack_S1;
  return true;
}

