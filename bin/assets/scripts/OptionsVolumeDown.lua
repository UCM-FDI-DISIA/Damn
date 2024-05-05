--Definicion de la clase en Lua
OptionsVolumeDown = {}

OptionsVolumeDown.__index = OptionsVolumeDown

--Constructor de la clase en Lua
function OptionsVolumeDown:new()
	local obj={}
	setmetatable(obj, OptionsVolumeDown)
	return obj
end

--Metodo OnButtonClicked
function OptionsVolumeDown:OnButtonClick()
end
function OptionsVolumeDown:OnButtonReleased()
	Menu:VolumeDown();
end
--Variable global de la clase (para Luabridge)
OptionsVolumeDownLua = OptionsVolumeDown:new()