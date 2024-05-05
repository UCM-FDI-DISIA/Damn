--Definicion de la clase en Lua
OptionsFullscreen = {}

OptionsFullscreen.__index = OptionsFullscreen

--Constructor de la clase en Lua
function OptionsFullscreen:new()
	local obj={}
	setmetatable(obj, OptionsFullscreen)
	return obj
end

--Metodo OnButtonClicked
function OptionsFullscreen:OnButtonClick()
end
function OptionsFullscreen:OnButtonReleased()
	Menu:Fullscreen();
end
--Variable global de la clase (para Luabridge)
OptionsFullscreenLua = OptionsFullscreen:new()