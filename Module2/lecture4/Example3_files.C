{

  TFile* myf1 = new TFile ("myfile1.root", "RECREATE");
  TFile* myf2 = new TFile ("myfile2.root", "RECREATE");

  TRandom3 r;
  r.SetSeed();

  TH1F *myh1 = new TH1F ("myh1", "myh1", 100, -10., 10.);
  TH1F *myh2 = new TH1F ("myh2", "myh2", 100, -10., 10.);
  TH1F *myh3 = new TH1F ("myh3", "myh3", 100, -10., 10.);
  TH1F *myh4 = new TH1F ("myh4", "myh4", 100, 0., 10.);
 
  for (int i=0; i<1e5; i++){
    myh1->Fill ( r.Gaus() );
    myh2->Fill ( r.Gaus(0,2) );
    myh3->Fill ( r.Landau(0,1) );
    myh4->Fill ( r.Exp(1.0) ); 
  }

  myf1->cd();
  myh1->Write();
  myh2->Write();
  myf1->Close ();

  myf2->cd();
  myh3->Write();
  myh4->Write();
  myf2->Close ();
  
}



  
