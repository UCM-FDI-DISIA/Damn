--Definicion de la clase en Lua
MenuPlayButton = {}

MenuPlayButton.__index = MenuPlayButton

--Constructor de la clase en Lua
function MenuPlayButton:new()
	local obj={}
	setmetatable(obj, MenuPlayButton)
	return obj
end

--Metodo OnButtonClicked
function MenuPlayButton:OnButtonClick()

end
function MenuPlayButton:OnButtonReleased()
	PlayButton:StartGame();
end
--Variable global de la clase (para Luabridge)
MenuPlayButtonLua = MenuPlayButton:new()