int TTree_simple_readN(Int_t N=1) {
  Int_t det;
  Float_t energy , time;
  //TFile f (Form("myrootfiles/ttree_simple_%1i.root",N));
  //TTree* t = (TTree*) f.Get ("tree");

  //TChain t ( "tree" );
  TChain *t = new TChain("tree",""); 
  //t->Add( "myrootfiles/ttree_simple_1.root");
  //t->Add( "myrootfiles/ttree_simple_2.root");
  t->Add( "myrootfiles/ttree_simple_*.root");

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
