#include "CMonsterMaguni.h"

void CMonsterMaguni::Die()
{
	m_dwDeadTime = GetTickCount() + 10000;

	AddGState(CGS_KNEE);
	SetTarget(NULL);
	SetAIS(AIS_KNEE);
	WriteInSight(S2C_ACTION, "db", GetID(), AT_KNEE);
}

void CMonsterMaguni::Tick()
{
	CMonster::Tick();

	DWORD dwNow = GetTickCount();

	if (GetAIS() == AIS_KNEE && dwNow >= m_dwDeadTime)
	{
		Lock();
		SubGState(CGS_KNEE);
		AddGState(CGS_KO);
		SetAIS(AIS_DEAD);
		Unlock();

		WriteInSight(S2C_ACTION, "db", GetID(), AT_DIE);
	}
}
