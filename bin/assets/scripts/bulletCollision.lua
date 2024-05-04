--Definicion de la clase en Lua
bulletCollision = {}

bulletCollision.__index = bulletCollision

--Constructor de la clase en Lua
function bulletCollision:new()
	local obj={}
	setmetatable(obj, bulletCollision)
	return obj
end

--Metodo OnCollisionEnter
function bulletCollision:OnCollisionEnter()
	BulletCollision:HasHitSth();
end
function bulletCollision:OnCollisionStay()

end
function bulletCollision:OnCollisionExit()

end
--Variable global de la clase (para Luabridge)
bulletCollisionLua = bulletCollision:new()