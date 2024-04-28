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
		},
		{
			Name = "WEAPON_MANAGER",
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
	Name = "Gun",
	Components = {
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "0.0|5.0|8.0",
				Rotation = "true|1.0|0.0|0.0|0.0",
				Scale = "0.4|0.4|0.4"
			}
		},
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "Cube.057"
			}
		},
		{
			Name = "WEAPON_COMPONENT",
			Arguments = {
				MaxAmmo = "50",
				MagazineSize = "25",
				Cadence = "0.5"
			}
		}
	}
}

Entity6 = {
	Name = "Shotgun",
	Components = {
		{
			Name = "TRANSFORM",
			Arguments = {
				Position = "0.0|5.0|8.0",
				Rotation = "true|1.0|0.0|0.0|0.0",
				Scale = "0.4|0.4|0.4"
			}
		},
		{
			Name = "MESH_RENDERER",
			Arguments = {
				Mesh = "PruebaCubo"
			}
		},
		{
			Name = "SHOTGUN",
			Arguments = {
				MaxAmmo = "10",
				MagazineSize = "5",
				Cadence = "2",
				Balas = "3"
			}
		}
	}
}

Entity7 = {
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

Entity8 = {
	Name = "HEALTH_BAR",
	Components = {
		{
			Name = "BAR",
			Arguments = {
                OverlayName= "HealthBar",
				XPos = "17",
                YPos = "5",
                Width = "30",
                Height = "5",
                Texture = "PlayButton_Ini.png",
                Depth = "1"
			}
		}
	}
}

Entity9 = {
	Name = "AMMO_TEXT",
	Components = {
		{
			Name = "TEXT",
			Arguments = {
                OverlayName= "AmmoText",
				XPos = "70",
                YPos = "90",
                Tam = "5",
                Text = "XX/XX",
                Font = "DejaVuSerifCondensed-Italic.ttf",
                Color = "255|255|255",
                Depth = "1"
			}
		}
	}
}

Entity10 = {
	Name = "GUN_IMAGE",
	Components = {
		{
			Name = "IMAGE",
			Arguments = {
                OverlayName= "GunImage",
				XPos = "90",
                YPos = "90",
                Width = "30",
                Height = "30",
                Texture = "Pistol.png",
                Depth = "1"
			}
		}
	}
}

Entity11 = {
	Name = "TIME_TEXT",
	Components = {
		{
			Name = "TEXT",
			Arguments = {
                OverlayName= "TimeText",
				XPos = "82",
                YPos = "3",
                Tam = "5",
                Text = "TIME LEFT: XX",
                Font = "DejaVuSerifCondensed-Italic.ttf",
                Color = "255|0|0",
                Depth = "1"
			}
		}
	}
}


Entity12 = {
	Name = "ENEMIES_LEFT_TEXT",
	Components = {
		{
			Name = "TEXT",
			Arguments = {
                OverlayName= "EnemiesLeftText",
				XPos = "80",
                YPos = "8",
                Tam = "5",
                Text = "ENEMIES LEFT: XX",
                Font = "DejaVuSerifCondensed-Italic.ttf",
                Color = "0|255|0",
                Depth = "1"
			}
		}
	}
}



Entity13 = {
	Name = "MANAGERS",
	Components = {
		{
			Name = "UIMANAGER",
			Arguments = {

			}
		},
		{
			Name = "GAMEMANAGER",
			Arguments = {
				MaxTime = "60"
			}
		}
	}
}


Entities = { Entity1, Entity2, Entity3, Entity4, Entity5, Entity6, Entity7, Entity8, Entity9, Entity10, Entity11, Entity12, Entity13 }

CollisionLayers = {
	Layers = {
		DEFAULT = "",
		PLAYER = ""
	}
}