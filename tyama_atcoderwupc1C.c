#define M 800
int s[501][501],t[501][501];
int q[M];
main(x,y,i,j,f,g,_x,_y,px,py,qx,qy,rx,ry){
	scanf("%d%d",&y,&x);
		for(getchar(),j=0;j<y;getchar(),j++)
			for(i=0;i<x;i++)
				s[j][i]=getchar();
		for(i=0;i<x;i++)
			for(j=0;j<y;j++){
				if(s[j][i]=='S')px=i,py=j;
				if(s[j][i]=='C')qx=i,qy=j;
				if(s[j][i]=='G')rx=i,ry=j;
				if(s[j][i]!='#')s[j][i]=0;
			}
		memcpy(t,s,sizeof(t));
		q[0]=(px<<16)|py;s[q[0]&0xffff][q[0]>>16]=1;f=0;g=1;
		for(;f!=g;){
			_x=q[f]>>16,_y=q[f]&0xffff;f=(f+1)%M;
			if(s[_y][_x-1]==0)q[g]=((_x-1)<<16)|(_y),g=(g+1)%M,s[_y][_x-1]=s[_y][_x]+1;
			if(s[_y][_x+1]==0)q[g]=((_x+1)<<16)|(_y),g=(g+1)%M,s[_y][_x+1]=s[_y][_x]+1;
			if(s[_y-1][_x]==0)q[g]=((_x)<<16)|(_y-1),g=(g+1)%M,s[_y-1][_x]=s[_y][_x]+1;
			if(s[_y+1][_x]==0)q[g]=((_x)<<16)|(_y+1),g=(g+1)%M,s[_y+1][_x]=s[_y][_x]+1;
			if(s[qy][qx])break;
		}
		if(f==g)puts("-1"),exit(0);
		q[0]=(qx<<16)|qy;t[q[0]&0xffff][q[0]>>16]=1;f=0;g=1;
		for(;f!=g;){
			_x=q[f]>>16,_y=q[f]&0xffff;f=(f+1)%M;
			if(t[_y][_x-1]==0)q[g]=((_x-1)<<16)|(_y),g=(g+1)%M,t[_y][_x-1]=t[_y][_x]+1;
			if(t[_y][_x+1]==0)q[g]=((_x+1)<<16)|(_y),g=(g+1)%M,t[_y][_x+1]=t[_y][_x]+1;
			if(t[_y-1][_x]==0)q[g]=((_x)<<16)|(_y-1),g=(g+1)%M,t[_y-1][_x]=t[_y][_x]+1;
			if(t[_y+1][_x]==0)q[g]=((_x)<<16)|(_y+1),g=(g+1)%M,t[_y+1][_x]=t[_y][_x]+1;
			if(t[ry][rx])break;
		}
		if(f==g)puts("-1"),exit(0);
		printf("%d\n",s[qy][qx]-1+t[ry][rx]-1);
	exit(0);
}