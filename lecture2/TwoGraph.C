{
  //gROOT->Reset();
  const Int_t n = 20;
  Double_t x[n], y[n], x1[n], y1[n];
  
  // create the blue graph with a cos function
  for (Int_t i=0; i<n; i++) {
    x[i] = i*0.5;
    y[i] = 5*cos(x[i]+0.2);
    x1[i] = i*0.5;
    y1[i] = 5*sin(x[i]+0.2);
  }
  
  TGraph *gr1 = new TGraph(n,x,y);
  TGraph *gr2 = new TGraph(n,x1,y1);
  
  TCanvas *myc1 = new TCanvas("myc1","Two Graphs",200,10,600,400);
  
  // draw the graph with axis, contineous line, and put a * at each point
  gr1->SetLineColor(4);
  gr1->Draw("AC*");
  
  // superimpose the second graph by leaving out the axis option "A"
  gr2->SetLineWidth(3);
  gr2->SetMarkerStyle(21);
  gr2->SetLineColor(2);
  gr2->Draw("CP");

  myc1->Print("plots/TwoGrap.png");  
  myc1->Print("plots/TwoGrap.pdf");  

}
