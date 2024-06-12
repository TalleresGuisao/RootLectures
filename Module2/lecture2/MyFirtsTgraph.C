
void MyFirtsTgraph(){
//  TGraphErrors *myTgr = new TGraphErrors("ExampleData.txt");
  auto myTgr = new TGraphErrors("ExampleData.txt");
  myTgr->Draw("AP");
  //std::cout<< "here"  << std::endl;
  
 // TGraphErrors myTgr2("ExampleData.txt");
//  myTgr2.Draw("AP*");

}
