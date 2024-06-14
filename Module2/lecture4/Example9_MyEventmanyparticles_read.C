int Example9_MyEventmanyparticles_read() {
  Int_t Npart;
  Int_t det[500];
  Float_t energy[500] , time[500];

  TFile f ("manyparticles.root", "READ");
  TTree *t = (TTree*) f.Get ("tree");
  t->SetBranchAddress ("Npart", &Npart );
  t->SetBranchAddress ("Det"  , det    );
  t->SetBranchAddress ("Time" , time   );
  t->SetBranchAddress ("En"   , energy );

  cout << "* This tree has " 
       << t->GetEntries() << " entries.\n\n";

  for (int ievt=0; ievt<t->GetEntries(); ievt++) 
  {
    t->GetEntry (ievt);
    cout << "* Event " << ievt 
         << " has " << Npart << " particles:\n";

    for (int ipart=0; ipart<Npart; ipart++) 
    {
      cout << setw(10) << det   [ipart]
           << setw(12) << time  [ipart]
           << setw(12) << energy[ipart] << endl;
    }
  }
  return 0;
}
