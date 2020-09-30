#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int k0,k1,k2,k3,k4,k5,k6,k7,k8,k9,p0,p1,p2,p3,p4,p5,p6,p7;
	int ma[10],sh[10],ky1[8][2],xo[8],ip[8],ep[8],j,i,a1,a2,b1,b2,s0[4][4],s1[4][4],l,m,p[4] ,ciph[8] ;
	printf("                                        	ALGORITHM SIMPLIFY DES   \n");

	printf("give 10 bits key only 0-1\n");
	printf("give me k1  ");
	scanf("%d",&k0);
	while(k0!=0&&k0!=1){
		printf("give again this key BIT k1\n");
	scanf("%d",&k0);
	}
	printf("give me k2  ");
	scanf("%d",&k1);
	while(k1!=0&&k1!=1){
		printf("give again this key BIT k2\n");
	scanf("%d",&k1);
	}
	printf("give me k3  ");
	scanf("%d",&k2);
	while(k2!=0&&k2!=1){
		printf("give again this key BIT k3\n");
	scanf("%d",&k2);
	}
	printf("give me k4  ");
	scanf("%d",&k3);
	while (k3!=0&&k3!=1){
	     printf("give again this key BIT k4\n");
	scanf("%d",&k3);
	} 
	printf("give me k5  ");                                             //10bit key
	scanf("%d",&k4);
	
	while(k4!=0&&k4!=1){
		printf("give again this key BIT k5\n");
	scanf("%d",&k4);
	}
	printf("give me k6  ");
	scanf("%d",&k5);
	while(k5!=0&&k5!=1){
		printf("give again this key BIT k6\n");
	scanf("%d",&k5);
	
	}
	printf("give me k7  ");
	scanf("%d",&k6);
	while(k6!=0&&k6!=1){
		printf("give again this key BIT k7\n");
	scanf("%d",&k6);
	} 
	printf("give me k8  ");
	scanf("%d",&k7);
	while(k7!=0&&k7!=1){
		printf("give again this key BIT k8 \n");
	scanf("%d",&k7);
	}
	printf("give me k9  ");
	scanf("%d",&k8);
	while(k8!=0&&k8!=1){
		printf("give again this key BIT k9 \n");
	scanf("%d",&k8);
	}
	printf("give me k10 ");
	scanf("%d",&k9);
	while(k9!=0&&k9!=1){
		printf("give again this key BIT k10\n");
	scanf("%d",&k9);
		
	}
	ma[0]=k2;
	ma[1]=k4;
	ma[2]=k1;
	ma[3]=k6;
	ma[4]=k3;   //p10
	ma[5]=k9;
	ma[6]=k0;
	ma[7]=k8;
	ma[8]=k7;
	ma[9]=k5;
	printf("                                       KEY GENERETION \nP10 is ");
	for (i=0;i<=9;i++){
	
	printf("%d",ma[i]);
	}
	
	
	for(i=0;i<=3;i++){

	sh[i]=ma[i+1];     //shift1
  
  }
  sh[4]= ma[0];//1rst to 5th
    for(i=5;i<=8;i++){
	
	sh[i]=ma[i+1];//shift1
	}
	   
  sh[9]=ma[5];//6th to 10th
  
  
  ky1[0][0]=sh[5];
  ky1[1][0]=sh[2];
  ky1[2][0]=sh[6];   //p8 kye 1
  ky1[3][0]=sh[3];
  ky1[4][0]=sh[7];
  ky1[5][0]=sh[4];
  ky1[6][0]=sh[9];
  ky1[7][0]=sh[8];
  printf("\nkey 1 is ");
  	for (i=0;i<=7;i++){
	
	printf("%d",ky1[i][0]);
	}
  
  
  	 sh[0]=ma[3]; //left shift3 or right shift 2
	 sh[1]=ma[4];  
	 sh[2]=ma[0]; 
	 sh[3]=ma[1];
	 sh[4]=ma[2];
	 sh[5]=ma[8]; //left shift3 or right shift 2
	 sh[6]=ma[9];  
	 sh[7]=ma[5]; 
	 sh[8]=ma[6];
	 sh[9]=ma[7];
  ky1[0][1]=sh[5];
  ky1[1][1]=sh[2];
  ky1[2][1]=sh[6];   //p8 kye 2
  ky1[3][1]=sh[3];
  ky1[4][1]=sh[7];
  ky1[5][1]=sh[4];
  ky1[6][1]=sh[9];
  ky1[7][1]=sh[8];
  
  printf("\nkey 2 is ");
  	for (i=0;i<=7;i++){
	
	printf("%d",ky1[i][1]);
	}
  printf("\n                                         PLAINTEXT ");
  printf("\ngive 8 bits plaintext 0-1"); //8bit plaintext
  	printf("\ngive me p1 ");
	scanf("%d",&p0);
	while(p0!=0&&p0!=1){
		printf("give again this key BIT p1\n");
	scanf("%d",&p0);
	}
	printf("give me p2 ");
	scanf("%d",&p1);
	while(p1!=0&&p1!=1){
		printf("give again this key BIT p2\n");
	scanf("%d",&p1);
	}
	printf("give me p3 ");
	scanf("%d",&p2);
	while(p2!=0&&p2!=1){
		printf("give again this key BIT p3\n");
	scanf("%d",&p2);
	}
	printf("give me p4 ");
	scanf("%d",&p3);
	while (p3!=0&&p3!=1){
	     printf("give again this key BIT p4\n");
	scanf("%d",&p3);
	} 
	printf("give me p5 ");                                             //8bits
	scanf("%d",&p4);
	
	while(p4!=0&&p4!=1){
		printf("give again this key BIT p5\n");
	scanf("%d",&p4);
	}
	printf("give me p6 ");
	scanf("%d",&p5);
	while(p5!=0&&p5!=1){
		printf("give again this key BIT p6\n");
	scanf("%d",&p5);
	
	}
	printf("give me p7 ");
	scanf("%d",&p6);
	while(p6!=0&&p6!=1){
		printf("give again this key BIT p7\n");
	scanf("%d",&p6);
	} 
	printf("give me p8 ");
	scanf("%d",&p7);
	while(p7!=0&&p7!=1){
		printf("give again this key BIT p8\n");
	scanf("%d",&p7);
	}
 	printf("                                    	ENCRYPTION   \n");

	ip[0]=p1;
	ip[1]=p5;
	ip[2]=p2;
	ip[3]=p0;
	ip[4]=p3;   //IP
	ip[5]=p7;
	ip[6]=p4;
	ip[7]=p6;
	
	
	ep[0]=ip[7];
	ep[1]=ip[4];
	ep[2]=ip[5];
	ep[3]=ip[6];
	ep[4]=ip[5];	//e/p
	ep[5]=ip[6];	
	ep[6]=ip[7];	
	ep[7]=ip[4];
	for(i=0;i<=7;i++){

	xo[i]=ep[i]^ky1[i][0];     //xor
  
  }
  s0[0][0]=1;
  s0[0][1]=0;
  s0[0][2]=3;
  s0[0][3]=2;
  s0[1][0]=3;
  s0[1][1]=2;
  s0[1][2]=1;
  s0[1][3]=0;
  s0[2][0]=0;
  s0[2][1]=2;  //s0
  s0[2][2]=1;
  s0[2][3]=3;
  s0[3][0]=3;
  s0[3][1]=1;
  s0[3][2]=3;
  s0[3][3]=2;   
  
  
  s1[0][0]=0;
  s1[0][1]=1;
  s1[0][2]=2;
  s1[0][3]=3;
  s1[1][0]=2;
  s1[1][1]=0;
  s1[1][2]=1;
  s1[1][3]=3;
  s1[2][0]=3; //s1
  s1[2][1]=0;
  s1[2][2]=1;
  s1[2][3]=0;
  s1[3][0]=2;
  s1[3][1]=1;
  s1[3][2]=0;
  s1[3][3]=3;
  l=0;
  m=0;  
  if (xo[0]==1){
  	l=2;
  	
  }
  if (xo[1]==1){
  	m=2;
  	
  }
  l=l+xo[3];  // row
  m=m+xo[2];  // column
 
   a1=s0[l][m]/2  ;      
   a2=s0[l][m]%2  ;
  l=0;
  m=0; 
  if (xo[4]==1){
  	l=2;
  	
  }
  if (xo[5]==1){
  	m=2;
  	
  }
   l=l+xo[7];  // row
   m=m+xo[6];  // column
   b1=s1[l][m]/2  ;      
   b2=s1[l][m]%2  ;
   
   p[0]=a2;
   p[1]=b2;//p4
   p[2]=b1;
   p[3]=a1;
   printf("\nP4 is %d%d%d%d ",a2,b2,b1,a1);
   printf("\nThe Function Fk1 is ");
   	for(i=0;i<=3;i++){

	p[i]=p[i]^ip[i];     //xor p4 xor ip1-4
  printf("%d",p[i]);
  }
   	ip[0]=ip[4];
	ip[1]=ip[5];
	ip[2]=ip[6];
	ip[3]=ip[7];
	ip[4]=p[0];   //SW
	ip[5]=p[1];
	ip[6]=p[2];
	ip[7]=p[3];
	printf("\nThe switch function SW is ");
	for(i=0;i<=7;i++){

	   
  printf("%d",ip[i]);
  }
	ep[0]=ip[7];
	ep[1]=ip[4];
	ep[2]=ip[5];
	ep[3]=ip[6];
	ep[4]=ip[5];	//e/p
	ep[5]=ip[6];	
	ep[6]=ip[7];	
	ep[7]=ip[4];
	for(i=0;i<=7;i++){

	xo[i]=ep[i]^ky1[i][1];     //xor
  
  }
  l=0;
  m=0;  
  if (xo[0]==1){
  	l=2;
  	
  }
  if (xo[1]==1){
  	m=2;
  	
  }
  l=l+xo[3];  // row
  m=m+xo[2];  // column
 
   a1=s0[l][m]/2  ;      
   a2=s0[l][m]%2  ;
  l=0;
  m=0; 
  if (xo[4]==1){
  	l=2;
  	
  }
  if (xo[5]==1){
  	m=2;
  	
  }
   l=l+xo[7];  // row
   m=m+xo[6];  // column
   b1=s1[l][m]/2  ;      
   b2=s1[l][m]%2  ;
   
   p[0]=a2;
   p[1]=b2;//p4
   p[2]=b1;
   p[3]=a1;
      printf("\nP4 is %d%d%d%d ",a2,b2,b1,a1);
   printf("\nThe Function Fk2 is ");
   	for(i=0;i<=3;i++){

	p[i]=p[i]^ip[i];     //xor p4 xor ip1-4
   printf("%d",p[i]);
  }
   ip[0]=p[0];
   ip[1]=p[1];
   ip[2]=p[2];
   ip[3]=p[3]; 
   
   ciph[0]=ip[3];
   ciph[1]=ip[0];
   ciph[2]=ip[2];
   ciph[3]=ip[4];
   ciph[4]=ip[6];
   ciph[5]=ip[1];
   ciph[6]=ip[7];
   ciph[7]=ip[5];
   printf("\nThe ciphertext is ");
   for(i=0;i<=7;i++){

	printf("%d",ciph[i] ) ;   //xor p4 xor ip1-4
  
  }
  
  
  
  
  
  
  printf("       \n                                        DECRYPTION                        \n           ");
  
  
  
  
  
  
  
  
  
  	ip[0]=ciph[1];
	ip[1]=ciph[5];
	ip[2]=ciph[2];
	ip[3]=ciph[0];
	ip[4]=ciph[3];   //IP
	ip[5]=ciph[7];
	ip[6]=ciph[4];
	ip[7]=ciph[6];
	
	
	ep[0]=ip[7];
	ep[1]=ip[4];
	ep[2]=ip[5];
	ep[3]=ip[6];
	ep[4]=ip[5];	//e/p
	ep[5]=ip[6];	
	ep[6]=ip[7];	
	ep[7]=ip[4];
	for(i=0;i<=7;i++){

	xo[i]=ep[i]^ky1[i][1];     //xor
  
  }
    l=0;
  m=0;  
  if (xo[0]==1){
  	l=2;
  	
  }
  if (xo[1]==1){
  	m=2;
  	
  }
  l=l+xo[3];  // row
  m=m+xo[2];  // column
 
   a1=s0[l][m]/2  ;      
   a2=s0[l][m]%2  ;
  l=0;
  m=0; 
  if (xo[4]==1){
  	l=2;
  	
  }
  if (xo[5]==1){
  	m=2;
  	
  }
   l=l+xo[7];  // row
   m=m+xo[6];  // column
   b1=s1[l][m]/2  ;      
   b2=s1[l][m]%2  ;
   
   p[0]=a2;
   p[1]=b2;//p4
   p[2]=b1;
   p[3]=a1;
    printf("\nP4 is %d%d%d%d ",a2,b2,b1,a1);
   printf("\nThe Function Fk2 is ");
      	for(i=0;i<=3;i++){

	p[i]=p[i]^ip[i];     //xor p4 xor ip1-4
  printf("%d",p[i]);
  }
   	ip[0]=ip[4];
	ip[1]=ip[5];
	ip[2]=ip[6];
	ip[3]=ip[7];
	ip[4]=p[0];   //SW
	ip[5]=p[1];
	ip[6]=p[2];
	ip[7]=p[3];
	printf("\nThe switch function SW is ");
	for(i=0;i<=7;i++){

	   
  printf("%d",ip[i]);
  }
	ep[0]=ip[7];
	ep[1]=ip[4];
	ep[2]=ip[5];
	ep[3]=ip[6];
	ep[4]=ip[5];	//e/p
	ep[5]=ip[6];	
	ep[6]=ip[7];	
	ep[7]=ip[4];
	for(i=0;i<=7;i++){

	xo[i]=ep[i]^ky1[i][0];     //xor
  
  }
  l=0;
  m=0;  
  if (xo[0]==1){
  	l=2;
  	
  }
  if (xo[1]==1){
  	m=2;
  	
  }
  l=l+xo[3];  // row
  m=m+xo[2];  // column
 
   a1=s0[l][m]/2  ;      
   a2=s0[l][m]%2  ;
  l=0;
  m=0; 
  if (xo[4]==1){
  	l=2;
  	
  }
  if (xo[5]==1){
  	m=2;
  	
  }
   l=l+xo[7];  // row
   m=m+xo[6];  // column
   b1=s1[l][m]/2  ;      
   b2=s1[l][m]%2  ;
   
   p[0]=a2;
   p[1]=b2;//p4
   p[2]=b1;
   p[3]=a1;
      printf("\nP4 is %d%d%d%d ",a2,b2,b1,a1);
   printf("\nThe Function Fk1 is ");
   	for(i=0;i<=3;i++){

	p[i]=p[i]^ip[i];     //xor p4 xor ip1-4
   printf("%d",p[i]);
  }
   ip[0]=p[0];
   ip[1]=p[1];
   ip[2]=p[2];
   ip[3]=p[3]; 
   
   ciph[0]=ip[3];
   ciph[1]=ip[0];
   ciph[2]=ip[2];
   ciph[3]=ip[4];
   ciph[4]=ip[6];
   ciph[5]=ip[1];
   ciph[6]=ip[7];
   ciph[7]=ip[5];
   printf("\nThe decryption giving this plaintext  ");
   for(i=0;i<=7;i++){

	printf("%d",ciph[i] ) ;   //xor p4 xor ip1-4


  
  }
  	if(p0==ciph[0]&&p1==ciph[1]&&p2==ciph[2]&&p3==ciph[3]&&p4==ciph[4]&&p5==ciph[5]&&p6==ciph[6]&&p7==ciph[7]){
		printf("\nSUCCESS DECRYPTION OF CIPHERTEXT");
	}
	
  	return 0;

  } 
  
	
	


