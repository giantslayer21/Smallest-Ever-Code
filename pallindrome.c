char s[' '];
c,z,t;
m(x,y) 
{ 
   t= (y?m(x ^ y, (~x & y) <<!z):x); 
} 
p(i)
{
    if(s[i])
    {
        if(s[i]!=s[m(m(strlen(s),i),!z)])
    	    c=abs(~c);
    	p(abs(~i));
	}
}
main()
{
    gets(s);
    p(z);
    puts(c?"False":"True");
 }                                                                                                                                                                                           
