/* 2652946 ¼Æ¿Æ ÕÅ¶°ÕÜ */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
    double x;
    double ip, fp;
    int shiYi, yi, qianWan, baiWan, shiWan, wan;
    int qian, bai, shi, ge;
    int cents, jiao, fen;
    int yiGroupHas, wanGroupHas, geGroupHas, intHas;

    printf("ÇëÊäÈë[0-100ÒÚ)Ö®¼äµÄÊý×Ö:\n");
    scanf("%lf", &x);

    // ³¬¹ý 100 ÒÚ£¨¼´ >= 10000000000£©ÊÓÎª³¬³ö·¶Î§£¬²»Êä³öÈÎºÎÊý¾Ý
    if (x >= 10000000000.0)
    {
        return 0;
    }

    ip = floor(x);
    fp = x - ip;
    cents = (int)(fp * 100 + 0.5);
    jiao = cents / 10;
    fen = cents % 10;

    shiYi = (int)fmod(floor(ip / 1000000000.0), 10);
    yi = (int)fmod(floor(ip / 100000000.0), 10);
    qianWan = (int)fmod(floor(ip / 10000000.0), 10);
    baiWan = (int)fmod(floor(ip / 1000000.0), 10);
    shiWan = (int)fmod(floor(ip / 100000.0), 10);
    wan = (int)fmod(floor(ip / 10000.0), 10);
    qian = (int)fmod(floor(ip / 1000.0), 10);
    bai = (int)fmod(floor(ip / 100.0), 10);
    shi = (int)fmod(floor(ip / 10.0), 10);
    ge = (int)fmod(ip, 10.0);

    printf("´óÐ´½á¹ûÊÇ:\n");

    yiGroupHas = (shiYi != 0 || yi != 0);
    wanGroupHas = (qianWan != 0 || baiWan != 0 || shiWan != 0 || wan != 0);
    geGroupHas = (qian != 0 || bai != 0 || shi != 0 || ge != 0);
    intHas = (yiGroupHas || wanGroupHas || geGroupHas);

    if (yiGroupHas)
    {
        if (shiYi != 0)
        {
            switch (shiYi)
            {
                case 1:
                    printf("Ò¼");
                    break;
                case 2:
                    printf("·¡");
                    break;
                case 3:
                    printf("Èþ");
                    break;
                case 4:
                    printf("ËÁ");
                    break;
                case 5:
                    printf("Îé");
                    break;
                case 6:
                    printf("Â½");
                    break;
                case 7:
                    printf("Æâ");
                    break;
                case 8:
                    printf("°Æ");
                    break;
                case 9:
                    printf("¾Á");
                    break;
            }
            printf("Ê°");
        }

        if (yi != 0)
        {
            switch (yi)
            {
                case 1:
                    printf("Ò¼");
                    break;
                case 2:
                    printf("·¡");
                    break;
                case 3:
                    printf("Èþ");
                    break;
                case 4:
                    printf("ËÁ");
                    break;
                case 5:
                    printf("Îé");
                    break;
                case 6:
                    printf("Â½");
                    break;
                case 7:
                    printf("Æâ");
                    break;
                case 8:
                    printf("°Æ");
                    break;
                case 9:
                    printf("¾Á");
                    break;
            }
        }
        printf("ÒÚ");
    }

    if (wanGroupHas)
    {
        if (yiGroupHas && qianWan == 0)
        {
            printf("Áã");
        }

        if (qianWan != 0)
        {
            switch (qianWan)
            {
                case 1:
                    printf("Ò¼");
                    break;
                case 2:
                    printf("·¡");
                    break;
                case 3:
                    printf("Èþ");
                    break;
                case 4:
                    printf("ËÁ");
                    break;
                case 5:
                    printf("Îé");
                    break;
                case 6:
                    printf("Â½");
                    break;
                case 7:
                    printf("Æâ");
                    break;
                case 8:
                    printf("°Æ");
                    break;
                case 9:
                    printf("¾Á");
                    break;
            }
            printf("Çª");
        }

        if (baiWan != 0)
        {
            switch (baiWan)
            {
                case 1:
                    printf("Ò¼");
                    break;
                case 2:
                    printf("·¡");
                    break;
                case 3:
                    printf("Èþ");
                    break;
                case 4:
                    printf("ËÁ");
                    break;
                case 5:
                    printf("Îé");
                    break;
                case 6:
                    printf("Â½");
                    break;
                case 7:
                    printf("Æâ");
                    break;
                case 8:
                    printf("°Æ");
                    break;
                case 9:
                    printf("¾Á");
                    break;
            }
            printf("°Û");
        }
        else if (qianWan != 0 && (shiWan != 0 || wan != 0))
        {
            printf("Áã");
        }

        if (shiWan != 0)
        {
            switch (shiWan)
            {
                case 1:
                    printf("Ò¼");
                    break;
                case 2:
                    printf("·¡");
                    break;
                case 3:
                    printf("Èþ");
                    break;
                case 4:
                    printf("ËÁ");
                    break;
                case 5:
                    printf("Îé");
                    break;
                case 6:
                    printf("Â½");
                    break;
                case 7:
                    printf("Æâ");
                    break;
                case 8:
                    printf("°Æ");
                    break;
                case 9:
                    printf("¾Á");
                    break;
            }
            printf("Ê°");
        }
        else if (baiWan != 0 && wan != 0)
        {
            printf("Áã");
        }

        if (wan != 0)
        {
            switch (wan)
            {
                case 1:
                    printf("Ò¼");
                    break;
                case 2:
                    printf("·¡");
                    break;
                case 3:
                    printf("Èþ");
                    break;
                case 4:
                    printf("ËÁ");
                    break;
                case 5:
                    printf("Îé");
                    break;
                case 6:
                    printf("Â½");
                    break;
                case 7:
                    printf("Æâ");
                    break;
                case 8:
                    printf("°Æ");
                    break;
                case 9:
                    printf("¾Á");
                    break;
            }
        }
        printf("Íò");
    }

    if (geGroupHas)
    {
        if ((yiGroupHas || wanGroupHas) && qian == 0)
        {
            printf("Áã");
        }

        if (qian != 0)
        {
            switch (qian)
            {
                case 1:
                    printf("Ò¼");
                    break;
                case 2:
                    printf("·¡");
                    break;
                case 3:
                    printf("Èþ");
                    break;
                case 4:
                    printf("ËÁ");
                    break;
                case 5:
                    printf("Îé");
                    break;
                case 6:
                    printf("Â½");
                    break;
                case 7:
                    printf("Æâ");
                    break;
                case 8:
                    printf("°Æ");
                    break;
                case 9:
                    printf("¾Á");
                    break;
            }
            printf("Çª");
        }

        if (bai != 0)
        {
            switch (bai)
            {
                case 1:
                    printf("Ò¼");
                    break;
                case 2:
                    printf("·¡");
                    break;
                case 3:
                    printf("Èþ");
                    break;
                case 4:
                    printf("ËÁ");
                    break;
                case 5:
                    printf("Îé");
                    break;
                case 6:
                    printf("Â½");
                    break;
                case 7:
                    printf("Æâ");
                    break;
                case 8:
                    printf("°Æ");
                    break;
                case 9:
                    printf("¾Á");
                    break;
            }
            printf("°Û");
        }
        else if (qian != 0 && (shi != 0 || ge != 0))
        {
            printf("Áã");
        }

        if (shi != 0)
        {
            switch (shi)
            {
                case 1:
                    printf("Ò¼");
                    break;
                case 2:
                    printf("·¡");
                    break;
                case 3:
                    printf("Èþ");
                    break;
                case 4:
                    printf("ËÁ");
                    break;
                case 5:
                    printf("Îé");
                    break;
                case 6:
                    printf("Â½");
                    break;
                case 7:
                    printf("Æâ");
                    break;
                case 8:
                    printf("°Æ");
                    break;
                case 9:
                    printf("¾Á");
                    break;
            }
            printf("Ê°");
        }
        else if (bai != 0 && ge != 0)
        {
            printf("Áã");
        }

        if (ge != 0)
        {
            switch (ge)
            {
                case 1:
                    printf("Ò¼");
                    break;
                case 2:
                    printf("·¡");
                    break;
                case 3:
                    printf("Èþ");
                    break;
                case 4:
                    printf("ËÁ");
                    break;
                case 5:
                    printf("Îé");
                    break;
                case 6:
                    printf("Â½");
                    break;
                case 7:
                    printf("Æâ");
                    break;
                case 8:
                    printf("°Æ");
                    break;
                case 9:
                    printf("¾Á");
                    break;
            }
        }
    }

    // ÕûÊý²¿·ÖÎª 0 ÇÒÎÞ½Ç·Ö£ºÁãÔ²Õû
    if (!intHas && jiao == 0 && fen == 0)
    {
        printf("ÁãÔ²Õû\n");
        return 0;
    }

    // ÕûÊý²¿·ÖÎª 0 µ«ÓÐ½Ç·Ö£º°´»á¼ÆÏ°¹ß²»Êä³ö"ÁãÔ²"
    if (intHas)
    {
        printf("Ô²");
    }

    if (jiao == 0 && fen == 0)
    {
        printf("Õû\n");
    }
    else if (jiao != 0 && fen == 0)
    {
        switch (jiao)
        {
            case 1:
                printf("Ò¼");
                break;
            case 2:
                printf("·¡");
                break;
            case 3:
                printf("Èþ");
                break;
            case 4:
                printf("ËÁ");
                break;
            case 5:
                printf("Îé");
                break;
            case 6:
                printf("Â½");
                break;
            case 7:
                printf("Æâ");
                break;
            case 8:
                printf("°Æ");
                break;
            case 9:
                printf("¾Á");
                break;
        }
        printf("½ÇÕû\n");
    }
    else if (jiao == 0 && fen != 0)
    {
        if (intHas)
        {
            printf("Áã");
        }
        switch (fen)
        {
            case 1:
                printf("Ò¼");
                break;
            case 2:
                printf("·¡");
                break;
            case 3:
                printf("Èþ");
                break;
            case 4:
                printf("ËÁ");
                break;
            case 5:
                printf("Îé");
                break;
            case 6:
                printf("Â½");
                break;
            case 7:
                printf("Æâ");
                break;
            case 8:
                printf("°Æ");
                break;
            case 9:
                printf("¾Á");
                break;
        }
        printf("·Ö\n");
    }
    else
    {
        switch (jiao)
        {
            case 1:
                printf("Ò¼");
                break;
            case 2:
                printf("·¡");
                break;
            case 3:
                printf("Èþ");
                break;
            case 4:
                printf("ËÁ");
                break;
            case 5:
                printf("Îé");
                break;
            case 6:
                printf("Â½");
                break;
            case 7:
                printf("Æâ");
                break;
            case 8:
                printf("°Æ");
                break;
            case 9:
                printf("¾Á");
                break;
        }
        printf("½Ç");
        switch (fen)
        {
            case 1:
                printf("Ò¼");
                break;
            case 2:
                printf("·¡");
                break;
            case 3:
                printf("Èþ");
                break;
            case 4:
                printf("ËÁ");
                break;
            case 5:
                printf("Îé");
                break;
            case 6:
                printf("Â½");
                break;
            case 7:
                printf("Æâ");
                break;
            case 8:
                printf("°Æ");
                break;
            case 9:
                printf("¾Á");
                break;
        }
        printf("·Ö\n");
    }

    return 0;
}