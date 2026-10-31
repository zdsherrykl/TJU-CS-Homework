/* 2652946 º∆ø∆ ’≈∂∞’‹ */
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x;
    double ip, fp;
    int shiYi, yi, qianWan, baiWan, shiWan, wan;
    int qian, bai, shi, ge;
    int cents, jiao, fen;
    bool yiGroupHas, wanGroupHas, geGroupHas, intHas;

    cout << "«Î ‰»Î[0-100“⁄)÷Æº‰µƒ ˝◊÷:" << endl;
    cin >> x;

    // ≥¨π˝ 100 “⁄£®º¥ >= 10000000000£© ”Œ™≥¨≥ˆ∑∂Œß£¨≤ª ‰≥ˆ»Œ∫Œ ˝æ›
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

    cout << "¥Û–¥Ω·π˚ «:" << endl;

    yiGroupHas = (shiYi != 0 || yi != 0);
    wanGroupHas = (qianWan != 0 || baiWan != 0 || shiWan != 0 || wan != 0);
    geGroupHas = (qian != 0 || bai != 0 || shi != 0 || ge != 0);
    intHas = (yiGroupHas || wanGroupHas || geGroupHas);

    // “⁄º∂£∫ Æ“⁄Œª°¢“⁄Œª
    if (yiGroupHas)
    {
        if (shiYi != 0)
        {
            switch (shiYi)
            {
                case 0:
                    cout << "¡„";
                    break;
                case 1:
                    cout << "“º";
                    break;
                case 2:
                    cout << "∑°";
                    break;
                case 3:
                    cout << "»˛";
                    break;
                case 4:
                    cout << "À¡";
                    break;
                case 5:
                    cout << "ŒÈ";
                    break;
                case 6:
                    cout << "¬Ω";
                    break;
                case 7:
                    cout << "∆‚";
                    break;
                case 8:
                    cout << "∞∆";
                    break;
                case 9:
                    cout << "æ¡";
                    break;
            }
            cout << " ∞";
        }
        if (yi != 0)
        {
            switch (yi)
            {
                case 0:
                    cout << "¡„";
                    break;
                case 1:
                    cout << "“º";
                    break;
                case 2:
                    cout << "∑°";
                    break;
                case 3:
                    cout << "»˛";
                    break;
                case 4:
                    cout << "À¡";
                    break;
                case 5:
                    cout << "ŒÈ";
                    break;
                case 6:
                    cout << "¬Ω";
                    break;
                case 7:
                    cout << "∆‚";
                    break;
                case 8:
                    cout << "∞∆";
                    break;
                case 9:
                    cout << "æ¡";
                    break;
            }
        }
        cout << "“⁄";
    }

    // ÕÚº∂£∫«ßÕÚ°¢∞ŸÕÚ°¢ ÆÕÚ°¢ÕÚ
    if (wanGroupHas)
    {
        if (yiGroupHas && qianWan == 0)
        {
            cout << "¡„";
        }

        if (qianWan != 0)
        {
            switch (qianWan)
            {
                case 0:
                    cout << "¡„";
                    break;
                case 1:
                    cout << "“º";
                    break;
                case 2:
                    cout << "∑°";
                    break;
                case 3:
                    cout << "»˛";
                    break;
                case 4:
                    cout << "À¡";
                    break;
                case 5:
                    cout << "ŒÈ";
                    break;
                case 6:
                    cout << "¬Ω";
                    break;
                case 7:
                    cout << "∆‚";
                    break;
                case 8:
                    cout << "∞∆";
                    break;
                case 9:
                    cout << "æ¡";
                    break;
            }
            cout << "«™";
        }

        if (baiWan != 0)
        {
            switch (baiWan)
            {
                case 0:
                    cout << "¡„";
                    break;
                case 1:
                    cout << "“º";
                    break;
                case 2:
                    cout << "∑°";
                    break;
                case 3:
                    cout << "»˛";
                    break;
                case 4:
                    cout << "À¡";
                    break;
                case 5:
                    cout << "ŒÈ";
                    break;
                case 6:
                    cout << "¬Ω";
                    break;
                case 7:
                    cout << "∆‚";
                    break;
                case 8:
                    cout << "∞∆";
                    break;
                case 9:
                    cout << "æ¡";
                    break;
            }
            cout << "∞€";
        }
        else if (qianWan != 0 && (shiWan != 0 || wan != 0))
        {
            cout << "¡„";
        }

        if (shiWan != 0)
        {
            switch (shiWan)
            {
                case 0:
                    cout << "¡„";
                    break;
                case 1:
                    cout << "“º";
                    break;
                case 2:
                    cout << "∑°";
                    break;
                case 3:
                    cout << "»˛";
                    break;
                case 4:
                    cout << "À¡";
                    break;
                case 5:
                    cout << "ŒÈ";
                    break;
                case 6:
                    cout << "¬Ω";
                    break;
                case 7:
                    cout << "∆‚";
                    break;
                case 8:
                    cout << "∞∆";
                    break;
                case 9:
                    cout << "æ¡";
                    break;
            }
            cout << " ∞";
        }
        else if (baiWan != 0 && wan != 0)
        {
            cout << "¡„";
        }

        if (wan != 0)
        {
            switch (wan)
            {
                case 0:
                    cout << "¡„";
                    break;
                case 1:
                    cout << "“º";
                    break;
                case 2:
                    cout << "∑°";
                    break;
                case 3:
                    cout << "»˛";
                    break;
                case 4:
                    cout << "À¡";
                    break;
                case 5:
                    cout << "ŒÈ";
                    break;
                case 6:
                    cout << "¬Ω";
                    break;
                case 7:
                    cout << "∆‚";
                    break;
                case 8:
                    cout << "∞∆";
                    break;
                case 9:
                    cout << "æ¡";
                    break;
            }
        }

        cout << "ÕÚ";
    }

    // ∏ˆº∂£∫«ß°¢∞Ÿ°¢ Æ°¢∏ˆ
    if (geGroupHas)
    {
        if ((yiGroupHas || wanGroupHas) && qian == 0)
        {
            cout << "¡„";
        }

        if (qian != 0)
        {
            switch (qian)
            {
                case 0:
                    cout << "¡„";
                    break;
                case 1:
                    cout << "“º";
                    break;
                case 2:
                    cout << "∑°";
                    break;
                case 3:
                    cout << "»˛";
                    break;
                case 4:
                    cout << "À¡";
                    break;
                case 5:
                    cout << "ŒÈ";
                    break;
                case 6:
                    cout << "¬Ω";
                    break;
                case 7:
                    cout << "∆‚";
                    break;
                case 8:
                    cout << "∞∆";
                    break;
                case 9:
                    cout << "æ¡";
                    break;
            }
            cout << "«™";
        }

        if (bai != 0)
        {
            switch (bai)
            {
                case 0:
                    cout << "¡„";
                    break;
                case 1:
                    cout << "“º";
                    break;
                case 2:
                    cout << "∑°";
                    break;
                case 3:
                    cout << "»˛";
                    break;
                case 4:
                    cout << "À¡";
                    break;
                case 5:
                    cout << "ŒÈ";
                    break;
                case 6:
                    cout << "¬Ω";
                    break;
                case 7:
                    cout << "∆‚";
                    break;
                case 8:
                    cout << "∞∆";
                    break;
                case 9:
                    cout << "æ¡";
                    break;
            }
            cout << "∞€";
        }
        else if (qian != 0 && (shi != 0 || ge != 0))
        {
            cout << "¡„";
        }

        if (shi != 0)
        {
            switch (shi)
            {
                case 0:
                    cout << "¡„";
                    break;
                case 1:
                    cout << "“º";
                    break;
                case 2:
                    cout << "∑°";
                    break;
                case 3:
                    cout << "»˛";
                    break;
                case 4:
                    cout << "À¡";
                    break;
                case 5:
                    cout << "ŒÈ";
                    break;
                case 6:
                    cout << "¬Ω";
                    break;
                case 7:
                    cout << "∆‚";
                    break;
                case 8:
                    cout << "∞∆";
                    break;
                case 9:
                    cout << "æ¡";
                    break;
            }
            cout << " ∞";
        }
        else if (bai != 0 && ge != 0)
        {
            cout << "¡„";
        }

        if (ge != 0)
        {
            switch (ge)
            {
                case 0:
                    cout << "¡„";
                    break;
                case 1:
                    cout << "“º";
                    break;
                case 2:
                    cout << "∑°";
                    break;
                case 3:
                    cout << "»˛";
                    break;
                case 4:
                    cout << "À¡";
                    break;
                case 5:
                    cout << "ŒÈ";
                    break;
                case 6:
                    cout << "¬Ω";
                    break;
                case 7:
                    cout << "∆‚";
                    break;
                case 8:
                    cout << "∞∆";
                    break;
                case 9:
                    cout << "æ¡";
                    break;
            }
        }
    }

    // ’˚ ˝≤ø∑÷Œ™ 0 «“ŒﬁΩ«∑÷£∫¡„‘≤’˚
    if (!intHas && jiao == 0 && fen == 0)
    {
        cout << "¡„‘≤’˚" << endl;
        return 0;
    }

    // ’˚ ˝≤ø∑÷Œ™ 0 µ´”–Ω«∑÷£∫∞¥ª·º∆œ∞πﬂ≤ª ‰≥ˆ"¡„‘≤"
    if (intHas)
    {
        cout << "‘≤";
    }

    // Ω«°¢∑÷
    if (jiao == 0 && fen == 0)
    {
        cout << "’˚" << endl;
    }
    else if (jiao != 0 && fen == 0)
    {
        switch (jiao)
        {
            case 0:
                cout << "¡„";
                break;
            case 1:
                cout << "“º";
                break;
            case 2:
                cout << "∑°";
                break;
            case 3:
                cout << "»˛";
                break;
            case 4:
                cout << "À¡";
                break;
            case 5:
                cout << "ŒÈ";
                break;
            case 6:
                cout << "¬Ω";
                break;
            case 7:
                cout << "∆‚";
                break;
            case 8:
                cout << "∞∆";
                break;
            case 9:
                cout << "æ¡";
                break;
        }
        cout << "Ω«’˚" << endl;
    }
    else if (jiao == 0 && fen != 0)
    {
        if (intHas)
        {
            cout << "¡„";
        }
        switch (fen)
        {
            case 0:
                cout << "¡„";
                break;
            case 1:
                cout << "“º";
                break;
            case 2:
                cout << "∑°";
                break;
            case 3:
                cout << "»˛";
                break;
            case 4:
                cout << "À¡";
                break;
            case 5:
                cout << "ŒÈ";
                break;
            case 6:
                cout << "¬Ω";
                break;
            case 7:
                cout << "∆‚";
                break;
            case 8:
                cout << "∞∆";
                break;
            case 9:
                cout << "æ¡";
                break;
        }
        cout << "∑÷" << endl;
    }
    else
    {
        switch (jiao)
        {
            case 0:
                cout << "¡„";
                break;
            case 1:
                cout << "“º";
                break;
            case 2:
                cout << "∑°";
                break;
            case 3:
                cout << "»˛";
                break;
            case 4:
                cout << "À¡";
                break;
            case 5:
                cout << "ŒÈ";
                break;
            case 6:
                cout << "¬Ω";
                break;
            case 7:
                cout << "∆‚";
                break;
            case 8:
                cout << "∞∆";
                break;
            case 9:
                cout << "æ¡";
                break;
        }
        cout << "Ω«";
        switch (fen)
        {
            case 0:
                cout << "¡„";
                break;
            case 1:
                cout << "“º";
                break;
            case 2:
                cout << "∑°";
                break;
            case 3:
                cout << "»˛";
                break;
            case 4:
                cout << "À¡";
                break;
            case 5:
                cout << "ŒÈ";
                break;
            case 6:
                cout << "¬Ω";
                break;
            case 7:
                cout << "∆‚";
                break;
            case 8:
                cout << "∞∆";
                break;
            case 9:
                cout << "æ¡";
                break;
        }
        cout << "∑÷" << endl;
    }

    return 0;
}