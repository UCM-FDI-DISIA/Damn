Cube = {
    Name = "Cube", 
    Components = {
        {
            Name = "TRANSFORM", 
            Arguments = {
                Position = "0|0|0",
                Rotation = "false|1.0|0.0|0.0|0.0",
                Scale = "1|1|1"
            }
        },
        {
            Name = "MESH_RENDERER",
            Arguments = {
                Mesh = "cube"
            }
        }
    }
}

Bullet = {
    Name = "Bullet", 
    Components = {
        {
            Name = "TRANSFORM", 
            Arguments = {
                Position = "0|0|0",
                Rotation = "false|1.0|0.0|0.0|0.0",
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
            Name = "PROYECTILE_MOVEMENT",
            Arguments = {
                Speed = "0.05"
            }
        },
		{
			Name = "BEHAVIOUR",
			Arguments = {
				Script = "CollisionDamage"
			}
		}
    }
}

Player = {
    Name = "Player",
    Components = {
        {
            Name = "TRANSFORM",
            Arguments = {
                Position = "0|0|100",
                Rotation = "false|1.0|0.0|0.0|0.0",
                Scale = "1|1|1"
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
				AABB = "1|2|1",
				PosOffset = "0|0|0",
				Radius = "0.0",
				Shape = "BOX",
				CollisionFlag = "DYNAMIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
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
				Sensivity = "50.0"
			}
		},
		{
			Name = "MOVEMENT_CONTROLLER",
			Arguments = {
				Speed = "10";
			}
		},
		{
			Name = "INPUT_CONTROLLER",
			Arguments = {}
		},
		{
			Name = "WEAPON_MANAGER",
			Arguments = {}
		}
    }
}

Frog = {
    Name = "Frog", 
    Components = {
        {
            Name = "TRANSFORM", 
            Arguments = {
                Position = "0|0|100",
                Rotation = "false|1.0|0.0|0.0|0.0",
                Scale = "10|10|10"
            }
        },
        {
            Name = "MESH_RENDERER",
            Arguments = {
                Mesh = "Cube.057"
            }
        }
    }
}

Floor = {
	Name = "Floor",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Floor"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "0.0|4.733038902282715|-0.0",
				Rotation = "false|1.0|0.0|0.0|-0.0",
				Scale = "1|1|1"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1.0",
				Bounciness = "0",
				Friction = "1.0",
				AABB = "8.660253524780273|10.0|0.6555773019790649",
				PosOffset = "0|0|0",
				Radius = "10.0",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT"
			}
		}
	}
}

Wall = {
	Name = "Wall",
	Components = {
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Wall"
			}
		},
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "2.1348886489868164|2.3353893756866455|-3.710345506668091",
				Rotation = "false|0.9659239649772644|0.0003822667058557272|-0.25881826877593994|-0.001967353280633688",
				Scale = "1|1|1"
			}
		},
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "1.0",
				Bounciness = "0",
				Friction = "1.0",
				AABB = "4.971125602722168|0.10000001639127731|4.0774946212768555",
				Radius = "4.971125602722168",
				PosOffset = "0|0|0",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT"
			}
		}
	}
}

Blueprints = { Cube, Frog, Bullet, Player, Wall, Floor }