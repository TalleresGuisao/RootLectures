{

  const Int_t XBINS = 5; const Int_t YBINS = 5;
  Double_t xEdges[XBINS + 1] = {0.0, 0.2, 0.3, 0.6, 0.8, 1.0};
  Double_t yEdges[YBINS + 1] = {-1.0, -0.4, -0.2, 0.5, 0.7, 1.0};

  TRandom3 myr; myr.SetSeed();
  TH2* myh2d = new TH2D("myh2d", "myh2d", XBINS, xEdges, YBINS, yEdges);
  for (int i=0; i<10000; i++)
    {
      myh2d->Fill(myr.Gaus(0.5,0.1), myr.Gaus(0,0.5));
    }
  
  //myh2d->Draw("colz");
  myh2d->Draw("text");

  //TAxis* xAxis = myh2d->GetXaxis();
  TAxis* yAxis = myh2d->GetYaxis();
  
  cout << "Third bin on Y-dimension: " << endl; // corresponds to
  // [-0.2, 0.5]
  cout << "\tLower edge: " << yAxis->GetBinLowEdge(3) << endl;
  cout << "\tCenter: " << yAxis->GetBinCenter(3) << endl;
  cout << "\tUpper edge: " << yAxis->GetBinUpEdge(3) << endl;

  cout << "four bin on X-dimension: " << endl; // corresponds to
  // [-0.2, 0.5]
  cout << "\tLower edge: " << myh2d->GetXaxis()->GetBinLowEdge(4) << endl;
  cout << "\tCenter: " << myh2d->GetXaxis()->GetBinCenter(4) << endl;
  cout << "\tUpper edge: " << myh2d->GetXaxis()->GetBinUpEdge(4) << endl;

  

}
