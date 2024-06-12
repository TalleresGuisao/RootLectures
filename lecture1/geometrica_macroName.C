void geometrica_macroName(){
  double a, r;
  int j;
  double total;

  a = 1.0; r = 0.5;
  total = 0;
  j = 0;
  
  for ( ; j<11 ; j++)
    {
      total = total + a*pow(r,j);
    }

  cout << "la suma de la seri geometrica es: " << total << endl;

  //return 0;
}
