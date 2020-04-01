vector<int> primeFactors(int n) 
{ 
	vector<int>v;
    while (n%2 == 0) 
    { 
        v.pb(2); 
        n = n/2; 
    } 
  
    
    for (int i = 3; i <= sqrt(n); i = i+2) 
    { 
        
        while (n%i == 0) 
        { 
        	v.pb(i);
            n = n/i; 
        } 
    } 
  
    
    if (n > 2) 
    		v.pb(n);

    return v;
}
