#include "lua_DbManager_auto.hpp"
#if CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID || CC_TARGET_PLATFORM == CC_PLATFORM_IOS || CC_TARGET_PLATFORM == CC_PLATFORM_MAC || CC_TARGET_PLATFORM == CC_PLATFORM_WIN32
#include "DbManager.h"
#include "tolua_fix.h"
#include "LuaBasicConversions.h"
#include "CCLuaValue.h"
#include "CCLuaEngine.h"


int lua_DbManager_EventObject_getBone(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::EventObject* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.EventObject",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::EventObject*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_DbManager_EventObject_getBone'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_DbManager_EventObject_getBone'", nullptr);
            return 0;
        }
        dragonBones::Bone* ret = cobj->getBone();
        object_to_luaval<dragonBones::Bone>(tolua_S, "db.Bone",(dragonBones::Bone*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "db.EventObject:getBone",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_DbManager_EventObject_getBone'.",&tolua_err);
#endif

    return 0;
}
int lua_DbManager_EventObject_getSlot(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::EventObject* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.EventObject",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::EventObject*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_DbManager_EventObject_getSlot'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_DbManager_EventObject_getSlot'", nullptr);
            return 0;
        }
        dragonBones::Slot* ret = cobj->getSlot();
        object_to_luaval<dragonBones::Slot>(tolua_S, "db.Slot",(dragonBones::Slot*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "db.EventObject:getSlot",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_DbManager_EventObject_getSlot'.",&tolua_err);
#endif

    return 0;
}
int lua_DbManager_EventObject_getArmature(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::EventObject* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.EventObject",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::EventObject*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_DbManager_EventObject_getArmature'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_DbManager_EventObject_getArmature'", nullptr);
            return 0;
        }
        dragonBones::Armature* ret = cobj->getArmature();
        object_to_luaval<dragonBones::Armature>(tolua_S, "db.Armature",(dragonBones::Armature*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "db.EventObject:getArmature",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_DbManager_EventObject_getArmature'.",&tolua_err);
#endif

    return 0;
}
int lua_DbManager_EventObject_getAnimationState(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::EventObject* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.EventObject",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::EventObject*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_DbManager_EventObject_getAnimationState'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_DbManager_EventObject_getAnimationState'", nullptr);
            return 0;
        }
        dragonBones::AnimationState* ret = cobj->getAnimationState();
        object_to_luaval<dragonBones::AnimationState>(tolua_S, "db.AnimationState",(dragonBones::AnimationState*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "db.EventObject:getAnimationState",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_DbManager_EventObject_getAnimationState'.",&tolua_err);
#endif

    return 0;
}
int lua_DbManager_EventObject_getData(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::EventObject* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.EventObject",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::EventObject*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_DbManager_EventObject_getData'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_DbManager_EventObject_getData'", nullptr);
            return 0;
        }
        dragonBones::UserData* ret = cobj->getData();
        object_to_luaval<dragonBones::UserData>(tolua_S, "db.UserData",(dragonBones::UserData*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "db.EventObject:getData",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_DbManager_EventObject_getData'.",&tolua_err);
#endif

    return 0;
}
int lua_DbManager_EventObject_actionDataToInstance(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"db.EventObject",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 3)
    {
        const dragonBones::ActionData* arg0;
        dragonBones::EventObject* arg1;
        dragonBones::Armature* arg2;
        ok &= luaval_to_object<const dragonBones::ActionData>(tolua_S, 2, "db.ActionData",&arg0, "db.EventObject:actionDataToInstance");
        ok &= luaval_to_object<dragonBones::EventObject>(tolua_S, 3, "db.EventObject",&arg1, "db.EventObject:actionDataToInstance");
        ok &= luaval_to_object<dragonBones::Armature>(tolua_S, 4, "db.Armature",&arg2, "db.EventObject:actionDataToInstance");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_DbManager_EventObject_actionDataToInstance'", nullptr);
            return 0;
        }
        dragonBones::EventObject::actionDataToInstance(arg0, arg1, arg2);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "db.EventObject:actionDataToInstance",argc, 3);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_DbManager_EventObject_actionDataToInstance'.",&tolua_err);
#endif
    return 0;
}
int lua_DbManager_EventObject_getTypeIndex(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"db.EventObject",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_DbManager_EventObject_getTypeIndex'", nullptr);
            return 0;
        }
        unsigned int ret = dragonBones::EventObject::getTypeIndex();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "db.EventObject:getTypeIndex",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_DbManager_EventObject_getTypeIndex'.",&tolua_err);
#endif
    return 0;
}
int lua_DbManager_EventObject_constructor(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::EventObject* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_DbManager_EventObject_constructor'", nullptr);
            return 0;
        }
        cobj = new dragonBones::EventObject();
        tolua_pushusertype(tolua_S,(void*)cobj,"db.EventObject");
        tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "db.EventObject:EventObject",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_DbManager_EventObject_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_DbManager_EventObject_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (EventObject)");
    return 0;
}

int lua_register_DbManager_EventObject(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"db.EventObject");
    tolua_cclass(tolua_S,"EventObject","db.EventObject","db.BaseObject",nullptr);

    tolua_beginmodule(tolua_S,"EventObject");
        tolua_function(tolua_S,"new",lua_DbManager_EventObject_constructor);
        tolua_function(tolua_S,"getBone",lua_DbManager_EventObject_getBone);
        tolua_function(tolua_S,"getSlot",lua_DbManager_EventObject_getSlot);
        tolua_function(tolua_S,"getArmature",lua_DbManager_EventObject_getArmature);
        tolua_function(tolua_S,"getAnimationState",lua_DbManager_EventObject_getAnimationState);
        tolua_function(tolua_S,"getData",lua_DbManager_EventObject_getData);
        tolua_function(tolua_S,"actionDataToInstance", lua_DbManager_EventObject_actionDataToInstance);
        tolua_function(tolua_S,"getTypeIndex", lua_DbManager_EventObject_getTypeIndex);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(dragonBones::EventObject).name();
    g_luaType[typeName] = "db.EventObject";
    g_typeCast["EventObject"] = "db.EventObject";
    return 1;
}

int lua_DbManager_CCArmatureDisplay_getAnimation(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::CCArmatureDisplay* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.CCArmatureDisplay",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::CCArmatureDisplay*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_DbManager_CCArmatureDisplay_getAnimation'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_DbManager_CCArmatureDisplay_getAnimation'", nullptr);
            return 0;
        }
        dragonBones::Animation* ret = cobj->getAnimation();
        object_to_luaval<dragonBones::Animation>(tolua_S, "db.Animation",(dragonBones::Animation*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "db.CCArmatureDisplay:getAnimation",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_DbManager_CCArmatureDisplay_getAnimation'.",&tolua_err);
#endif

    return 0;
}
int lua_DbManager_CCArmatureDisplay_hasDBEventListener(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::CCArmatureDisplay* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.CCArmatureDisplay",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::CCArmatureDisplay*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_DbManager_CCArmatureDisplay_hasDBEventListener'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "db.CCArmatureDisplay:hasDBEventListener");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_DbManager_CCArmatureDisplay_hasDBEventListener'", nullptr);
            return 0;
        }
        bool ret = cobj->hasDBEventListener(arg0);
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "db.CCArmatureDisplay:hasDBEventListener",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_DbManager_CCArmatureDisplay_hasDBEventListener'.",&tolua_err);
#endif

    return 0;
}
int lua_DbManager_CCArmatureDisplay_dbInit(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::CCArmatureDisplay* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.CCArmatureDisplay",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::CCArmatureDisplay*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_DbManager_CCArmatureDisplay_dbInit'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        dragonBones::Armature* arg0;

        ok &= luaval_to_object<dragonBones::Armature>(tolua_S, 2, "db.Armature",&arg0, "db.CCArmatureDisplay:dbInit");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_DbManager_CCArmatureDisplay_dbInit'", nullptr);
            return 0;
        }
        cobj->dbInit(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "db.CCArmatureDisplay:dbInit",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_DbManager_CCArmatureDisplay_dbInit'.",&tolua_err);
#endif

    return 0;
}
int lua_DbManager_CCArmatureDisplay_addDBEventListener(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::CCArmatureDisplay* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.CCArmatureDisplay",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::CCArmatureDisplay*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_DbManager_CCArmatureDisplay_addDBEventListener'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        std::string arg0;
        std::function<void (dragonBones::EventObject *)> arg1;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "db.CCArmatureDisplay:addDBEventListener");

        do {
			// Lambda binding for lua is not supported.
			assert(false);
		} while(0)
		;
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_DbManager_CCArmatureDisplay_addDBEventListener'", nullptr);
            return 0;
        }
        cobj->addDBEventListener(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "db.CCArmatureDisplay:addDBEventListener",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_DbManager_CCArmatureDisplay_addDBEventListener'.",&tolua_err);
#endif

    return 0;
}
int lua_DbManager_CCArmatureDisplay_dbUpdate(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::CCArmatureDisplay* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.CCArmatureDisplay",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::CCArmatureDisplay*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_DbManager_CCArmatureDisplay_dbUpdate'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_DbManager_CCArmatureDisplay_dbUpdate'", nullptr);
            return 0;
        }
        cobj->dbUpdate();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "db.CCArmatureDisplay:dbUpdate",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_DbManager_CCArmatureDisplay_dbUpdate'.",&tolua_err);
#endif

    return 0;
}
int lua_DbManager_CCArmatureDisplay_dispatchDBEvent(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::CCArmatureDisplay* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.CCArmatureDisplay",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::CCArmatureDisplay*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_DbManager_CCArmatureDisplay_dispatchDBEvent'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        std::string arg0;
        dragonBones::EventObject* arg1;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "db.CCArmatureDisplay:dispatchDBEvent");

        ok &= luaval_to_object<dragonBones::EventObject>(tolua_S, 3, "db.EventObject",&arg1, "db.CCArmatureDisplay:dispatchDBEvent");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_DbManager_CCArmatureDisplay_dispatchDBEvent'", nullptr);
            return 0;
        }
        cobj->dispatchDBEvent(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "db.CCArmatureDisplay:dispatchDBEvent",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_DbManager_CCArmatureDisplay_dispatchDBEvent'.",&tolua_err);
#endif

    return 0;
}
int lua_DbManager_CCArmatureDisplay_dispose(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::CCArmatureDisplay* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.CCArmatureDisplay",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::CCArmatureDisplay*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_DbManager_CCArmatureDisplay_dispose'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_DbManager_CCArmatureDisplay_dispose'", nullptr);
            return 0;
        }
        cobj->dispose();
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "db.CCArmatureDisplay:dispose");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_DbManager_CCArmatureDisplay_dispose'", nullptr);
            return 0;
        }
        cobj->dispose(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "db.CCArmatureDisplay:dispose",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_DbManager_CCArmatureDisplay_dispose'.",&tolua_err);
#endif

    return 0;
}
int lua_DbManager_CCArmatureDisplay_getArmature(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::CCArmatureDisplay* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.CCArmatureDisplay",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::CCArmatureDisplay*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_DbManager_CCArmatureDisplay_getArmature'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_DbManager_CCArmatureDisplay_getArmature'", nullptr);
            return 0;
        }
        dragonBones::Armature* ret = cobj->getArmature();
        object_to_luaval<dragonBones::Armature>(tolua_S, "db.Armature",(dragonBones::Armature*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "db.CCArmatureDisplay:getArmature",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_DbManager_CCArmatureDisplay_getArmature'.",&tolua_err);
#endif

    return 0;
}
int lua_DbManager_CCArmatureDisplay_removeDBEventListener(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::CCArmatureDisplay* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.CCArmatureDisplay",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::CCArmatureDisplay*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_DbManager_CCArmatureDisplay_removeDBEventListener'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        std::string arg0;
        std::function<void (dragonBones::EventObject *)> arg1;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "db.CCArmatureDisplay:removeDBEventListener");

        do {
			// Lambda binding for lua is not supported.
			assert(false);
		} while(0)
		;
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_DbManager_CCArmatureDisplay_removeDBEventListener'", nullptr);
            return 0;
        }
        cobj->removeDBEventListener(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "db.CCArmatureDisplay:removeDBEventListener",argc, 2);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_DbManager_CCArmatureDisplay_removeDBEventListener'.",&tolua_err);
#endif

    return 0;
}
int lua_DbManager_CCArmatureDisplay_dbClear(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::CCArmatureDisplay* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"db.CCArmatureDisplay",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (dragonBones::CCArmatureDisplay*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_DbManager_CCArmatureDisplay_dbClear'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_DbManager_CCArmatureDisplay_dbClear'", nullptr);
            return 0;
        }
        cobj->dbClear();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "db.CCArmatureDisplay:dbClear",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_DbManager_CCArmatureDisplay_dbClear'.",&tolua_err);
#endif

    return 0;
}
int lua_DbManager_CCArmatureDisplay_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"db.CCArmatureDisplay",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_DbManager_CCArmatureDisplay_create'", nullptr);
            return 0;
        }
        dragonBones::CCArmatureDisplay* ret = dragonBones::CCArmatureDisplay::create();
        object_to_luaval<dragonBones::CCArmatureDisplay>(tolua_S, "db.CCArmatureDisplay",(dragonBones::CCArmatureDisplay*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "db.CCArmatureDisplay:create",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_DbManager_CCArmatureDisplay_create'.",&tolua_err);
#endif
    return 0;
}
int lua_DbManager_CCArmatureDisplay_constructor(lua_State* tolua_S)
{
    int argc = 0;
    dragonBones::CCArmatureDisplay* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_DbManager_CCArmatureDisplay_constructor'", nullptr);
            return 0;
        }
        cobj = new dragonBones::CCArmatureDisplay();
        cobj->autorelease();
        int ID =  (int)cobj->_ID ;
        int* luaID =  &cobj->_luaID ;
        toluafix_pushusertype_ccobject(tolua_S, ID, luaID, (void*)cobj,"db.CCArmatureDisplay");
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "db.CCArmatureDisplay:CCArmatureDisplay",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_DbManager_CCArmatureDisplay_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_DbManager_CCArmatureDisplay_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (CCArmatureDisplay)");
    return 0;
}

int lua_register_DbManager_CCArmatureDisplay(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"db.CCArmatureDisplay");
    tolua_cclass(tolua_S,"CCArmatureDisplay","db.CCArmatureDisplay","cc.Node",nullptr);

    tolua_beginmodule(tolua_S,"CCArmatureDisplay");
        tolua_function(tolua_S,"new",lua_DbManager_CCArmatureDisplay_constructor);
        tolua_function(tolua_S,"getAnimation",lua_DbManager_CCArmatureDisplay_getAnimation);
        tolua_function(tolua_S,"hasDBEventListener",lua_DbManager_CCArmatureDisplay_hasDBEventListener);
        tolua_function(tolua_S,"dbInit",lua_DbManager_CCArmatureDisplay_dbInit);
        tolua_function(tolua_S,"addDBEventListener",lua_DbManager_CCArmatureDisplay_addDBEventListener);
        tolua_function(tolua_S,"dbUpdate",lua_DbManager_CCArmatureDisplay_dbUpdate);
        tolua_function(tolua_S,"dispatchDBEvent",lua_DbManager_CCArmatureDisplay_dispatchDBEvent);
        tolua_function(tolua_S,"dispose",lua_DbManager_CCArmatureDisplay_dispose);
        tolua_function(tolua_S,"getArmature",lua_DbManager_CCArmatureDisplay_getArmature);
        tolua_function(tolua_S,"removeDBEventListener",lua_DbManager_CCArmatureDisplay_removeDBEventListener);
        tolua_function(tolua_S,"dbClear",lua_DbManager_CCArmatureDisplay_dbClear);
        tolua_function(tolua_S,"create", lua_DbManager_CCArmatureDisplay_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(dragonBones::CCArmatureDisplay).name();
    g_luaType[typeName] = "db.CCArmatureDisplay";
    g_typeCast["CCArmatureDisplay"] = "db.CCArmatureDisplay";
    return 1;
}

int lua_DbManager_DbManager_ArmarurePalyAni(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"DbManager",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        dragonBones::CCArmatureDisplay* arg0;
        std::string arg1;
        ok &= luaval_to_object<dragonBones::CCArmatureDisplay>(tolua_S, 2, "db.CCArmatureDisplay",&arg0, "DbManager:ArmarurePalyAni");
        ok &= luaval_to_std_string(tolua_S, 3,&arg1, "DbManager:ArmarurePalyAni");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_DbManager_DbManager_ArmarurePalyAni'", nullptr);
            return 0;
        }
        DbManager::ArmarurePalyAni(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    if (argc == 3)
    {
        dragonBones::CCArmatureDisplay* arg0;
        std::string arg1;
        int arg2;
        ok &= luaval_to_object<dragonBones::CCArmatureDisplay>(tolua_S, 2, "db.CCArmatureDisplay",&arg0, "DbManager:ArmarurePalyAni");
        ok &= luaval_to_std_string(tolua_S, 3,&arg1, "DbManager:ArmarurePalyAni");
        ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2, "DbManager:ArmarurePalyAni");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_DbManager_DbManager_ArmarurePalyAni'", nullptr);
            return 0;
        }
        DbManager::ArmarurePalyAni(arg0, arg1, arg2);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "DbManager:ArmarurePalyAni",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_DbManager_DbManager_ArmarurePalyAni'.",&tolua_err);
#endif
    return 0;
}
int lua_DbManager_DbManager_ArmarureAddEventListener(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"DbManager",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        dragonBones::CCArmatureDisplay* arg0;
        std::function<void (cocos2d::EventCustom *)> arg1;
        ok &= luaval_to_object<dragonBones::CCArmatureDisplay>(tolua_S, 2, "db.CCArmatureDisplay",&arg0, "DbManager:ArmarureAddEventListener");

		LUA_FUNCTION handler = (toluafix_ref_function(tolua_S, 3, 0));
  //      do {
		//	// Lambda binding for lua is not supported.
		//	assert(false);
		//} while(0)
		;
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_DbManager_DbManager_ArmarureAddEventListener'", nullptr);
            return 0;
        }
		DbManager::ArmarureAddEventListener(arg0, [=](EventCustom* e) {
			
			const auto eventObject = (dragonBones::EventObject*)e->getUserData();

			std::string aniName = eventObject->animationState->name.c_str();
			std::string aniType = eventObject->type.c_str();
			std::string customEvent = eventObject->name.c_str();

			//cocos2d::log("999%s -%s- %s", eventObject->animationState->name.c_str(), eventObject->type.c_str(), eventObject->name.c_str());

			LuaStack* stack = LuaEngine::getInstance()->getLuaStack();

			stack->pushString(aniName.c_str(),aniName.size());
			stack->pushString(aniType.c_str(), aniType.size());
			stack->pushString(customEvent.c_str(), customEvent.size());
			//stack->pushObject(e, "cc.Event");
			//stack->pushInt(eventType);


			stack->executeFunctionByHandler(handler, 3);
			stack->clean();
		});
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "DbManager:ArmarureAddEventListener",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_DbManager_DbManager_ArmarureAddEventListener'.",&tolua_err);
#endif
    return 0;
}
int lua_DbManager_DbManager_LoadData(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"DbManager",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        std::string arg0;
        std::string arg1;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "DbManager:LoadData");
        ok &= luaval_to_std_string(tolua_S, 3,&arg1, "DbManager:LoadData");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_DbManager_DbManager_LoadData'", nullptr);
            return 0;
        }
        DbManager::LoadData(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "DbManager:LoadData",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_DbManager_DbManager_LoadData'.",&tolua_err);
#endif
    return 0;
}
int lua_DbManager_DbManager_buildArmatureDisplay(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"DbManager",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        std::string arg0;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "DbManager:buildArmatureDisplay");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_DbManager_DbManager_buildArmatureDisplay'", nullptr);
            return 0;
        }
        dragonBones::CCArmatureDisplay* ret = DbManager::buildArmatureDisplay(arg0);
        object_to_luaval<dragonBones::CCArmatureDisplay>(tolua_S, "db.CCArmatureDisplay",(dragonBones::CCArmatureDisplay*)ret);
        return 1;
    }
    if (argc == 2)
    {
        std::string arg0;
        std::string arg1;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "DbManager:buildArmatureDisplay");
        ok &= luaval_to_std_string(tolua_S, 3,&arg1, "DbManager:buildArmatureDisplay");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_DbManager_DbManager_buildArmatureDisplay'", nullptr);
            return 0;
        }
        dragonBones::CCArmatureDisplay* ret = DbManager::buildArmatureDisplay(arg0, arg1);
        object_to_luaval<dragonBones::CCArmatureDisplay>(tolua_S, "db.CCArmatureDisplay",(dragonBones::CCArmatureDisplay*)ret);
        return 1;
    }
    if (argc == 3)
    {
        std::string arg0;
        std::string arg1;
        std::string arg2;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "DbManager:buildArmatureDisplay");
        ok &= luaval_to_std_string(tolua_S, 3,&arg1, "DbManager:buildArmatureDisplay");
        ok &= luaval_to_std_string(tolua_S, 4,&arg2, "DbManager:buildArmatureDisplay");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_DbManager_DbManager_buildArmatureDisplay'", nullptr);
            return 0;
        }
        dragonBones::CCArmatureDisplay* ret = DbManager::buildArmatureDisplay(arg0, arg1, arg2);
        object_to_luaval<dragonBones::CCArmatureDisplay>(tolua_S, "db.CCArmatureDisplay",(dragonBones::CCArmatureDisplay*)ret);
        return 1;
    }
    if (argc == 4)
    {
        std::string arg0;
        std::string arg1;
        std::string arg2;
        std::string arg3;
        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "DbManager:buildArmatureDisplay");
        ok &= luaval_to_std_string(tolua_S, 3,&arg1, "DbManager:buildArmatureDisplay");
        ok &= luaval_to_std_string(tolua_S, 4,&arg2, "DbManager:buildArmatureDisplay");
        ok &= luaval_to_std_string(tolua_S, 5,&arg3, "DbManager:buildArmatureDisplay");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_DbManager_DbManager_buildArmatureDisplay'", nullptr);
            return 0;
        }
        dragonBones::CCArmatureDisplay* ret = DbManager::buildArmatureDisplay(arg0, arg1, arg2, arg3);
        object_to_luaval<dragonBones::CCArmatureDisplay>(tolua_S, "db.CCArmatureDisplay",(dragonBones::CCArmatureDisplay*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "DbManager:buildArmatureDisplay",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_DbManager_DbManager_buildArmatureDisplay'.",&tolua_err);
#endif
    return 0;
}
int lua_DbManager_DbManager_constructor(lua_State* tolua_S)
{
    int argc = 0;
    DbManager* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif



    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_DbManager_DbManager_constructor'", nullptr);
            return 0;
        }
        cobj = new DbManager();
        tolua_pushusertype(tolua_S,(void*)cobj,"DbManager");
        tolua_register_gc(tolua_S,lua_gettop(tolua_S));
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "DbManager:DbManager",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_error(tolua_S,"#ferror in function 'lua_DbManager_DbManager_constructor'.",&tolua_err);
#endif

    return 0;
}

static int lua_DbManager_DbManager_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (DbManager)");
    return 0;
}

int lua_register_DbManager_DbManager(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"DbManager");
    tolua_cclass(tolua_S,"DbManager","DbManager","",nullptr);

    tolua_beginmodule(tolua_S,"DbManager");
        tolua_function(tolua_S,"new",lua_DbManager_DbManager_constructor);
        tolua_function(tolua_S,"ArmarurePalyAni", lua_DbManager_DbManager_ArmarurePalyAni);
        tolua_function(tolua_S,"ArmarureAddEventListener", lua_DbManager_DbManager_ArmarureAddEventListener);
        tolua_function(tolua_S,"LoadData", lua_DbManager_DbManager_LoadData);
        tolua_function(tolua_S,"buildArmatureDisplay", lua_DbManager_DbManager_buildArmatureDisplay);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(DbManager).name();
    g_luaType[typeName] = "DbManager";
    g_typeCast["DbManager"] = "DbManager";
    return 1;
}
TOLUA_API int register_all_DbManager(lua_State* tolua_S)
{
	tolua_open(tolua_S);
	
	tolua_module(tolua_S,nullptr,0);
	tolua_beginmodule(tolua_S,nullptr);

	lua_register_DbManager_CCArmatureDisplay(tolua_S);
	lua_register_DbManager_EventObject(tolua_S);
	lua_register_DbManager_DbManager(tolua_S);

	tolua_endmodule(tolua_S);
	return 1;
}

#endif
