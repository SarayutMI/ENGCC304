#include <stdio.h>
#include <string.h>
#include <fstream>

int n;
int d = 0;
int m = 0;
int y = 0;
int maxY = 0;
int maxM = 0;
int minY = 999;
int minM = 999;

char name[10];
char minN[10];
char maxN[10];

int main()
{
    FILE *file;
    file = fopen("a.txt", "r");
    fscanf(file, "%*[^\n]");
    if (file == NULL)
    {
        printf("\nNothing Data In This File [Err: Error Opening File]");
    } // end if else

    showfile(file);
    fclose(file);
    printf("\nMax: %s [%d Years, %d Months]", maxN, maxY, maxM);
    printf("\nMin: %s [%d Years, %d Months]", minN, minY, minM);
    return 0;
}

int showfile(FILE *a)
{

    while (EOF != fscanf(a, "%d %s %d-%d-%d", &n, &name, &y, &m, &d))
    {
        if (d > 21)
        {
            m += 1;
        }

        if ((m + 6) == 12)
        {
            m = 0;
        }
        else if ((m + 6) > 12)
        {
            m = (12 - m) + 6;
        }
        else if ((m + 6) < 12)
        {
            m = 6 - m;
        }

        if ((m + 6) >= 12)
        {
            y = 2018 - y - 1;
        }
        else
        {
            y = 2018 - y;
        }

        if (y > maxY)
        {
            strcpy(maxN, name);
            maxY = y;
            maxM = m;
        }
        else if (y < minY)
        {
            strcpy(minN, name);
            minY = y;
            minM = m;
        }

        printf("%s %d years, %d months\n", name, y, m);
    }
    return 0;
}
