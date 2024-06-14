int Example6_myTtree_fromfile()
{
  TFile f( "simplest_tree.root", "RECREATE" );
  TTree t( "mytree" , "Tree of data for my analysis" );

  //ReadFile fills the tree    from txt file
  t.ReadFile ("MyExpData.txt", "det/I:energy/F:time/F" );

  //Print displays stats
  t.Print ();

  //Scan prints out data
  t.Scan ( "det:energy:time" );

  //Draw : en-time plot
  // We set up filter on det
  t.Draw ( "energy:time" , "det >= 7" );

  //Write saves tree in file 
  t.Write ();

  return 0;
}
