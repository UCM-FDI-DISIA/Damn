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
		},
		{
			Name = "PLAYER_HEALTH",
			Arguments = {
				MaximumHealth = "100"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1.0",
				Bounciness = "0.0",
				Friction = "1.0",
				AABB = "1|5|1",
				PosOffset = "0|0|0",
				Radius = "0.0",
				Shape = "BOX",
				CollisionFlag = "DYNAMIC",
				CollisionLayer = ""

			}
		},
		{
			Name = "CAMERA",
			Arguments = {
			}
		},
		{
			Name = "CAMERA_MOVEMENT",
			Arguments = { 
				Sensivity = "25.0"
			}
		},
		{
			Name = "MOVEMENT_CONTROLLER",
			Arguments = {
				Speed = 10;
			}
		},
		{
			Name = "INPUT_CONTROLLER",
			Arguments = {}
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
				AttackRate = "2",
				RotationSpeed = "0.08"	
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
				Scale = "1|0.01|1"
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
	Name = "Ammo",
	Components = {
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "3.0|2|1.0",
				Rotation = "true|1.0|0.0|0.0|0.0",
				Scale = "0.3|0.3|0.3"
			}
		},
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "PruebaCubo"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1.0",
				Bounciness = "0.0",
				Friction = "0.0",
				AABB = "2|2|2",
				PosOffset = "0.0|0.0|0.0",
				Radius = "1.0",
				Shape = "BOX",
				CollisionFlag = "KINEMATIC",
				CollisionLayer = ""
			}
		},
		{
			Name = "AMMO_BOX_COMPONENT",
			Arguments = {
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