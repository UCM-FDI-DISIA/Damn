--Definicion de la clase en Lua
bulletHitsEnemy = {}

bulletHitsEnemy.__index = bulletHitsEnemy

--Constructor de la clase en Lua
function bulletHitsEnemy:new()
	local obj={}
	setmetatable(obj, bulletHitsEnemy)
	return obj
end

--Metodo OnCollisionEnter
function bulletHitsEnemy:OnCollisionEnter()
	BulletHitsEnemy:HasHitEnemy();
end
function bulletHitsEnemy:OnCollisionStay()

end
function bulletHitsEnemy:OnCollisionExit()

end
--Variable global de la clase (para Luabridge)
bulletHitsEnemyLua = bulletHitsEnemy:new()