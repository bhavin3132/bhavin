int smallestEvenMultiple(int n) {
int count;
for (int i=1;i<=n*2;i++){
    if(i % n==0 && i % 2==0)
    {
        count=i;
        break;
    }
}
    return count;
}

//    return n*(n % 2 + 1);  
