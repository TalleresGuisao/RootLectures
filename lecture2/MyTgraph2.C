{
  //TGraphErrors *myTgr = new TGraphErrors("ExampleData.txt");
  auto myTgr = new TGraphErrors("ExampleData.txt");
  myTgr->Draw("AP");
  
  //TGraphErrors myTgr2("ExampleData.txt");
  //myTgr2.Draw("AP");

}
