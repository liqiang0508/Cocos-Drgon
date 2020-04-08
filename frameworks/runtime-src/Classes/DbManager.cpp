#include "DbManager.h"


void DbManager::LoadData(const std::string& BoneDataFile, const std::string& TexDataFile)
{
	CCFactory* _Factory = dragonBones::CCFactory::getFactory();
	_Factory->loadDragonBonesData(BoneDataFile);
	_Factory->loadTextureAtlasData(TexDataFile);

	
}

 CCArmatureDisplay* DbManager::buildArmatureDisplay(const std::string& armatureName, const std::string& dragonBonesName , const std::string& skinName, const std::string& textureAtlasName)
{
	CCFactory* _Factory = dragonBones::CCFactory::getFactory();
	auto armature = _Factory->buildArmatureDisplay(armatureName, dragonBonesName, skinName, textureAtlasName);
	if (armature != nullptr)
	{
		return armature;
	}

	return nullptr;
}

void DbManager::ArmarurePalyAni(CCArmatureDisplay* ar, const std::string& animationName,int times)
{
	if (ar)
	{
		ar->getAnimation()->play(animationName,times);
	}
}

 void DbManager::ArmarureAddEventListener(CCArmatureDisplay* ar, const std::function<void(EventCustom*)>& callback)
{
	ar->getEventDispatcher()->setEnabled(true);
	ar->getEventDispatcher()->addCustomEventListener(dragonBones::EventObject::START, callback);
	ar->getEventDispatcher()->addCustomEventListener(dragonBones::EventObject::LOOP_COMPLETE, callback);
	ar->getEventDispatcher()->addCustomEventListener(dragonBones::EventObject::COMPLETE, callback);
	ar->getEventDispatcher()->addCustomEventListener(dragonBones::EventObject::FADE_IN, callback);
	ar->getEventDispatcher()->addCustomEventListener(dragonBones::EventObject::FADE_IN_COMPLETE, callback);
	ar->getEventDispatcher()->addCustomEventListener(dragonBones::EventObject::FADE_OUT, callback);
	ar->getEventDispatcher()->addCustomEventListener(dragonBones::EventObject::FADE_OUT_COMPLETE, callback);
	ar->getEventDispatcher()->addCustomEventListener(dragonBones::EventObject::FRAME_EVENT, callback);
	ar->getEventDispatcher()->addCustomEventListener(dragonBones::EventObject::SOUND_EVENT, callback);

}

DbManager::DbManager()
{
	
}
DbManager::~DbManager()
{
	
}