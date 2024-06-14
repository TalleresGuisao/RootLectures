void Example2_Read_from_file(){
  // Let's open the TFile
  //TFile in_file("my_rootfile.root");
  auto in_file = new TFile("my_rootfile.root");
  in_file->ls();
  
  // Get the Histogram out
  auto h = in_file->Get<TH1F>("myh");
  
  // Draw it
  auto myCanvas = new TCanvas();
  //h->DrawClone();
  h->Draw();

  myCanvas->Print("plots/myhfromfile.png");  
}
