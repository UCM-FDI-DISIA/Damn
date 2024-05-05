--Definicion de la clase en Lua
bulletHitsPlayer = {}

bulletHitsPlayer.__index = bulletHitsPlayer

--Constructor de la clase en Lua
function bulletHitsPlayer:new()
	local obj={}
	setmetatable(obj, bulletHitsPlayer)
	return obj
end

--Metodo OnCollisionEnter
function bulletHitsPlayer:OnCollisionEnter()
	BulletHitsPlayer:HasHitPlayer();
end
function bulletHitsPlayer:OnCollisionStay()

end
function bulletHitsPlayer:OnCollisionExit()

end
--Variable global de la clase (para Luabridge)
bulletHitsPlayerLua = bulletHitsPlayer:new()