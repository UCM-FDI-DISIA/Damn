Entity1 = {
	Name = "Player",
	Components = {
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "0.0|5|10",
				Rotation = "false|1.0|0.0|0.0|0.0",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity2 = {
	Name = "Frog",
	Components = {
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "0.0|1|0.0",
				Rotation = "true|1.0|0.0|0.0|0.0",
				Scale = "1.0|1.0|1.0"
			}
		},
		{
			Name = "ENEMY_HEALTH",
			Arguments = {
				MaximumHealth = "1000"
			}
		},
		{
			Name = "ENEMY_ATTACK",
			Arguments = {
				AttackRate = "0.5",
				RotationSpeed = "0.2"	
			}
		}
	}
}

Entity3 = {
	Name = "Floor",
	Components = {
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "0.0|0.0|0.0",
				Rotation = "true|1.0|0.0|0.0|0.0",
				Scale = "200|0.01|200"
			}
		},
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "cube"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1.0",
				Bounciness = "0.0",
				Friction = "1.0",
				AABB = "100|5|100",
				PosOffset = "0.0|0.0|0.0",
				Radius = "0.0",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = ""
			}
		}
	}
}

Entity4 = {
	Name = "Sun",
	Components = {
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "0.0|15.0|0.0",
				Rotation = "true|1.0|0.0|0.0|0.0",
				Scale = "1.0|1.0|1.0"
			}
		},
		{
			Name = "LIGHT",
			Arguments = {
				LightType = "LT_DIRECTIONAL",
				DiffuseColor = "10.0|10.0|10.0",
				SpecularColor = "0.0|0.0|0.0"
			}
		}
	}
}

Entity5 = {
	Name = "CilindroMajo",
	Components = {
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "0.0|2.0|2.0",
				Rotation = "true|1.0|0.0|0.0|0.0",
				Scale = "1.0|1.0|1.0"
			}
		},
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Cylinder"
			}
		}
	}
}

Entities = { Entity1, Entity2, Entity3, Entity4, Entity5 }

CollisionLayers = {
	Layers = {
		DEFAULT = "",
		PLAYER = ""
	}
}