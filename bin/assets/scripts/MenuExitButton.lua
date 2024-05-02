--Definicion de la clase en Lua
MenuExitButton = {}

MenuExitButton.__index = MenuExitButton

--Constructor de la clase en Lua
function MenuExitButton:new()
	local obj={}
	setmetatable(obj, MenuExitButton)
	return obj
end

--Metodo OnButtonClicked
function MenuExitButton:OnButtonClick()

end
function MenuExitButton:OnButtonReleased()
	MainMenu:Exit();
end
--Variable global de la clase (para Luabridge)
MenuExitButtonLua = MenuExitButton:new()