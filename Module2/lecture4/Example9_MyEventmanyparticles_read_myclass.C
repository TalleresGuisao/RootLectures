#include <iostream>
#include <iomanip>
#include "time.h"

#include "myclass2.C"

int Example9_MyEventmanyparticles_read_myclass() {
  /*
  Int_t Npart;
  Int_t det[500];
  Float_t energy[500] , time[500];

  TFile f ("manyparticles.root", "READ");
  TTree *t = (TTree*) f.Get ("tree");
  t->SetBranchAddress ("Npart", &Npart );
  t->SetBranchAddress ("Det"  , det    );
  t->SetBranchAddress ("Time" , time   );
  t->SetBranchAddress ("En"   , energy );
  */

  TChain * ch = new TChain("tree","");
  ch->Add("manyparticles.root");
  TTree *mytree = (TTree*)ch;
  myclass2 t(mytree);

  //cout << "* This tree has " << t->GetEntries() << " entries.\n\n";
  cout << "* This tree has " << t.fChain->GetEntries() << " entries.\n\n";

  Long64_t nentries = t.fChain->GetEntries();
  Long64_t nbytes = 0, nb = 0;
  //for (int ievt=0; ievt<t->GetEntries(); ievt++)
  for (int ievt=0; ievt<nentries; ievt++) 
  {
    //t->GetEntry (ievt);
    Long64_t ientry = t.LoadTree(ievt);
    if (ientry < 0) break;
    nb = t.fChain->GetEntry(ievt);   nbytes += nb;
    
    cout << "* Event " << ievt << " has " << t.Npart << " particles:\n";

    for (int ipart=0; ipart<t.Npart; ipart++) 
    {
      /*
      cout << setw(10) << det[ipart]
           << setw(12) << time[ipart]
           << setw(12) << energy[ipart] << endl;
      */
      if(t.Det[ipart]<20){continue;}

      cout << setw(10) << t.Det[ipart]
           << setw(12) << t.Time[ipart]
           << setw(12) << t.En[ipart] << endl;

      if(t.Det[ipart]<5){std::cout<< " por aca ando" << std::endl;}
      
    }
  }
  return 0;
}
