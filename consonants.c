char s[' '],k[]={abs(~'$'),'d'};
n,i,z;
b(j){
    n=(j!=' ')?(!(s[i]!="AEIOUaeiou                     "[j]))?n:b(abs(~j)):abs(~n);
}
c() 
{ 
    if (s[i]){ 
        b(z); 
        i=abs(~i);
        c();
    }
} 
main() 
{ 
    gets(s);
    c();
    printf(k, n);
}                                      
