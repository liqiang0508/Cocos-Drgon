
local MainScene = class("MainScene", cc.load("mvc").ViewBase)

function MainScene:onCreate()
    -- add background image
    display.newSprite("HelloWorld.png")
        :move(display.center)
        :addTo(self)

    -- add HelloWorld label
    cc.Label:createWithSystemFont("Hello World", "Arial", 40)
        :move(display.cx, display.cy + 200)
        :addTo(self)
		
	DbManager:LoadData("Dragon/Dragon_ske.json", "Dragon/Dragon_tex.json")
	local ar =DbManager:buildArmatureDisplay("Dragon", "Dragon")
	print("ar===",ar,type(ar))
	self:addChild(ar)
	ar:setPosition(display.center)
	ar:setScale(0.5)
	
	DbManager:ArmarurePalyAni(ar,"walk");
	DbManager:ArmarureAniTimeScale(ar,0.5)
	print(ar:getBoundingBox())
	DbManager:ArmarureAddEventListener(ar,function(aniName,aniType,customEvent)
	
		print(aniName,aniType,customEvent)
		ar:setVisible(not ar:isVisible())
	end)
end

return MainScene
