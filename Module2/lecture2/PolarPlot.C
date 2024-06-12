{
  auto myCanvas = new TCanvas("myCanvas","myCanvas",600,600);
  
  double rmin = 0.;
  double rmax = TMath::Pi()*6.;
  const int npoints = 1000;
  double r[npoints];
  double theta[npoints];
  Double_t er[npoints];
  Double_t etheta[npoints];
  for (int ipt = 0; ipt < npoints; ipt++) {
    theta[ipt] = ipt*(rmax-rmin)/npoints+rmin;
    r[ipt] =(ipt+1)*0.05;
    //r[ipt] = TMath::Sin(theta[ipt]);
    etheta[ipt]  = TMath::Pi()/16.;
    er[ipt] = 0.05;
  }
  auto grP1 = new TGraphPolar(npoints,theta,r);
  grP1->SetTitle("                  Polar");
  grP1->SetLineWidth(3);
  grP1->SetLineColor(2);
  grP1->Draw("L");
  gPad->Update();
  grP1->GetPolargram()->SetToRadian();

  myCanvas->Print("plots/Grap_Polarone.png");  
  myCanvas->Print("plots/Grap_Polarone.pdf");

  
  auto myCanvas2 = new TCanvas("myCanvas2","myCanvas2",600,600);
  auto grP2 = new TGraphPolar(npoints,theta,r,etheta,er);
  grP2->SetTitle("                  Polar with error");
  grP2->SetMarkerStyle(20);
  grP2->SetMarkerSize(2.);
  grP2->SetMarkerColor(4);
  grP2->SetLineWidth(3);
  grP2->SetLineColor(2);
  grP2->Draw("PE");
  //gPad->Update();
  myCanvas2->Update();
  grP2->GetPolargram()->SetToRadian();

  myCanvas2->Print("plots/Grap_Polartwo.png");  
  myCanvas2->Print("plots/Grap_Polartwo.pdf");

  
}
