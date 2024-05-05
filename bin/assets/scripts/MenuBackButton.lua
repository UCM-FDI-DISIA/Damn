--Definicion de la clase en Lua
MenuBackButton = {}

MenuBackButton.__index = MenuBackButton

--Constructor de la clase en Lua
function MenuBackButton:new()
	local obj={}
	setmetatable(obj, MenuBackButton)
	return obj
end

--Metodo OnButtonClicked
function MenuBackButton:OnButtonClick()

end
function MenuBackButton:OnButtonReleased()
	Menu:Back();
end
--Variable global de la clase (para Luabridge)
MenuBackButtonLua = MenuBackButton:new()