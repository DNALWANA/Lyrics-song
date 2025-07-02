#include<stdio.h>
#include<string.h>
#include<windows.h>


int main(){

    char *lirik[] ={"jangan", "salahkan", "faham", "ku kini", "tertuju", "oooooooooohh\n", "siapa", "yang tau", "siapa yang mauuuuuuuuuu", "kau disanaa", "aku diseberangmu\n", "cerita kita", "sulit dicerna", "tak lagi samaa", "cara beerdoa", " :( :( :( :( "};

    int delay[] = { 100,100,100,1500,100,1000,100,1500,1000,1000,1200,100,100,100,1000,1000};

    int count = sizeof(lirik) / sizeof(lirik[0]);

    for (int i = 0; i < count; i++)
    {
        int song = strlen(lirik[i]);
        
        for (int p = 0; p < song; p++)
        {
            putchar(lirik[i][p]);
            fflush(stdout);
            Sleep(100);
        }
        
        
        putchar(' ');
        Sleep(delay[i]);
    }
    
return 0;
}