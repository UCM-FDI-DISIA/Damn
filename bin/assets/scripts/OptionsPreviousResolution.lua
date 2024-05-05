--Definicion de la clase en Lua
OptionsPreviousResolution = {}

OptionsPreviousResolution.__index = OptionsPreviousResolution

--Constructor de la clase en Lua
function OptionsPreviousResolution:new()
	local obj={}
	setmetatable(obj, OptionsPreviousResolution)
	return obj
end

--Metodo OnButtonClicked
function OptionsPreviousResolution:OnButtonClick()
end
function OptionsPreviousResolution:OnButtonReleased()
	Menu:PreviousResolution();
end
--Variable global de la clase (para Luabridge)
OptionsPreviousResolutionLua = OptionsPreviousResolution:new()