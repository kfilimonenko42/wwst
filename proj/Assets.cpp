#include "Assets.h"

Assets& Assets::get()
{
	static Assets st_asset;
	return st_asset;
}

Assets::Assets()
{
}

Assets::~Assets()
{
}

void Assets::LoadEnemies()
{
    LoadJsonAsset<Enemy>(m_mEnemy, "./json/factionsData.json");
}

void Assets::LoadFissureModifiers()
{
    LoadJsonAsset<FissureModifier>(m_mFissureModifier, "./json/fissureModifiers.json");
}

void Assets::LoadItems()
{
    LoadJsonAsset<Item>(m_mItem, "./json/items.json");
}

void Assets::LoadMissionTypes()
{
    LoadJsonAsset<MissionType>(m_mMissionType, "./json/missionTypes.json");
}

void Assets::LoadNodes()
{
    LoadJsonAsset<Node>(m_mNode, "./json/solNodes.json");
}

