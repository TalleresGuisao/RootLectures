int Example9_MyEventmanyparticles() {
  Int_t Npart;
  Int_t det[500];
  Float_t energy[500] , time[500];

  TFile f ("manyparticles.root", "RECREATE");
  TTree t ("tree", "My tree");
  t.Branch ("Npart", &Npart, "Npart/I");
  t.Branch ("Det"  , det   , "det[Npart]/I");
  t.Branch ("Time" , time  , "time[Npart]/F");
  t.Branch ("En"   , energy, "energy[Npart]/F");

  TRandom3 r; r.SetSeed ();
  for (int ievt=0; ievt<100; ievt++) {
    Npart = r.Integer(6);
    cout << "Event " << ievt 
         << " has " << Npart << " particles.\n";
    for (int ipart=0; ipart<Npart; ipart++) 
    {
      det   [ipart] = r.Integer (24);
      time  [ipart] = r.Rndm() * 20.;
      energy[ipart] = r.Rndm() * 30.;
      cout << setw(10) << det   [ipart] 
           << setw(12) << time  [ipart] 
           << setw(12) << energy[ipart] << endl;
    }
    t.Fill ();
  }
  t.Write();
  return 0;
}
