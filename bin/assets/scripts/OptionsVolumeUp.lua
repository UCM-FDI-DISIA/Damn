--Definicion de la clase en Lua
OptionsVolumeUp = {}

OptionsVolumeUp.__index = OptionsVolumeUp

--Constructor de la clase en Lua
function OptionsVolumeUp:new()
	local obj={}
	setmetatable(obj, OptionsVolumeUp)
	return obj
end

--Metodo OnButtonClicked
function OptionsVolumeUp:OnButtonClick()
end
function OptionsVolumeUp:OnButtonReleased()
	Menu:VolumeUp();
end
--Variable global de la clase (para Luabridge)
OptionsVolumeUpLua = OptionsVolumeUp:new()