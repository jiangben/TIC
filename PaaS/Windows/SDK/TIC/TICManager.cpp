#include "stdafx.h"
#include "TICManagerImpl.h"

TICManager& TICManager::GetInstance()
{
	static TICManagerImpl instance;
	return instance;
}
