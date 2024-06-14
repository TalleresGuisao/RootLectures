int TTree_simple_read () {
  Int_t det;
  Float_t energy , time;
  TFile f ("ttree_simple.root");
  TTree* t = (TTree*) f.Get ("tree");
  
  t->SetBranchAddress ("Det" , &det);
  t->SetBranchAddress ("En" , &energy);
  t->SetBranchAddress ("Time", &time );
  
  for(int i=0; i<t->GetEntries(); i++)
    {
      t->GetEntry (i);
      cout << setw( 5) << det
	   << setw(12) << time
	   << setw(12) << energy << endl;
    }
  return 0;
  
}
