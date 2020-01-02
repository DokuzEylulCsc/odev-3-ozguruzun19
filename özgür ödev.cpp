#include<stdio.h>
#include<stdlib.h>
#include <conio.h>
#include<math.h>
main()
{
	int e,ogrencisayi,sorusayisi,i,puan=0,yanlis=0,d;
	printf("soru sayisini giriniz\n");
	scanf("%d",&sorusayisi);
	char cevap[sorusayisi],verilencevap[sorusayisi];
	for(i=0;i<sorusayisi;i++){
	printf("%d. sorunun cevabýný giriniz\n",i+1);
    scanf("%s",&cevap[i]);
}
printf("kac ogrenci giriceksiniz\n");
scanf("%d",&ogrencisayi);
int nott[ogrencisayi-1],ogrencino[ogrencisayi];
for(i=0;i<ogrencisayi;i++)
{
	printf("ogrenci no giriniz\n");
	scanf("%d",&ogrencino[i]);
	puan=0;
	yanlis=0;
   for(d=1;d<=sorusayisi;d++)
   {
   	printf("%d. soruya verilen cevabini giriniz\n(bos birakilmis ise 0 giriniz)\n",d);
    scanf("%s",&verilencevap[d]);
   }
  for(d=1;d<=sorusayisi;d++)
{
  	if(cevap[d-1]==verilencevap[d])
{
  	puan+=4;
}
	else if(verilencevap[d]=='0')
	{
		puan+=0;
	}
	else
	{
	yanlis++;
	}
  }
  puan=puan-yanlis;
  nott[i]=puan;
}
    e=ogrencisayi;
    for(i=0;i<e;i++)
    {
	printf("%d nolu ogrencinin puani %d\n",ogrencino[i],nott[i]);
	
}
int enb;
enb=nott[0];
for(i=0;i<e;i++)
{
if(enb<nott[i])
{
	enb=nott[i];
	}	
	else 
	{
		enb=enb;
	}
}
printf("%d en buyuk not\n",enb);
int enk,ortalama,n,j,d1;
enk=nott[0];
for(i=0;i<e;i++)
{
if(enk>nott[i])
{
	enk=nott[i];
	}	
	else 
	{
		enk=enk;
	}
}
printf("%d en kucuk not\n",enk);
for(i=0;i<e;i++)
{
	ortalama+=nott[i];
}
printf("aciklik %d\n",enb-enk);
printf("ortalama %d\n",ortalama/e);
for(i=n-1;i>0;i--)
		for(j=0;j<i;j++)
		if(nott[j]>nott[j+1])
		{
			d1=nott[j];
			nott[j]=nott[j+1];
			nott[j+1]=d1;
		}
}


//* Kaynakça: Ömer Gers











