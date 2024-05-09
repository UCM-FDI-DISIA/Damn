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
                Rotation = "true|90|1.0|0.0|0.0",
                Scale = "1|1|1"
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
                Speed = "40"
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
				Radius = "0.3",
				Shape = "SPHERE",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "true"
			}
		},
		{
			Name = "BULLET_ENEMY_DAMAGE",
			Arguments = {
				Damage = "20"
			}
		},
		{
			Name = "BEHAVIOUR",
			Arguments = {
				Script = "bulletHitsEnemy"
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
                Mesh = "EnemyProjectile"
            }
        },
        {
            Name = "PROYECTILE_MOVEMENT",
            Arguments = {
                Speed = "10"
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
				Radius = "0.2",
				Shape = "SPHERE",
				CollisionFlag = "DINAMIC",
				CollisionLayer = "DEFAULT",
				Trigger = "true"
			}
		},
		{
			Name = "BULLET_PLAYER_DAMAGE",
			Arguments = {
				Damage = "15"
			}
		},
		{
			Name = "BEHAVIOUR",
			Arguments = {
				Script = "bulletHitsPlayer"
			}
		},
		{
			Name = "PARTICLE_EMITTER",
			Arguments = {
				Loop = "true",
				Time = "10.0",
				Started = "true",
				Name = "Gas"
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
                Speed = "40"
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
				Radius = "0.2",
				Shape = "SPHERE",
				CollisionFlag = "DINAMIC",
				CollisionLayer = "DEFAULT",
				Trigger = "true"
			}
		},
		{
			Name = "BULLET_ENEMY_DAMAGE",
			Arguments = {
				Damage = "20"
			}
		},
		{
			Name = "BEHAVIOUR",
			Arguments = {
				Script = "bulletHitsEnemy"
			}
		}
    }
}

MenuBullet = {
    Name = "MenuBullet", 
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
                Mesh = "PistolBullet"
            }
        },
        {
            Name = "PROYECTILE_MOVEMENT",
            Arguments = {
                Speed = "20"
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
			Arguments = { }
		},
		{
			Name = "AUDIO_EMITTER",
			Arguments = {
				SongName = "ammoPickUpEffect.wav",
				Is3D = "false"
			}
		},
		{
			Name = "AUDIO_LISTENER",
			Arguments = { }
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
				CollisionLayer = "DEFAULT",
				Trigger = "false"
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
			Name = "RIGIDBODY",
			Arguments = {
				Mass = "0.0",
				Bounciness = "0.0",
				Friction = "0.0",
				AABB = "1.5|1.5|1.5",
				PosOffset = "0|0|0",
				Radius = "1.5",
				Shape = "SPHERE",
				CollisionFlag = "STATIC",
				CollisionLayer = "DEFAULT",
				Trigger = "false"
			}
		},
		{
            Name = "MESH_RENDERER",
            Arguments = {
                Mesh = "Demon"
            }
        },
		{
			Name = "ENEMY_HEALTH",
			Arguments = {
				MaximumHealth = "50"
			}
		},
		{
			Name = "ENEMY_ATTACK",
			Arguments = {
				AttackRate = "1.5",
				RotationSpeed = "150"	
			}
		}
	}
}

ScoreText = {
	Name = "ScoreText",
	Components = {
		{
			Name = "TEXT",
			Arguments = {
				OverlayName = "ScoreText",
				XPos = "50",
				YPos = "65",
				Depth = "1",
				Tam = "12",
				Text = "00000",
				Font = "DooM.ttf",
				Color = "255|255|255"
			}
		}
	}
}

healthEffect = {
	Name = "healthEffect",
	Components = {
		{
			Name = "IMAGE",
			Arguments = {
                OverlayName= "healthEffect",
				XPos = "50",
				YPos = "50",
				Width = "100",
				Height = "100",
				Texture = "loseHealth25.png",
				Depth = "4"
			}
		}
	}
}

VignetteEffect = {
	Name = "VignetteEffect",
	Components = {
		{
			Name = "IMAGE",
			Arguments = {
                OverlayName= "vignette",
				XPos = "50",
				YPos = "50",
				Width = "100",
				Height = "100",
				Texture = "vignette.png",
				Depth = "2"
			}
		}
	}
}

FinalScoreText = {
	Name = "FinalScoreText",
	Components = {
		{
			Name = "IMAGE",
			Arguments = {
                OverlayName= "FinalScoreText",
				XPos = "50",
				YPos = "50",
				Width = "40",
				Height = "12",
				Texture = "finalScoreText.png",
				Depth = "3"
			}
		}
	}
}

WinText = {
	Name = "WinText",
	Components = {
		{
			Name = "IMAGE",
			Arguments = {
                OverlayName= "WinText",
				XPos = "50",
				YPos = "25",
				Width = "40",
				Height = "12",
				Texture = "winText.png",
				Depth = "3"
			}
		}
	}
}

LoseText = {
	Name = "LoseText",
	Components = {
		{
			Name = "IMAGE",
			Arguments = {
                OverlayName= "LoseText",
				XPos = "50",
				YPos = "25",
				Width = "60",
				Height = "18",
				Texture = "loseText.png",
				Depth = "3"
			}
		}
	}
}

MainMenuButton = {
	Name = "MainMenuButton",
	Components = {
		{
			Name = "BUTTON",
			Arguments = {
                OverlayName= "mmbutton",
				XPos = "50",
                YPos = "90",
                Width = "35",
                Height = "10",
                Texture1 = "mainmenu_white.png",
                Texture2 = "mainmenu_red.png",
                Texture3 = "mainmenu_darkred.png",
                Depth = "5"
			}
		},
        {
            Name = "BEHAVIOUR",
			Arguments = {
                Script= "ButtonScript"
			}
        }
	}	
}

Cursor = {
	Name = "UI_Cursor",
	Components = {
		{
			Name = "IMAGE",
			Arguments = {
				OverlayName= "image",
				XPos = "0",
				YPos = "0",
				Width = "5",
				Height = "5",
				Texture = "Cursor.png",
				Depth = "10"
			}
		},
		{
			Name = "CURSOR",
			Arguments = {
			}
		}
	}		
}

Blueprints = { Cube, Bullet, ShotgunShell, EnemyBullet, Player, Wall, Floor, Enemy, Ammo, MenuBullet, 
ScoreText, VignetteEffect, WinText, FinalScoreText, MainMenuButton, Cursor, healthEffect, LoseText }