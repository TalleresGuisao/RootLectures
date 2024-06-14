void Example7_myTtree_fromfile() {
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
   auto f = TFile::Open("simplest_tree2.root","RECREATE");
   TH1F h1("h1","y distribution",10,0,30);
   TTree mytree( "mytree" , "data from ascii file" );
   mytree.Branch ("X" , &x, "x/I");
   mytree.Branch ("Y" , &y, "y/F");
   mytree.Branch ("Z" , &z, "z/F");

   while (1) {
      in >> x >> y >> z;
      if (!in.good()) break;
      //if (nlines < 5) printf("x=%1i, y=%3f, z=%3f\n",x,y,z);
      if (nlines < 5) cout<< Form("x=%1i, y=%1.3f, z=%1.3f",x,y,z) << endl;
      h1.Fill(y);
      mytree.Fill();
      nlines++;
   }
   //printf(" found %d points\n",nlines);
   cout << Form(" found %d points",nlines) << endl;

   in.close();
 
   f->Write();
}
