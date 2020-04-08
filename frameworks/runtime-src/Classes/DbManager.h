#pragma once

#include "cocos2d.h"
#include "dragonBones/cocos2dx/CCDragonBonesHeaders.h"
//#include "dragonBones\cocos2dx\CCArmatureDisplay.h"

using namespace cocos2d;
using namespace dragonBones;

class DbManager {


public:

	DbManager();
	virtual ~DbManager();
	//加载数据
	static void LoadData(const std::string& BoneDataFile, const std::string& TexDataFile);
	//根据加载数据生成一个CCArmatureDisplay
	static CCArmatureDisplay* buildArmatureDisplay(const std::string& armatureName, const std::string& dragonBonesName = "", const std::string& skinName = "", const std::string& textureAtlasName = "");
	//播放动画
	static void ArmarurePalyAni(CCArmatureDisplay* ar, const std::string& animationName,int times = -1);
	//添加帧事件
	static void ArmarureAddEventListener(CCArmatureDisplay* ar, const std::function<void(EventCustom*)>& callback);


private:


};
