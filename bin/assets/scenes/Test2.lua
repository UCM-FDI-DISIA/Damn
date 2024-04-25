Entity1 = {
	Name = "building_A",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "building_A"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "0.0|0.0|-0.0",
				Rotation = "false|1.0|-8.146033536604591e-08|0.0|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				AABB = "2.0|1.6500002145767212|2.0",
				Bounciness = "0",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Friction = "0",
				Mass = "1.0",
				PosOffset = "0|0|0",
				Radius = "2.0",
				Shape = "BOX"
			}
		}
	}
}

Entity2 = {
	Name = "Camera",
	Components = {
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "0.12201730906963348|3.813957452774048|7.513043403625488",
				Rotation = "false|0.8100711703300476|0.5862784385681152|0.0010067428229376674|-0.007844752632081509",
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

Entity3 = {
	Name = "building_A.001",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "building_A"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "-7.740312576293945|0.0|6.835649490356445",
				Rotation = "false|1.0|-8.146033536604591e-08|0.0|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity4 = {
	Name = "building_A.002",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "building_A"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "7.252551078796387|0.0|6.961655616760254",
				Rotation = "false|1.0|-8.146033536604591e-08|0.0|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity5 = {
	Name = "building_A.003",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "building_A"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "0.0|0.0|14.208013534545898",
				Rotation = "false|1.0|-8.146033536604591e-08|0.0|-0.0",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entity6 = {
	Name = "building_A.004",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "building_A"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "0.17272520065307617|11.014262199401855|6.961655616760254",
				Rotation = "false|0.7858887910842896|0.3914790153503418|0.8702150583267212|-0.47349005937576294",
				Scale = "1.0|1.0|1.0"
			}
		}
	}
}

Entities = { Entity1, Entity2, Entity3, Entity4, Entity5, Entity6 }

CollisionLayers = {
	Layers = {
		DEFAULT = ""
	}
}