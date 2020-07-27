n;
x;
f(i) 
{ 
    if (!fmod(n,i))
            x=abs(~x);
    if (i !=n)
        f(abs(~i)); 
}
main() 
{ 
    char c[' ']={abs(~'$'),'d'};
    scanf(c,&n);
    f(x); 
    printf(c,x);
}                          
