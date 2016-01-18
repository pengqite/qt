#ifndef GLDMEMORYINFOUTILS_H
#define GLDMEMORYINFOUTILS_H

#include <windows.h>
#include <qglobal.h>

namespace GlodonMemoryInfo
{
    typedef struct PhysicalMemoryInfo
    {
        qint64     m_totalPhys;     // ���ڴ���,��λM
        qint64     m_availPhys;     // �����ڴ���,��λM
        int        m_usedPhys;      // �����ڴ�ٷֱ�,��Χ:0-100
    } PhysMemInfo;

    typedef struct VirtualMemoryInfo
    {
        qint64     m_totalVirtual;  // �������ڴ���,��λM
        qint64     m_availVirtual;  // ���������ڴ���,��λM
    } VirMemInfo;

    PhysMemInfo getPhysMemInfo();

    VirMemInfo getVirMemInfo();
}

#endif // GLDMEMORYINFOUTILS_H