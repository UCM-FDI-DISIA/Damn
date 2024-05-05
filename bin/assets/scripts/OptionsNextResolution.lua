--Definicion de la clase en Lua
OptionsNextResolution = {}

OptionsNextResolution.__index = OptionsNextResolution

--Constructor de la clase en Lua
function OptionsNextResolution:new()
	local obj={}
	setmetatable(obj, OptionsNextResolution)
	return obj
end

--Metodo OnButtonClicked
function OptionsNextResolution:OnButtonClick()
end
function OptionsNextResolution:OnButtonReleased()
	Menu:NextResolution();
end
--Variable global de la clase (para Luabridge)
OptionsNextResolutionLua = OptionsNextResolution:new()