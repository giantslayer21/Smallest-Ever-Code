char c[' ']={abs(~'$'),'\d'};

e,s,z;
p(x, y) 
{ s=y?p(x^y,(x&y)<<z):x;
}
f(){
    if(!(scanf(c,&e)!=z)){
        p(s,e);
        f();
    }
}
main(){
    f();
    z=!z;
    f();
    printf(c,s);
}         
