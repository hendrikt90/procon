int gcd2(int x,int y){if(!y)return x;return gcd2(y,x%y);}
int gcd(int x,int y){return x>y?gcd2(x,y):gcd2(y,x);}
main(){int x,y;for(gets(&x);~scanf("%d%d",&x,&y);printf("%d\n",gcd(x,y)));exit(0);}