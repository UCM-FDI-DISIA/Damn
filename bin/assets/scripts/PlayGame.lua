--Definicion de la clase en Lua
PlayGame = {}

PlayGame.__index = PlayGame

--Constructor de la clase en Lua
function PlayGame:new()
	local obj={}
	setmetatable(obj, PlayGame)
	return obj
end

--Metodo OnButtonClicked
function PlayGame:OnButtonClick()
	print("Estoy encima del boton");
end
function PlayGame:OnButtonReleased()
	print("Has dejado de pulsar para ir al menú\n");
	Play:Replay();
end
--Variable global de la clase (para Luabridge)
PlayGameLua = PlayGame:new()