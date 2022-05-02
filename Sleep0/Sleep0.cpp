#include <iostream>
#include <Windows.h>

using namespace std;

void* g_pThreads[8]{};
unsigned long g_pThreadIDs[8]{};

long long g_pExitThreads0 = 0ll;
long long g_pPadding0[8]{};

long long g_pExitThreads1 = 0ll;
long long g_pPadding1[8]{};

long long g_pExitThreads2 = 0ll;
long long g_pPadding2[8]{};

long long g_pExitThreads3 = 0ll;
long long g_pPadding3[8]{};

long long g_pExitThreads4 = 0ll;
long long g_pPadding4[8]{};

long long g_pExitThreads5 = 0ll;
long long g_pPadding5[8]{};

long long g_pExitThreads6 = 0ll;
long long g_pPadding6[8]{};

long long g_pExitThreads7 = 0ll;
long long g_pPadding7[8]{};

unsigned long __stdcall Func0(void* const _pParameter)
{
    const unsigned long long ullThreadIndex = reinterpret_cast<unsigned long long>(_pParameter);
    const unsigned long long ullThreadStartTick = GetTickCount64();

    wcout << L"Thread[" << ullThreadIndex << L"]\tStartTick\t:\t" << ullThreadStartTick << endl;

    unsigned long long ullThreadSpinCount = 0ull;
    
    while (true)
    {
        if (_InterlockedCompareExchange64(&g_pExitThreads0,
                                          0ll,
                                          1ll) != 0ll)
        {
            break;
        }

        ++ullThreadSpinCount;

        if (ullThreadIndex != 0ull)
        {
            Sleep(0ul);
        }
    }

    const unsigned long long ullThreadEndTick = GetTickCount64();

    wcout << L"Thread[" << ullThreadIndex << L"]\tEndTick\t:\t" << ullThreadEndTick << endl;
    wcout << L"Thread[" << ullThreadIndex << L"]\tDuration\t:\t" << ullThreadEndTick - ullThreadStartTick << endl;
    wcout << L"Thread[" << ullThreadIndex << L"]\tSpinCount\t:\t" << ullThreadSpinCount << endl;
    
    return 0ul;
}

unsigned long __stdcall Func1(void* const _pParameter)
{
    const unsigned long long ullThreadIndex = reinterpret_cast<unsigned long long>(_pParameter);
    const unsigned long long ullThreadStartTick = GetTickCount64();

    wcout << L"Thread[" << ullThreadIndex << L"]\tStartTick\t:\t" << ullThreadStartTick << endl;

    unsigned long long ullThreadSpinCount = 0ull;

    while (true)
    {
        if (_InterlockedCompareExchange64(&g_pExitThreads1,
                                          0ll,
                                          1ll) != 0ll)
        {
            break;
        }

        ++ullThreadSpinCount;

        if (ullThreadIndex != 0ull)
        {
            Sleep(0ul);
        }
    }

    const unsigned long long ullThreadEndTick = GetTickCount64();

    wcout << L"Thread[" << ullThreadIndex << L"]\tEndTick\t:\t" << ullThreadEndTick << endl;
    wcout << L"Thread[" << ullThreadIndex << L"]\tDuration\t:\t" << ullThreadEndTick - ullThreadStartTick << endl;
    wcout << L"Thread[" << ullThreadIndex << L"]\tSpinCount\t:\t" << ullThreadSpinCount << endl;

    return 0ul;
}

unsigned long __stdcall Func2(void* const _pParameter)
{
    const unsigned long long ullThreadIndex = reinterpret_cast<unsigned long long>(_pParameter);
    const unsigned long long ullThreadStartTick = GetTickCount64();

    wcout << L"Thread[" << ullThreadIndex << L"]\tStartTick\t:\t" << ullThreadStartTick << endl;

    unsigned long long ullThreadSpinCount = 0ull;

    while (true)
    {
        if (_InterlockedCompareExchange64(&g_pExitThreads2,
                                          0ll,
                                          1ll) != 0ll)
        {
            break;
        }

        ++ullThreadSpinCount;

        if (ullThreadIndex != 0ull)
        {
            Sleep(0ul);
        }
    }

    const unsigned long long ullThreadEndTick = GetTickCount64();

    wcout << L"Thread[" << ullThreadIndex << L"]\tEndTick\t:\t" << ullThreadEndTick << endl;
    wcout << L"Thread[" << ullThreadIndex << L"]\tDuration\t:\t" << ullThreadEndTick - ullThreadStartTick << endl;
    wcout << L"Thread[" << ullThreadIndex << L"]\tSpinCount\t:\t" << ullThreadSpinCount << endl;

    return 0ul;
}

unsigned long __stdcall Func3(void* const _pParameter)
{
    const unsigned long long ullThreadIndex = reinterpret_cast<unsigned long long>(_pParameter);
    const unsigned long long ullThreadStartTick = GetTickCount64();

    wcout << L"Thread[" << ullThreadIndex << L"]\tStartTick\t:\t" << ullThreadStartTick << endl;

    unsigned long long ullThreadSpinCount = 0ull;

    while (true)
    {
        if (_InterlockedCompareExchange64(&g_pExitThreads3,
                                          0ll,
                                          1ll) != 0ll)
        {
            break;
        }

        ++ullThreadSpinCount;

        if (ullThreadIndex != 0ull)
        {
            Sleep(0ul);
        }
    }

    const unsigned long long ullThreadEndTick = GetTickCount64();

    wcout << L"Thread[" << ullThreadIndex << L"]\tEndTick\t:\t" << ullThreadEndTick << endl;
    wcout << L"Thread[" << ullThreadIndex << L"]\tDuration\t:\t" << ullThreadEndTick - ullThreadStartTick << endl;
    wcout << L"Thread[" << ullThreadIndex << L"]\tSpinCount\t:\t" << ullThreadSpinCount << endl;

    return 0ul;
}

unsigned long __stdcall Func4(void* const _pParameter)
{
    const unsigned long long ullThreadIndex = reinterpret_cast<unsigned long long>(_pParameter);
    const unsigned long long ullThreadStartTick = GetTickCount64();

    wcout << L"Thread[" << ullThreadIndex << L"]\tStartTick\t:\t" << ullThreadStartTick << endl;

    unsigned long long ullThreadSpinCount = 0ull;

    while (true)
    {
        if (_InterlockedCompareExchange64(&g_pExitThreads4,
                                          0ll,
                                          1ll) != 0ll)
        {
            break;
        }

        ++ullThreadSpinCount;

        if (ullThreadIndex != 0ull)
        {
            Sleep(0ul);
        }
    }

    const unsigned long long ullThreadEndTick = GetTickCount64();

    wcout << L"Thread[" << ullThreadIndex << L"]\tEndTick\t:\t" << ullThreadEndTick << endl;
    wcout << L"Thread[" << ullThreadIndex << L"]\tDuration\t:\t" << ullThreadEndTick - ullThreadStartTick << endl;
    wcout << L"Thread[" << ullThreadIndex << L"]\tSpinCount\t:\t" << ullThreadSpinCount << endl;

    return 0ul;
}

unsigned long __stdcall Func5(void* const _pParameter)
{
    const unsigned long long ullThreadIndex = reinterpret_cast<unsigned long long>(_pParameter);
    const unsigned long long ullThreadStartTick = GetTickCount64();

    wcout << L"Thread[" << ullThreadIndex << L"]\tStartTick\t:\t" << ullThreadStartTick << endl;

    unsigned long long ullThreadSpinCount = 0ull;

    while (true)
    {
        if (_InterlockedCompareExchange64(&g_pExitThreads5,
                                          0ll,
                                          1ll) != 0ll)
        {
            break;
        }

        ++ullThreadSpinCount;

        if (ullThreadIndex != 0ull)
        {
            Sleep(0ul);
        }
    }

    const unsigned long long ullThreadEndTick = GetTickCount64();

    wcout << L"Thread[" << ullThreadIndex << L"]\tEndTick\t:\t" << ullThreadEndTick << endl;
    wcout << L"Thread[" << ullThreadIndex << L"]\tDuration\t:\t" << ullThreadEndTick - ullThreadStartTick << endl;
    wcout << L"Thread[" << ullThreadIndex << L"]\tSpinCount\t:\t" << ullThreadSpinCount << endl;

    return 0ul;
}

unsigned long __stdcall Func6(void* const _pParameter)
{
    const unsigned long long ullThreadIndex = reinterpret_cast<unsigned long long>(_pParameter);
    const unsigned long long ullThreadStartTick = GetTickCount64();

    wcout << L"Thread[" << ullThreadIndex << L"]\tStartTick\t:\t" << ullThreadStartTick << endl;

    unsigned long long ullThreadSpinCount = 0ull;

    while (true)
    {
        if (_InterlockedCompareExchange64(&g_pExitThreads6,
                                          0ll,
                                          1ll) != 0ll)
        {
            break;
        }

        ++ullThreadSpinCount;

        if (ullThreadIndex != 0ull)
        {
            Sleep(0ul);
        }
    }

    const unsigned long long ullThreadEndTick = GetTickCount64();

    wcout << L"Thread[" << ullThreadIndex << L"]\tEndTick\t:\t" << ullThreadEndTick << endl;
    wcout << L"Thread[" << ullThreadIndex << L"]\tDuration\t:\t" << ullThreadEndTick - ullThreadStartTick << endl;
    wcout << L"Thread[" << ullThreadIndex << L"]\tSpinCount\t:\t" << ullThreadSpinCount << endl;

    return 0ul;
}

unsigned long __stdcall Func7(void* const _pParameter)
{
    const unsigned long long ullThreadIndex = reinterpret_cast<unsigned long long>(_pParameter);
    const unsigned long long ullThreadStartTick = GetTickCount64();

    wcout << L"Thread[" << ullThreadIndex << L"]\tStartTick\t:\t" << ullThreadStartTick << endl;

    unsigned long long ullThreadSpinCount = 0ull;

    while (true)
    {
        if (_InterlockedCompareExchange64(&g_pExitThreads7,
                                          0ll,
                                          1ll) != 0ll)
        {
            break;
        }

        ++ullThreadSpinCount;

        if (ullThreadIndex != 0ull)
        {
            Sleep(0ul);
        }
    }

    const unsigned long long ullThreadEndTick = GetTickCount64();

    wcout << L"Thread[" << ullThreadIndex << L"]\tEndTick\t:\t" << ullThreadEndTick << endl;
    wcout << L"Thread[" << ullThreadIndex << L"]\tDuration\t:\t" << ullThreadEndTick - ullThreadStartTick << endl;
    wcout << L"Thread[" << ullThreadIndex << L"]\tSpinCount\t:\t" << ullThreadSpinCount << endl;

    return 0ul;
}

int main()
{
    g_pThreads[0] = CreateThread(nullptr,
                                 0ull,
                                 Func0,
                                 reinterpret_cast<void*>(0),
                                 0ul,
                                 &g_pThreadIDs[0]);

    g_pThreads[1] = CreateThread(nullptr,
                                 0ull,
                                 Func1,
                                 reinterpret_cast<void*>(1),
                                 0ul,
                                 &g_pThreadIDs[1]);

    g_pThreads[2] = CreateThread(nullptr,
                                 0ull,
                                 Func2,
                                 reinterpret_cast<void*>(2),
                                 0ul,
                                 &g_pThreadIDs[2]);
    
    g_pThreads[3] = CreateThread(nullptr,
                                 0ull,
                                 Func3,
                                 reinterpret_cast<void*>(3),
                                 0ul,
                                 &g_pThreadIDs[3]);

    g_pThreads[4] = CreateThread(nullptr,
                                 0ull,
                                 Func4,
                                 reinterpret_cast<void*>(4),
                                 0ul,
                                 &g_pThreadIDs[4]);
    
    g_pThreads[5] = CreateThread(nullptr,
                                 0ull,
                                 Func5,
                                 reinterpret_cast<void*>(5),
                                 0ul,
                                 &g_pThreadIDs[5]);
    
    g_pThreads[6] = CreateThread(nullptr,
                                 0ull,
                                 Func6,
                                 reinterpret_cast<void*>(6),
                                 0ul,
                                 &g_pThreadIDs[6]);
    
    g_pThreads[7] = CreateThread(nullptr,
                                 0ull,
                                 Func7,
                                 reinterpret_cast<void*>(7),
                                 0ul,
                                 &g_pThreadIDs[7]);

    Sleep(1000ul);

    _InterlockedExchange64(&g_pExitThreads0, 1ll);
    _InterlockedExchange64(&g_pExitThreads1, 1ll);
    _InterlockedExchange64(&g_pExitThreads2, 1ll);
    _InterlockedExchange64(&g_pExitThreads3, 1ll);
    _InterlockedExchange64(&g_pExitThreads4, 1ll);
    _InterlockedExchange64(&g_pExitThreads5, 1ll);
    _InterlockedExchange64(&g_pExitThreads6, 1ll);
    _InterlockedExchange64(&g_pExitThreads7, 1ll);

    unsigned long ulExitCode = 10ul;
    while (true)
    {
        GetExitCodeThread(g_pThreads[0], &ulExitCode);
        if (ulExitCode == 0ul)
        {
            break;
        }
    }

    while (true)
    {
        GetExitCodeThread(g_pThreads[1], &ulExitCode);
        if (ulExitCode == 0ul)
        {
            break;
        }
    }

    while (true)
    {
        GetExitCodeThread(g_pThreads[2], &ulExitCode);
        if (ulExitCode == 0ul)
        {
            break;
        }
    }
    
    while (true)
    {
        GetExitCodeThread(g_pThreads[3], &ulExitCode);
        if (ulExitCode == 0ul)
        {
            break;
        }
    }

    while (true)
    {
        GetExitCodeThread(g_pThreads[4], &ulExitCode);
        if (ulExitCode == 0ul)
        {
            break;
        }
    }
    
    while (true)
    {
        GetExitCodeThread(g_pThreads[5], &ulExitCode);
        if (ulExitCode == 0ul)
        {
            break;
        }
    }
    
    while (true)
    {
        GetExitCodeThread(g_pThreads[6], &ulExitCode);
        if (ulExitCode == 0ul)
        {
            break;
        }
    }
    
    while (true)
    {
        GetExitCodeThread(g_pThreads[7], &ulExitCode);
        if (ulExitCode == 0ul)
        {
            break;
        }
    }

    return 0;
}