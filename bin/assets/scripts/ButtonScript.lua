--Definicion de la clase en Lua
ButtonScript = {}

ButtonScript.__index = ButtonScript

--Constructor de la clase en Lua
function ButtonScript:new()
	local obj={}
	setmetatable(obj, ButtonScript)
	return obj
end

--Metodo OnButtonClicked
function ButtonScript:OnButtonClick()

end
function ButtonScript:OnButtonReleased()
	Buttons:Click();
end
--Variable global de la clase (para Luabridge)
ButtonScriptLua = ButtonScript:new()