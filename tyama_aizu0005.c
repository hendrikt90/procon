int g(x,y){return y?g(y,x%y):x;}main(x,y,z){for(;~scanf("%d%d",&x,&y);printf("%d %d\n",z,x/z*y))z=x>y?g(x,y):g(y,x);exit(0);}