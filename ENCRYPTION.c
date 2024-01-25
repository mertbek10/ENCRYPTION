#include <stdio.h>
#include <string.h>

void metniDosyadanOku (char dosyaYolu[], char metin[]){ //TEXT DOSYASINDAN SIFRELEMEK ISTEDIGIMIZ MESAJI OKUMAK ICIN FONKSIYON 
	FILE *dosya = fopen(dosyaYolu,"r");
	fgets(metin, 1000 , dosya);
	
	fclose(dosya);
	
}

void writetext(char dosyaAdi[],char icerik[]) {//SIFRELENMIS METNI YENI TEXT DOSYASINA YAZMAK ICIN FONKSIYON
	
	FILE *dosya = fopen(dosyaAdi, "w");
	fprintf(dosya, "%s", icerik);
	
	fclose(dosya);
}

void sifre(char message[], int key)//MESAFI SIFRELEME FONKSIYONU
{
	int i;
	for(i=0 ; i < strlen(message) ; i++)
	{
		if (message[i]== ' ')//BOSLUGA SIFRELEME ISLEMI YAPMA!!
		{
			continue;
		}
		message[i]= message[i] + key;//HER KARAKTERI KEY KADAR ASC2 DE KAYDIR
	}
}

int main() 
{
	
	char text[3000];
	
	int key = 3;
	
	metniDosyadanOku("sifresiz.txt",text);//SIFRESIZ TEXT DOSYASI
	
	sifre(text, key);
	
	writetext("sifreli_text.txt", text);//YENI TEXT DOYASI
	printf("**** Your file has been created as a txt file ****");
	
	return 0;
}
