void Example7_myTtree_fromfile2() {
// read file 
   ifstream in;
   in.open("MyExpData.txt");
    if ( !in ) 
    {
      cout << "No se pudo abrir el archivo" << endl;
      exit( 1 );
    }
 
   Float_t y,z;
   Int_t x;
   Int_t nlines = 0;
   auto f = TFile::Open("simplest_tree2_2.root","RECREATE");
   TH1F h1("h1","y distribution",10,0,30);
   TNtuple ntuple("ntuple","data from ascii file","x:y:z");
 
   while (1) {
      in >> x >> y >> z;
      if (!in.good()) break;
      //if (nlines < 5) printf("x=%1i, y=%3f, z=%3f\n",x,y,z);
      if (nlines < 5) cout<< Form("x=%1i, y=%1.3f, z=%1.3f",x,y,z) << endl;
      h1.Fill(y);
      ntuple.Fill(x,y,z);
      nlines++;
   }
   //printf(" found %d points\n",nlines);
   cout << Form(" found %d points",nlines) << endl;

   in.close();
 
   f->Write();
}
