--Definicion de la clase en Lua
CollisionDamage = {}

CollisionDamage.__index = CollisionDamage

--Constructor de la clase en Lua
function CollisionDamage:new()
	local obj={}
	setmetatable(obj, CollisionDamage)
	return obj
end

--Metodo OnCollisionEnter
function CollisionDamage:OnCollisionEnter()
	Health:HasBeenHit();
end
function CollisionDamage:OnCollisionStay()
	print("Se queda colision\n");
end
function CollisionDamage:OnCollisionExit()
	print("Sale colision");
end
--Variable global de la clase (para Luabridge)
CollisionDamageLua = CollisionDamage:new()