void Example1_write_to_file(){
		   
  // Instance of our histogram
  TH1F myh("myh","myh",100,-5,5);
  
  // Let's fill it randomly
  myh.FillRandom("gaus");
  
  // Let's open a TFile
  TFile out_file("my_rootfile.root","RECREATE");
  
  // Write the histogram in the file
  myh.Write();
  
  // Close the file
  out_file.Close();
}


  
