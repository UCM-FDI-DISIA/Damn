--Definicion de la clase en Lua
MenuOptionsButton = {}

MenuOptionsButton.__index = MenuOptionsButton

--Constructor de la clase en Lua
function MenuOptionsButton:new()
	local obj={}
	setmetatable(obj, MenuOptionsButton)
	return obj
end

--Metodo OnButtonClicked
function MenuOptionsButton:OnButtonClick()

end
function MenuOptionsButton:OnButtonReleased()
	Menu:Options();
end
--Variable global de la clase (para Luabridge)
MenuOptionsButtonLua = MenuOptionsButton:new()