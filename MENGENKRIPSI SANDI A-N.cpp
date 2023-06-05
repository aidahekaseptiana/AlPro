#include <stdio.h>

int main()
{
    char huruf[100];
    int i;
    printf("Enkripsi Menggunakan Sandi A-N");
    
    printf("\nMasukan Kalimat Yang Anda Ingin Ubah= ");
    scanf("%s", huruf);
    
    printf("\nSetelah DiEnkripsi, Kalimat Anda Menjadi: ");

    for(int index = 0; huruf[i] != '\0'; i++)
    {
        switch(huruf[i])
        {
        case 'a':
            printf("n");
            break;
        case 'b':
            printf("o");
            break;
        case 'c':
            printf("p");
            break;
        case 'D':
            printf("Q");
            break;
        case 'e':
            printf("r");
            break;
        case 'f':
            printf("s");
            break;
        case 'g':
            printf("t");
            break;
        case 'h':
            printf("u");
            break;
        case 'i':
            printf("v");
            break;
        case 'j':
            printf("w");
            break;
        case 'k':
            printf("x");
            break;
        case 'l':
            printf("y");
            break;
        case 'm':
            printf("z");
            break;
        case 'n':
            printf("a");
            break;
        case 'o':
            printf("b");
            break;
        case 'p':
            printf("c");
            break;
        case 'q':
            printf("d");
            break;
        case 'r':
            printf("e");
            break;
        case 's':
            printf("f");
            break;
        case 't':
            printf("g");
            break;
        case 'u':
            printf("h");
            break;
        case 'v':
            printf("i");
            break;
        case 'w':
            printf("j");
            break;
        case 'x':
            printf("k");
            break;
        case 'y':
            printf("l");
            break;
        case 'z':
            printf("m");
            break;
        default:
            printf("%c",huruf[i]);

        }
    }
    return 0;
}
