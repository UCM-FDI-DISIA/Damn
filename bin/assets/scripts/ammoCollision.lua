ammoCollision = {}

ammoCollision.__index = ammoCollision

function ammoCollision:new()
   local obj={}
   setmetatable(obj, ammoCollision)
   return obj
end

--Metodo OnCollisionEnter
function ammoCollision:OnCollisionEnter()
   AmmoCollision:PickUpAmmo()
end
function ammoCollision:OnCollisionStay()

end
function ammoCollision:OnCollisionExit()

end
--Variable global de la clase (para Luabridge)
ammoCollisionLua = ammoCollision:new()