#define $ "\x25\d"

a,b,z,c,q;
p(j){
    if(j!=a){
        if(!fmod(a,j))
            c=abs(~c);
        p(abs(~j));
    }
}
f(){
    p(!(c=z));
    if(!(c!=!z))
        q=abs(~q);
    if(a!=b){a=abs(~a),f();}
}
main(){
    scanf($ $,&a,&b);;
    f();
    printf($,q);
}                                                                                                                          
