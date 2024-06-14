int Example8_MyTreeWithVector() {

 TVector3 v3;
 TVector3 *pv3 = &v3;

 TLorentzVector vL;
 TLorentzVector *pvL = &vL;

 TFile file ("TTree_TVector.root", "recreate");

 TTree *ttree = new TTree ("ttree", "ttree");
 ttree->Branch ("v3", "TVector3"      , &pv3);
 ttree->Branch ("vL", "TLorentzVector", &pvL);

 TRandom3 r; r.SetSeed (0);

 for (int evt = 0; evt < 100; evt++) 
 {
   v3.SetXYZ  (r.Rndm(), r.Rndm(), r.Rndm());
   vL.SetXYZT (r.Rndm(), r.Rndm(), 
               r.Rndm(), r.Rndm() );
   ttree->Fill();
 }
 ttree->Write();
 
 file.Close();
 return 0;
}
