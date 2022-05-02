#include <iostream>
#include <Windows.h>

using namespace std;

void* g_pThreads[4]{};
unsigned long g_pThreadIDs[4]{};

long long g_pExitThreads[4]{};

unsigned long __stdcall Func(void* const _pParameter)
{
    const unsigned long long ullThreadIndex = reinterpret_cast<unsigned long long>(_pParameter);
    const unsigned long long ullThreadStartTick = GetTickCount64();

    wcout << L"Thread[" << ullThreadIndex << L"]\tStartTick\t:\t" << ullThreadStartTick << endl;

    unsigned long long ullThreadSpinCount = 0ull;
    
    while (true)
    {
        if (_InterlockedCompareExchange64(&g_pExitThreads[ullThreadIndex],
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
                                 Func,
                                 reinterpret_cast<void*>(0),
                                 0ul,
                                 &g_pThreadIDs[0]);

    g_pThreads[1] = CreateThread(nullptr,
                                 0ull,
                                 Func,
                                 reinterpret_cast<void*>(1),
                                 0ul,
                                 &g_pThreadIDs[1]);

    g_pThreads[2] = CreateThread(nullptr,
                                 0ull,
                                 Func,
                                 reinterpret_cast<void*>(2),
                                 0ul,
                                 &g_pThreadIDs[2]);

    g_pThreads[3] = CreateThread(nullptr,
                                 0ull,
                                 Func,
                                 reinterpret_cast<void*>(3),
                                 0ul,
                                 &g_pThreadIDs[3]);

    Sleep(1000ul);

    for (unsigned long long i = 0ull; i < 4ull; ++i)
    {
        _InterlockedExchange64(&g_pExitThreads[i],
                               1ll);
    }

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

    return 0;
}