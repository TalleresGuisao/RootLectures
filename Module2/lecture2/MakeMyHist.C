

void MakeMyHist() {
  TH1F hist("hist", "My Histogram",100,-3.0,3.0);
  //hist.FillRandom("gaus",10000);
  hist.Draw(); // shows histogram
} // destroys hist


/*
void MakeMyHist() {
  //gStyle->SetOptTitle(0);
  //gStyle->SetOptStat(0);
  //gStyle->SetOptFit(1100);

  TH1F *hist = new TH1F("hist","My Histogram",100,-3.0,3.0);
  hist->FillRandom("gaus",10000);
  hist->Draw(); // shows histogram
  //hist->Fit("gaus");
  
} // does not destroy hist!
*/
//`new` puts object on “heap”, escapes scope
