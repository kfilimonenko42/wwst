
#ifndef _ASSETS_
#define _ASSETS_

#include <memory>
#include <map>
#include <string>

#include "Enemy.h"
#include "FissureModifier.h"
#include "Item.h"
#include "MissionType.h"
#include "Node.h"
#include "JsonHelper.h"

template<class T>
inline void LoadJsonAsset(std::map<std::string, T>& container, std::string fileName)
{
	nlohmann::json js;
	JsonHelper jh(fileName);

	if (jh.load(js))
	{
		for (auto& elem : js.items())
		{
			container.emplace(elem.key(), elem.value().get<T>());
		}
	}
}

class Assets
{
public:
	static Assets& get();

	Assets(Assets const&) = delete;
	void operator=(Assets const&) = delete;

private:
	Assets();
	~Assets();

public:
	void LoadEnemies();
	void LoadFissureModifiers();
	void LoadItems();
	void LoadMissionTypes();
	void LoadNodes();

private:
	std::map<std::string, Enemy> m_mEnemy;
	std::map<std::string, FissureModifier> m_mFissureModifier;
	std::map<std::string, Item> m_mItem;
	std::map<std::string, MissionType> m_mMissionType;
	std::map<std::string, Node> m_mNode;
};

#endif // _ASSETS_