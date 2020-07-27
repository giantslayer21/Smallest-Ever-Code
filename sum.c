char c[]="!\d";

e,s,z,o,r;
p(x, y) 
{ r=y?p(x^y,(x&y)<<!o):x;
}
f(){
    if(!(scanf(c,&e)!=z)){
        s=p(s,e);
        f();
    }
    
}
main(){
    
    c[z]=p('$',!z);
    f();
    z=!z;
    f();
    printf(c,s);
}                                
