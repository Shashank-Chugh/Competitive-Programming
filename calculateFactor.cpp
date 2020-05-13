//do n^2(select any two numbers) selection in set returned feasible if n is 1e9 ( sqrt(n) factors )
//CHECK  (duplicates | sort ? )
vector<int> calculateFactor(int n) 
{ 
    // Note that this loop runs till square root 
  vector<int> temp;
  int l = sqrt(n);
    for (int i=1; i<=l; i++) 
    { 
        if (n%i == 0) 
        { 
            temp.pb(i);
            temp.pb(n/i);
        }
    } 
    return temp;
} 
