#include "DmpAlgBgoRawEnergy.h"
#include "DmpDataBuffer.h"
#include "DmpEvtBgoHits.h"
#include "TH1F.h"
#include "TF1.h"
#include "stdio.h"
#include "TFile.h"
//-------------------------------------------------------------------
DmpAlgBgoRawEnergy::DmpAlgBgoRawEnergy()
 :DmpVAlg("BgoRawEnergy"),
  fBgoHits(0)
{
}

//-------------------------------------------------------------------
DmpAlgBgoRawEnergy::~DmpAlgBgoRawEnergy(){
}

//-------------------------------------------------------------------
bool DmpAlgBgoRawEnergy::Initialize(){
//  if("NOOUT"==gRootIOSvc->GetOutputFileName()){
//    gRootIOSvc->Set("Output/FileName","./"+gRootIOSvc->GetInputFileName()+"_Hits.root");
//  }
  fBgoHits= new DmpEvtBgoHits();
  gDataBuffer->LinkRootFile("Event/Cal/Hits",fBgoHits);
  
  // read input data
  fBgoHits = dynamic_cast<DmpEvtBgoHits*>(gDataBuffer->ReadObject("Event/Cal/Hits"));
  
  
  fEnergy= new TH1F("fEnergy","fEnergy_combined;Energy(MeV);Counts",300000,0,300000); 
  fEnergy_S0= new TH1F("fEnergy_S0","fEnergy_S0;Energy(MeV);Counts",300000,0,300000); 
  fEnergy_S1= new TH1F("fEnergy_S1","fEnergy_S1;Energy(MeV);Counts",300000,0,300000); 
  return true;
}

//-------------------------------------------------------------------
bool DmpAlgBgoRawEnergy::ProcessThisEvent(){
  short nHits=fBgoHits->fGlobalBarID.size();
  float energy[3]={0.,0.,0.};
   for(short i=0;i<nHits;i++){
    energy[0]+=fBgoHits->fEnergy[i];
    energy[1]+=fBgoHits->fES0[i];
    energy[2]+=fBgoHits->fES1[i];
  }
   std::cout<<"energy combined:"<<energy[0]<<std::endl;
   std::cout<<"energy 0:"<<energy[1]<<std::endl;
   std::cout<<"energy 1:"<<energy[2]<<std::endl;

  fEnergy->Fill(energy[0]);
  fEnergy_S0->Fill(energy[1]);
  fEnergy_S1->Fill(energy[2]);
  return true;
} 

//-------------------------------------------------------------------
bool DmpAlgBgoRawEnergy::Finalize(){
  TF1 *mygaus=new TF1("mygaus","gaus",0,3000);
  std::string histFileName ="./Energy/"+gRootIOSvc->GetInputStem()+"_RawEnergy.root";
  TFile *histFile = new TFile(histFileName.c_str(),"RECREATE");

  double max=fEnergy->GetMean();
  int nBin=1;
  std::cout<<"mean: "<<max<<std::endl;
  max=((int)((max*10)/1000))*1000;
  if (max<1000){ max=1000;nBin=5;}
  else if(max>=1000&&max<10000){nBin=5;}
  else if(max>=10000&&max<100000){nBin=50;}
  else{nBin=100;}
  fEnergy->RebinX(nBin);
  fEnergy->SetAxisRange(0,max,"X");
  fEnergy->Fit(mygaus,"QR");
  fEnergy_S0->RebinX(nBin);
  fEnergy_S0->SetAxisRange(0,max,"X");
  fEnergy_S0->Fit(mygaus,"QR");
  fEnergy_S1->RebinX(nBin);
  fEnergy_S1->SetAxisRange(0,max,"X");
  fEnergy_S1->Fit(mygaus,"QR");
  fEnergy->Write();
  fEnergy_S0->Write();
  fEnergy_S1->Write();
  delete fEnergy;
  delete fEnergy_S0;
  delete fEnergy_S1;
  return true;
}

