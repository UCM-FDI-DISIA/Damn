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

Ammo = {
	Name = "AmmoBox",
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
                Mesh = "ammoBox"
            }
        },
		{
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "0.0",
				Bounciness = "0.0",
				Friction = "0.0",
				AABB = "1|1|1",
				PosOffset = "0|0|0",
				Radius = "0.0",
				Shape = "BOX",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "true"
			}
		},
		{
			Name = "AMMO_BOX_COMPONENT",
			Arguments = {

			}
		},
		{
			Name = "BEHAVIOUR",
			Arguments = {
				Script = "ammoCollision"
			}
		}
	}
}
ShotgunShell = {
    Name = "ShotgunShell", 
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
                Mesh = "ShotgunShell"
            }
        },
        {
            Name = "PROYECTILE_MOVEMENT",
            Arguments = {
                Speed = "0.001"
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
EnemyBullet = {
    Name = "EnemyBullet", 
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
                Mesh = "PistolBullet"
            }
        },
        {
            Name = "PROYECTILE_MOVEMENT",
            Arguments = {
                Speed = "0.5"
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
                Mesh = "PistolBullet"
            }
        },
        {
            Name = "PROYECTILE_MOVEMENT",
            Arguments = {
                Speed = "0.001"
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
				AABB = "1|3.5|1",
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

Enemy = {
	Name = "Enemy",
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
            Name = "MESH_RENDERER",
            Arguments = {
                Mesh = "Cube.057"
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

Blueprints = { Cube, Frog, Bullet, ShotgunShell, EnemyBullet, Player, Wall, Floor, Enemy, Ammo }