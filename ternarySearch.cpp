double func(double x)
{ 
return -1*x*x + 2*x +3; 
}

// greater than log2(p) / log3(p) 
// pow((2/3),i) <p
double ts(double start, double end)
{
    double l = start, r = end;

    for(int i=0; i<200; i++) {
      double l1 = (l*2+r)/3;
      double l2 = (l+2*r)/3;
      //cout<<l1<<" "<<l2<<endl;
      if(func(l1) > func(l2)) r = l2; else l = l1; //for maxima ,if minima change > to <
      }

     double x = l;
    return func(x);
}
