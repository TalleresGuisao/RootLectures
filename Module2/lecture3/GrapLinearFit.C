// Reads the points from a file and produces a simple graph.
int GrapLinearFit(){
  //gStyle->SetOptFit(1111);
  gStyle->SetOptTitle(0);
  gStyle->SetOptStat(0); 
  gStyle->SetOptFit(0);
  
  auto c=new TCanvas();
  c->SetGrid();
  
  //TGraphErrors graph("./macro2_input.txt","%lg %lg %lg");
  TGraphErrors graph("./macro2_input_mio.txt","%lg %*s %lg %*s %lg");// by hand we put a "comma" in the txt file
  //TGraphErrors graph("./macro2_input_mio.txt","%lg, %lg;; %lg");
  graph.SetMarkerStyle(kCircle);
  graph.SetFillColor(0);
  graph.SetMinimum(0.0);
  graph.SetMaximum(70);
  graph.SetTitle(""); 
  graph.GetYaxis()->SetTitle("Arb.Units"); 
  graph.GetYaxis()->CenterTitle(true);
  graph.GetXaxis()->CenterTitle(true);
  graph.GetXaxis()->SetTitle("lenght [cm]");
  graph.DrawClone("APE");
  
  // Define a linear function 
  auto f = new TF1("Linear law","[0]+x*[1]",.5,10.5);
  //auto f = new TF1("Linear law","pol2",.5,10.5);
  //auto f = new TF1("Linear law","cheb2",.5,10.5);
  //f->SetParameters(1000000, 100000, 1000000);
  // Let's make the function line nicer
  f->SetLineColor(kRed);
  f->SetLineStyle(2);
  
  // Fit it to the graph and draw it
  //graph.Fit(f);
  //f->Draw("same");

  //ROOT::Math::MinimizerOptions::SetDefaultMinimizer("Minuit2");
  //TFitResultPtr r = graph.Fit(f,"L S E R");

  TFitResultPtr r = graph.Fit(f,"SR");
  TMatrixDSym cov = r->GetCovarianceMatrix();   // to access the covariance matrix
  Double_t chi2   = r->Chi2();                  // to retrieve the fit chi2
  Double_t ndf    = f->GetNDF();
  Double_t MinFCN1   = r->MinFcnValue();        // to retrieve the fit MinFcn
  Double_t Prob1  =  f->GetProb();             // to retrieve the fit Prob
  cout << "fit chi2 " << chi2 << endl;
  cout << "fit1 MinFCN " << MinFCN1 << endl;
  cout << "fit1 Prob " << MinFCN1 << endl;  
  Double_t par0   = r->Parameter(0);          // retrieve the value for the parameter 0
  Double_t err0   = r->ParError(0);           // retrieve the error for the parameter 0
  Double_t par1   = r->Parameter(1);          // retrieve the value for the parameter 1
  Double_t err1   = r->ParError(1);           // retrieve the error for the parameter 1
  r->Print("V");                                // print full information of fit including covariance matrix
  //r->Write();                                 // store the result in a file
  f->Draw("same");
  
  
  // Draw the Legend
  TLegend leg(.1,.7,.3,.9," Fit options ");
  leg.SetFillColor(0);
  //leg.AddEntry(&graph_expected,"Expected Points");
  leg.AddEntry(&graph,"Measured Points");
  leg.AddEntry(f,"Linear fit","L");
  leg.DrawClone("Same");
  
  auto legend2 = new TLegend(.7, .1, .9, .3,"Fit Solution");
  legend2->AddEntry("",Form("Intercept = %1.2f #pm %1.2f ",par0,err0),"");
  legend2->AddEntry("",Form("Slope = %1.2f #pm %1.2f ",par1,err1),"");
  legend2->AddEntry("",Form("#chi^{2} = %1.2f ",chi2),"");
  legend2->Draw("Same");
  
  graph.Print();
  
  c->Print("plots/Grap_LinearFit.png");  
  c->Print("plots/Grap_LinearFit.pdf");  
  
  return 0;
}
