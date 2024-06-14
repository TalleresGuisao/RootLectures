int Example8_MyTreeWithVector_read() {

 TVector3 v3;
 TVector3 *pv3 = &v3;

 TLorentzVector vL;
 TLorentzVector *pvL = &vL;

 TFile f ("TTree_TVector.root");

 TTree *ttree = (TTree*) f.Get("ttree");
 ttree->SetBranchAddress ("v3", &pv3); 
 ttree->SetBranchAddress ("vL", &pvL); 

 for (int evt=0; evt < ttree->GetEntries(); evt++) 
 {
   ttree->GetEvent (evt);

   cout << "[" << evt << "]: [" 
        << fixed << setprecision (3) 
        << v3[0] <<" : "<< v3[1] << " : " 
        << v3[2] << "]" << "\t";
 
   cout << "["   << vL[0] << " : " << vL[1] 
        << " : " << vL[2] << " : " << vL[3]
        << "]\n";
 }
 f.Close();

 return 0;
}
