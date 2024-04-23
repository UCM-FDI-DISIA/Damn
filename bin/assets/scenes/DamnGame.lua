Entity1 = {
	Name = "Camera",
	Components = {
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-5.921108245849609|-11.02579116821289|1.858309268951416",
				Rotation = "false|0.646895170211792|0.6883831024169922|-0.23910118639469147|-0.22469086945056915",
				Scale = "1.0|1.0|1.0"
			}
		},
		{
			Name = "CAMERA",
			Arguments = {
			}
		}
	}
}

Entity2 = {
	Name = "Player",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "PruebaCubo"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "0.0|0.0|0.0",
				Rotation = "true|1.0|0.0|0.0|0.0",
				Scale = "1.0|1.0|1.0"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1.0",
				Bounciness = "0.0",
				Friction = "0.0",
				AABB = "1|1|1",
				PosOffset = "0.0|0.0|0.0",
				Radius = "0.0",
				Shape = "BOX",
				CollisionFlag = "DYNAMIC",
				CollisionLayer = "PLAYER"
			}
		},
		{
			Name = "MOVEMENT_CONTROLLER",
			Arguments = {
				Speed = "1"
			}
		},
		{
			Name = "INPUT_CONTROLLER",
			Arguments = {}
		}
	}
}

Entity3 = {
	Name = "Cube",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "PruebaCubo"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "0.0|-5.0|0.0",
				Rotation = "true|1.0|0.0|0.0|0.0",
				Scale = "1.0|1.0|1.0"
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
				CollisionLayer = "PLAYER"
			}
		}
	}
}

Entity4 = {
	Name = "Enemy",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "PruebaCubo"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "0.0|5.0|0.0",
				Rotation = "true|1.0|0.0|0.0|0.0",
				Scale = "1.0|1.0|1.0"
			}
		},
		{
			 Name = "ENEMY_ATTACK",
			 Arguments = {}
		}
	}
}

Entities = { Entity1, Entity2, Entity3, Entity4 }

CollisionLayers = {
	Layers = {
		DEFAULT = "",
		PLAYER = ""
	}
}