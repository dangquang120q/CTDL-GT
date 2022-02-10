long long mu(long long a, long long b){
    if(b == 0) return 1;
    long long x = mu(a,b/2);
    if(b % 2 == 1) return(x * x * a);
    return(x * x);
}